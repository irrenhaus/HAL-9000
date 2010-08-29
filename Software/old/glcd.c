/*
 Port&Copyright:      Mark de Jong, mail to mark at mdejong.de
 Port&Copyright:      Christian Kranz, mail to cnkz at yahoo.com
 Original Copyright:  Hagen Reddmann  mailto HaReddmann at T-Online dot de
 Author:              Hagen Reddmann
 Remarks:             this Copyright must be included
 known Problems:      none
 Version:             0.1. 2005
 Description:         Graphic Library for Siemens S65, M65, CX65 and RX65 Display
 */

#include "glcd.h"
#include "spidriver.h"
#include "util.h"

#define RS_SET GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_SET);
#define RS_CLR GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_RESET);

#define RESET_SET GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_SET);
#define RESET_CLR GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);

#define CS_SET GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
#define CS_CLR GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);

const u16 INIT1[2] = { 0xFDFD, 0xFDFD };
const u16 INIT2[10] = { 0xEF00, 0xEE04, 0x1B04, 0xFEFE, 0xFEFE, 0xEF90, 0x4A04,
		0x7F3F, 0xEE04, 0x4306 };
const u16 INIT3[20] = { 0xEF90, 0x0983, 0x0800, 0x0BAF, 0x0A00, 0x0500, 0x0600,
		0x0700, 0xEF00, 0xEE0C, 0xEF90, 0x0080, 0xEFB0, 0x4902, 0xEF00, 0x7F01,
		0xE181, 0xE202, 0xE276, 0xE183 };
const u16 INIT4[3] = { 0x8001, 0xEF90, 0x0000 };

uint8_t glcd_MemCtrl; // display RAM access and degree of rotation
glcdFlags_t glcd_Flags; // glcd lib flags
glcdColor_t glcd_Colors[1 << COLOR_TABLE_BITS];

#ifdef USE_CLIPPING
glcdRect_t glcd_Clip; // clipping coordinates, only paint operation in this rect are visible
#endif

glcdRect_t glcdScreen; // physical dimensions of the screen

glcdPoint_t glcd_Cursor; // current cursor for painting characters
glcdRect_t glcd_Window; // text output window, AutoLineFeed checks this
uint8_t glcd_FontFirstChar; // first defined character in selected font
uint8_t glcd_FontLastChar; // last defined character in selected font
uint8_t glcd_FontWidth; // character width for fixed pitch of selected font
uint8_t glcd_FontHeight; // character height of selected font
uint8_t glcd_FontBitsPixel; // color depth of selected font, if MSB is set the font is compressed
uint16_t glcd_FontSize; // Font size
glcdFontFunc_t glcd_FontRead; // User definierte Readcallback für die Fontdaten
glcdFontData_t *glcd_FontData; // pointer to font data, a read callback can store own values here
// the lib access trough this pointer ONLY if glcd_FontRead == NULL to flash
// otherwise this value is a paramter to the user callback

void io_reset_io(uint16_t GPIO_Pin) {
	if (GPIO_Pin == S65_IO_CS) {
		CS_CLR;
	} else if (GPIO_Pin == S65_IO_RS) {
		RS_CLR;
	} else if (GPIO_Pin == S65_IO_RESET) {
		RESET_CLR;
	}
}

void io_set_io(uint16_t GPIO_Pin) {
	if (GPIO_Pin == S65_IO_CS) {
		CS_SET;
	} else if (GPIO_Pin == S65_IO_RS) {
		RS_SET;
	} else if (GPIO_Pin == S65_IO_RESET) {
		RESET_SET;
	}
}

void glcdDisplayByte(uint8_t cmd) // send a byte to display
{
	SPI_driver_send_byte(cmd);
}

void glcdDisplayWord(uint16_t cmd) // send a word to display
{
	SPI_driver_send_word(cmd);
}

void glcdDisplayCommand(uint16_t cmd) // send a command to display
{
	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	SPI_driver_send_word(cmd);
	io_set_io(S65_IO_CS);
}

void glcdDisplayData(uint16_t data) // send data to display
{
	io_reset_io(S65_IO_CS);
	io_reset_io(S65_IO_RS);
	SPI_driver_send_word(data);
	io_set_io(S65_IO_CS);
}

void glcdDisplayBufferWord(uint16_t *buffer, uint8_t buffersize,
		uint8_t flashstored) // send a buffer of words to the display
{
	unsigned int counter;
	flashstored = flashstored;
	for (counter = 0; counter < buffersize; counter++) {
		glcdDisplayWord(*buffer++);
	}
}

void glcdDisplayBufferByte(uint8_t *buffer, uint8_t buffersize,
		uint8_t flashstored) // send a buffer of bytes to the display
{
	unsigned int counter;
	flashstored = flashstored;
	for (counter = 0; counter < buffersize; counter++) {
		glcdDisplayByte(*buffer++);
	}
}

void glcdDisplayBufferCommand(uint16_t *buffer, uint8_t buffersize,
		uint8_t flashstored) // send a buffer of bytes as command to the display
{
	unsigned int counter;
	flashstored = flashstored;
	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	for (counter = 0; counter < buffersize; counter++) {
		glcdDisplayWord(*buffer++);
	}
	io_set_io(S65_IO_CS);
}

void glcdDisplayBufferData(uint16_t *buffer, uint8_t buffersize,
		uint8_t flashstored) // send a buffer of bytes as data to the display
{
	unsigned int counter;
	flashstored = flashstored;
	io_reset_io(S65_IO_CS);
	io_reset_io(S65_IO_RS);
	for (counter = 0; counter < buffersize; counter++) {
		glcdDisplayWord(*buffer++);
	}
	io_set_io(S65_IO_CS);
}

void glcdDisplayInit(void) // initialize the display, MUST be normaly NEVER called, it's automaticaly called by the initialization code
{
	// set start-up levels
	io_reset_io(S65_IO_RESET);

	// power-up of display
	io_set_io(S65_IO_CS);
	io_set_io(S65_IO_RS);

	// set port directions

	glcdWait(5);

	// start init of display
	io_set_io(S65_IO_RESET);
	glcdWait(50);

	// Software reset
	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	glcdDisplayWord(0xFDFD);
	glcdDisplayWord(0xFDFD);
	io_set_io(S65_IO_CS);

	glcdWait(68);

	// init part 1 of display
	glcdDisplayBufferCommand((uint16_t *) &INIT1, sizeof(INIT1) / 2, 0);
	glcdWait(8);

	// init part 2 of display
	glcdDisplayBufferCommand((uint16_t *) &INIT2, sizeof(INIT2) / 2, 0);
	glcdWait(50);

	// init part 3 of display
	glcdDisplayBufferCommand((uint16_t *) &INIT4, sizeof(INIT4) / 2, 0);
	glcdWait(5);

	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	glcdDisplayWord(0xEF90);
	glcdDisplayWord(0x0000);
	io_set_io(S65_IO_CS);

	glcdSetOrientation(ORIENTATION_90);
	glcdSetRect(glcd_Clip, SCREEN_LEFT, SCREEN_TOP, SCREEN_RIGHT, SCREEN_BOTTOM);
#ifdef USE_FONTS
	glcdSetRect(glcd_Window, SCREEN_LEFT, SCREEN_TOP, SCREEN_RIGHT, SCREEN_BOTTOM);
#endif

	glcdSetBkColor(SCREEN_COLOR); // Hintergrund
	glcdSetFgColor(BLACK); // Vordergrund
	glcdSetFrColor(GRAY); // Rahmen
	glcdSetShColor(SILVER); // Schatten

	// clear screen
	glcdClearScreen();

	// turn-on backlight
	glcdBackLightOn();
}

void glcdDisplayOn(void) // switch display on, booster on, sleep out
{
	glcdDisplayCommand(0x8001);
}

void glcdDisplayOff(void) // switch display off, booster off, sleep in
{
	glcdDisplayCommand(0x8000);
}

void glcdPowerOn(void) // switch backlight on
{
	// switch backlight on
}

void glcdPowerOff(void) // switch backlight off
{
	// switch backlight of
}

void glcdBackLightOn(void) // switch backlight on
{
	// switch backlight on
}

void glcdBackLightOff(void) // switch backlight off
{
	// switch backlight of
}

void glcdWait(uint16_t ms) // wait some milliseconds, XTAL must be correct defined
{
/*#define MILLSECOND 0x88

	volatile unsigned long counter;
	for (counter = 0; counter < (ms * MILLSECOND); counter++)
		;*/
	delay_ms(ms);
}

void glcdFillScreen(uint16_t color) {
	unsigned int counter;

	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	glcdDisplayWord(0xEF90);
	if (glcd_MemCtrl & (1 << MEM_90)) {
		glcdDisplayWord(0x0500);
	} else {
		glcdDisplayWord(0x0504);
	}
	glcdDisplayWord(0x0600);
	glcdDisplayWord(0x0700);
	glcdDisplayWord(0x0800);
	glcdDisplayWord(0x0900 + SCREEN_WIDTH - 1);
	glcdDisplayWord(0x0A00);
	glcdDisplayWord(0x0B00 + SCREEN_HEIGHT - 1);
	io_reset_io(S65_IO_RS);
	for (counter = 0; counter < (SCREEN_WIDTH * SCREEN_HEIGHT); counter++) {
		glcdDisplayWord(color);
	}
	io_set_io(S65_IO_CS);

}

void glcdSetOrientation(uint8_t orientation) // degree 0°,90°,180°,270° -> 0,1,2,3
{
	glcd_MemCtrl = orientation;
}

void glcdSetAddr(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2) // set RAM access pointer of display
{
	io_reset_io(S65_IO_CS);
	io_set_io(S65_IO_RS);
	glcdDisplayWord(0xEF90);

	if (glcd_MemCtrl & (1 << MEM_90)) {
		glcdSwapCoord(x1, y1);
		glcdSwapCoord(x2, y2);
	}

	if (glcd_MemCtrl == MEM_90) {
		glcdDisplayWord(0x0500);
	} else {
		glcdDisplayWord(0x0504);
	}

	// X-direction end point
	glcdDisplayWord(0x0900 + x2);

	// x-direction start point
	glcdDisplayWord(0x0800 + x1);

	// y-direction end point
	glcdDisplayWord(0x0B00 + y2);

	// y-direction start point
	glcdDisplayWord(0x0A00 + y1);

	io_set_io(S65_IO_CS);
}

void glcdPutPixel(glcdColor_t color) // put a pixel, glcdSetAddr() MUST be prior called
{
	glcdDisplayData(color);
}

void glcdSetPixel(glcdCoord_t x, glcdCoord_t y, glcdColor_t color) // set a pixel
{
	if ((x >= glcd_Clip.X1) & (x <= glcd_Clip.X2) & (y >= glcd_Clip.Y1) & (y
			<= glcd_Clip.Y2)) {
		glcdSetAddr(x, y, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);
		glcdPutPixel(color);
	}
}

void glcdDoFillRect(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2,
		glcdCoord_t y2, glcdColor_t color) {
	glcdCoord_t x, y;
	if ((x1 > glcd_Clip.X2) || (x2 < glcd_Clip.X1) || (y1 > glcd_Clip.Y2)
			|| (y2 < glcd_Clip.Y1)) {
		return;
	} else {
		if (x1 < glcd_Clip.X1) {
			x1 = glcd_Clip.X1;
		}
		if (y1 < glcd_Clip.Y1) {
			y1 = glcd_Clip.Y1;
		}
		if (x2 > glcd_Clip.X2) {
			x2 = glcd_Clip.X2;
		}
		if (y2 > glcd_Clip.Y2) {
			y2 = glcd_Clip.Y2;
		}
		if ((x1 <= x2) & (y1 <= y2)) {
			glcdSetAddr(x1, y1, x2, y2);
			for (y = y1; y <= y2; y++) {
				for (x = x1; x <= x2; x++) {
					glcdPutPixel(color);
				}
			}
		}
	}
}

void glcdFillRect(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2,
		glcdCoord_t y2, glcdColor_t color) {
	glcdCheckCoord(x1, x2);
	glcdCheckCoord(y1, y2);
	glcdDoFillRect(x1, y1, x2, y2, color);
}

void glcdRectangle(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2,
		glcdCoord_t y2) // paint border with glcdFgColor and fill background with glcdBkColor
{
	glcdCheckCoord(x1, x2);
	glcdCheckCoord(y1, y2);
	if (glcdFgColor != NONE) {
		glcdDoFillRect(x1, y1, x2, y1, glcdFgColor);
		glcdDoFillRect(x2, y1, x2, y2, glcdFgColor);
		glcdDoFillRect(x1, y2, x2, y2, glcdFgColor);
		glcdDoFillRect(x1, y1, x1, y2, glcdFgColor);
	}
	if (glcdBkColor != NONE) {
		glcdDoFillRect(++x1, ++y1, --x2, --y2, glcdBkColor);
	}
}

void glcdFrame(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2) // paint a frame, colors glcdBkColor, glcdFrColor, glcdShColor used
{
	glcdCheckCoord(x1, x2);
	glcdCheckCoord(y1, y2);

	if (glcdShColor != NONE) {
		glcdDoFillRect(x1 + 4, y2, x2 - 2, y2, glcdShColor);
		glcdDoFillRect(x2, y1 + 4, x2, y2 - 2, glcdShColor);
		x2--;
		y2--;
		glcdDoFillRect(x2 - 2, y2 - 2, x2, y2, glcdShColor);
	}
	if (glcdFrColor != NONE) {
		glcdDoFillRect(x1 + 2, y1, x2 - 2, y1, glcdFrColor);
		glcdDoFillRect(x1 + 2, y2, x2 - 2, y2, glcdFrColor);
		glcdDoFillRect(x2, y1 + 2, x2, y2 - 2, glcdFrColor);
		glcdDoFillRect(x1, y1 + 2, x1, y2 - 2, glcdFrColor);
		x1++;
		y1++;
		x2--;
		y2--;
		glcdSetPixel(x1, y1, glcdFrColor);
		glcdSetPixel(x2, y1, glcdFrColor);
		glcdSetPixel(x1, y2, glcdFrColor);
		glcdSetPixel(x2, y2, glcdFrColor);
	}
	if (glcdBkColor != NONE) {
		glcdDoFillRect(x1, y1 + 1, x1, y2 - 1, glcdBkColor);
		glcdDoFillRect(x2, y1 + 1, x2, y2 - 1, glcdBkColor);
		glcdDoFillRect(x1 + 1, y1, x2 - 1, y2, glcdBkColor);
	}
}

#ifdef USE_LINES
void glcdLine(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2) {
	uint8_t swap;
	int16_t e;
	glcdCoord_t x3;
	glcdCoord_t y3;
	glcdCoord_t i;

	if (glcdFgColor != NONE) {
		if ((x1 == x2) | (y1 == y2)) {
			glcdFillRect(x1, y1, x2, y2, glcdFgColor);
		} else {
			glcdCoord_t dx, dy, sx, sy;

			if (x1 < x2) {
				dx = x2 - x1;
				sx = +1;
			} else {
				dx = x1 - x2;
				sx = -1;
			}
			if (y1 < y2) {
				dy = y2 - y1;
				sy = +1;
			} else {
				dy = y1 - y2;
				sy = -1;
			}

			swap = (dx > dy) ? 0 : 1;
			if (swap) {
				glcdSwapCoord(x1, y1);
				glcdSwapCoord(dx, dy);
				glcdSwapCoord(sx, sy);
			}

			e = dy - dx + dy;
			x3 = x1;
			y3 = y1;
			x2 = x1;
			y2 = y1;
			/* Diese Loop ist suboptimal. Man könnte mehr rausholen wenn man die Hardware besser ausnutzen würde, aber
			 dann wäre diese Routine eben nicht mehr Hardwareunabhängig so wie jetzt. */
			for (i = 0; i <= dx; i++) {
				if ((x1 != x2) & (y1 != y2)) {
					if (swap) {
						glcdSwapCoord(x2, y2);
						glcdSwapCoord(x3, y3);
					}
					glcdFillRect(x2, y2, x3, y3, glcdFgColor);
					x2 = x1;
					y2 = y1;
				};
				x3 = x1;
				y3 = y1;
				while (e >= 0) {
					y1 += sy;
					e -= dx;
					e -= dx;
				}
				x1 += sx;
				e += dy;
				e += dy;
			}
			if (swap) {
				glcdSwapCoord(x2, y2);
				glcdSwapCoord(x3, y3);
			}
			glcdFillRect(x2, y2, x3, y3, glcdFgColor);
		}
	}
}

#endif // USE_LINES
#ifdef USE_ELLIPSES
/* Hilfsfunktion für Ellipsen */
void glcdDoPixelLine(int16_t x1, int16_t x2, int16_t y, uint8_t fill) {

	if ((y >= glcd_Clip.Y1) & (y <= glcd_Clip.Y2)) {
		if (x1 < glcd_Clip.X1) {
			x1 = glcd_Clip.X1;
		} else {
			if (x1 > glcd_Clip.X2) {
				return;
			} else {
				if (glcdFgColor != NONE) {
					glcdSetPixel(x1, y, glcdFgColor);
				}
				x1++;
			}
		}
		if (x2 < glcd_Clip.X1) {
			return;
		} else {
			if (x2 > glcd_Clip.X2) {
				x2 = glcd_Clip.X2;
			} else {
				if (glcdFgColor != NONE) {
					glcdSetPixel(x2, y, glcdFgColor);
				}
				x2--;
			}
		}
		if ((fill) & (glcdBkColor != NONE) & (x1 <= x2)) {
			glcdDoFillRect(x1, y, x2, y, glcdBkColor);
		}
	}
}

void glcdCircle(glcdCoord_t x, glcdCoord_t y, glcdCoord_t r) // circle at x,y with radius r
{
	glcdEllipse(x, y, r, r);
}

void glcdEllipse(glcdCoord_t x, glcdCoord_t y, glcdCoord_t a, glcdCoord_t b) // ellipse at x,y with radius a,b
{
	glcdCoord2_t aa;
	glcdCoord2_t bb;
	int32_t er, cr, ir;
	int16_t ys, ye, xs, xe;
	uint8_t fill;

	if ((a == 0) | (b == 0)) {
		return;
	}
	if ((a > 180) | (b > 180)) {
		if (glcdBkColor != NONE) {
			glcdFillRect(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1, glcdBkColor);
		}
		return;
	}

	aa = a * a;
	bb = b * b;

	cr = bb >> 1;
	cr = cr * (a + a - 1);
	ir = aa >> 1;
	ir = -ir;
	er = 0;

	xs = x;
	xs = xs - a;
	xe = x;
	xe = xe + a;
	ys = y;
	ye = y;
	while (cr >= ir) {
		glcdDoPixelLine(xs, xe, ys, 1);
		if (ys != ye) {
			glcdDoPixelLine(xs, xe, ye, 1);
		}
		ys--;
		ye++;
		ir += aa;
		er += ir;
		if (2 * er > cr) {
			er -= cr;
			cr -= bb;
			xs++;
			xe--;
		}
	}

	cr = aa >> 1;
	cr = cr * (b + b - 1);
	ir = bb >> 1;
	ir = -ir;
	er = 0;

	xs = x;
	xe = x;
	ys = y;
	ys = ys - b;
	ye = y;
	ye = ye + b;
	fill = 1;
	while (ir <= cr) {
		glcdDoPixelLine(xs, xe, ys, fill);
		if (ys != ye) {
			glcdDoPixelLine(xs, xe, ye, fill);
		}
		fill = 0;
		ir += bb;
		er += ir;
		if (2 * er > cr) {
			er -= cr;
			cr -= aa;
			ys++;
			ye--;
			fill = 1;
		}
		xs--;
		xe++;
	}
}
#endif // USE_ELLIPSES
#ifdef USE_CLIPPING
void glcdSwapClipRect(void) // swaps glcd_Clip.X1 <-> glcd_Clip.Y1, glcd_Clip_X2 <-> glcd_Clip.Y2
{
}
#endif // USE_CLIPPING
#ifdef USE_FONTS
void glcdSelectFont(glcdFontData_t *data, glcdFontFunc_t callback) // select a font
{
	glcd_FontData = data;
	glcd_FontRead = callback;
	glcd_FontSize = glcd_FontRead(glcd_FontData + 0);
	glcd_FontSize <<= 8;
	glcd_FontSize = glcd_FontRead(glcd_FontData + 1);
	glcd_FontWidth = glcd_FontRead(glcd_FontData + 2);
	glcd_FontHeight = glcd_FontRead(glcd_FontData + 3);
	glcd_FontBitsPixel = glcd_FontRead(glcd_FontData + 4);
	glcd_FontFirstChar = glcd_FontRead(glcd_FontData + 5);
	glcd_FontLastChar = glcd_FontRead(glcd_FontData + 6);
}

uint8_t glcdFontRead(glcdFontData_t *index) {
	return (*index);
}

void glcdNewLine(void) // <CR><LF> in glcd_Window of glcd_Cursor
{
	glcd_Cursor.X = glcd_Window.X1;
	glcd_Cursor.Y += glcd_FontHeight;
	if (glcd_Cursor.Y + glcd_FontHeight > glcd_Window.Y2) {
		glcd_Cursor.Y = glcd_Window.Y1;
	}
}

uint8_t glcdDrawChar(uint8_t c) // draw a character, returns width of char, if any painted
{
	uint8_t charwidth;
	uint8_t width;
	uint8_t i;

	uint8_t bitspixel;
	uint8_t bitsmask;
	uint16_t bits;
	uint8_t bitscount;
	uint8_t table[4];

	uint8_t padding;

	glcdFontData_t *data;

	uint32_t index;

	glcdCoord_t x;
	glcdCoord_t y;

	uint8_t pixelcount;
	glcdColor_t pixelcolor;
	uint8_t clipinvalid;
	glcdCoord_t clipY;
	glcdCoord_t stopY;
	glcdCoord_t stopX;

	if (c == '\n') {
		glcdNewLine();
		return (0);
	}
	// ist das Zeichen im Font definiert und auch ein Font selektiert ??
	if ((c < glcd_FontFirstChar) || (c > glcd_FontLastChar) || (glcd_FontSize
			== 0)) {
		return (0);
	}

	// ist das Zeichen im Font deklariert aber nicht definiert ??
	charwidth = glcd_FontRead(glcd_FontData + FONT_HEADER_SIZE + c
			- glcd_FontFirstChar);
	if (charwidth == 0) {
		return (0);
	}

	// alle Zeichen kleiner #128 haben rechts eine implizite Leerspalte
	width = charwidth;
	if (c < (char) 128) {
		width++;
	}

	// wenn wir den Zeichensatz mit fester Breite zeichnen sollen dann setze die Width entsprechend
	if ((glcd_Flags.bits.FixedFont == 1) & (width <= glcd_FontWidth)) {
		width = glcd_FontWidth;
	}

	// passt das Zeichen noch in das Zeichen-Fenster ?? falls nein eventuell ein Linefeed einfügen
	if ((glcd_Flags.bits.AutoLineFeed == 1) & (glcd_Cursor.X + width
			>= glcd_Window.X2)) {
		glcdNewLine();
	}

	// ist das Zeichen überhaupt noch ansatzweise sichtbar ?
	if ((glcd_Cursor.X > glcd_Clip.X2) | (glcd_Cursor.Y > glcd_Clip.Y2)) {
		return (0);
	}

	x = glcd_Cursor.X;
	y = glcd_Cursor.Y;
	glcd_Cursor.X += width;

	// ist das Zeichen überhaupt noch ansatzweise sichtbar ?
	if ((x > glcd_Clip.X2) | (y + glcd_FontHeight < glcd_Clip.Y1)) {
		return (0);
	}

	i = 0;

	// falls FixedFont müssen die Zeichen innerhalb glcd_FontWidth zentriert werden, aber nur
	// wenn das Zeichen schmaler als glcd_FontWidth ist. Wir füllen dann auch gleich den rechten
	// und linken Rand des Zeichens, ebenfalls nur wenn die Hintergrundfarbe nicht transparent ist.
	if ((glcd_Flags.bits.FixedFont == 1) & (width > charwidth)) {
		i = (width - charwidth) / 2;
		if (glcdBkColor != NONE) {
			//            glcdDoFillRect(x, y, x + i -1, y + glcd_FontHeight -1, glcdBkColor);
		}
		x += i;
	}
	i = width - charwidth - i;
	if ((i > 0) & (glcdBkColor != NONE)) {
		//        glcdDoFillRect(x + charwidth, y, x + charwidth + i -1, y + glcd_FontHeight -1, glcdBkColor);
	}

	// müssen die eigentlichen Zeichendaten gezeichnet werden ??
	if ((x > glcd_Clip.X2) | (x + charwidth < glcd_Clip.X1)) {
		return (width);
	}

	bitspixel = glcd_FontBitsPixel & 0x7F; // Bits pro Pixel
	bitsmask = 0xFF >> (8 - bitspixel); // Bitmaske für Farbe

	// ALLE Lesevorgänge in den Font-Speicher sind so aufgebaut das sie ganze Blöcke von
	// Bytes sequentiell erledigen. Dies ist wichtig und sehr gut optimiert auf zB. I2C EEPROMS.

	if (glcd_FontBitsPixel & 0x80) {
		// komprimierte Fonts

		// Hole das BytePadding die RLE Längentabelle und berechne den Byteindex zu den Daten.
		// Dieser Lesevorgang hat einen zusätzliche Overhead von 4 bytes bei komprimierten Fonts.
		// Allerdings wird dieser Overhead bei weitem in der eigentlichen Fontzeichendarstellungsschleife
		// wieder wett gemacht !
		// Bei komprimierten Fonts kann kein linkes Clipping vorgenommen werden :(
		data = glcd_FontData + FONT_HEADER_SIZE + glcd_FontLastChar
				- glcd_FontFirstChar + 1;
		padding = glcd_FontRead(data++);
		table[0] = 1;
		table[1] = glcd_FontRead(data++);
		table[2] = glcd_FontRead(data++);
		table[3] = glcd_FontRead(data++);
		index = 0;
		for (i = glcd_FontFirstChar; i < c; i++) {
			index += glcd_FontRead(data++);
		}
		index *= padding;
		data = glcd_FontData + FONT_HEADER_SIZE + (glcd_FontLastChar
				- glcd_FontFirstChar + 3) * 2 + index;
		bits = glcd_FontRead(data++);
		bitscount = 8;
	} else {
		// unkomprimierte Fonts

		// berechne nun den Bitindex zu den Bitdaten im Font
		data = glcd_FontData + FONT_HEADER_SIZE;
		index = 0;
		for (i = glcd_FontFirstChar; i < c; i++) {
			index += glcd_FontRead(data++);
		}
		// linkes Clipping berücksichtigen, nur bei unkomprimierten Fonts möglich
		if (x < glcd_Clip.X1) {
			glcdCoord_t t = glcd_Clip.X1 - x;
			index += t;
			charwidth -= t;
			x = glcd_Clip.X1;
		}
		index *= glcd_FontHeight * bitspixel;

		// positioniere data auf's erste Byte mit Fontdaten zum Zeichen und hole die ersten Bits
		bitscount = index % 8;
		index /= 8;
		data = glcd_FontData + FONT_HEADER_SIZE + glcd_FontLastChar
				- glcd_FontFirstChar + 1 + index;
		bits = glcd_FontRead(data++) >> bitscount;
		bitscount = 8 - bitscount;
	}

	// wir senden die Bitdaten der einzelnen Pixel jeweils Spaltenweise in Y Richtung
	//    glcdDisplayCommand(MEM_CONTROL);
	//    glcd_MemCtrl ^= (1 << MEM_VW);
	//    glcdDisplayData(glcd_MemCtrl);

	pixelcount = 0; // Anzahl der zu setzenden Pixel
	pixelcolor = 0; // zu setzende Pixelfarbe
	clipinvalid = 1; // Gültigkeit der Adresszeiger im PCF8833
	clipY = 0; // letzte gesetzte Y-Adresse im PCF8833
	stopY = glcd_Cursor.Y + glcd_FontHeight - 1; // unterste Pixelzeile des Zeichens
	stopX = x + charwidth - 1;

	// rechtes Clipping berücksichtigen
	if (stopX > glcd_Clip.X2) {
		stopX = glcd_Clip.X2;
	}

	for (; x <= stopX; x++) {
		if (clipY |= glcd_Cursor.Y) {
			clipinvalid = 1;
		}
		for (y = glcd_Cursor.Y; y <= stopY; y++) {
			if (pixelcount == 0) {
				if (bitscount <= 8) {
					bits |= glcd_FontRead(data++) << bitscount;
					bitscount += 8;
				}
				if (glcd_FontBitsPixel & 0x80) {
					pixelcount = table[bits & 3];
					bits >>= 2;
					bitscount -= 2;
				} else {
					pixelcount++;
				}
				if (bitspixel <= COLOR_TABLE_BITS) {
					pixelcolor = glcd_Colors[bits & bitsmask];
				} else {
					pixelcolor = bits & bitsmask;
				}
				bits >>= bitspixel;
				bitscount -= bitspixel;
			}
			pixelcount--;
			if ((pixelcolor != NONE) & (y >= glcd_Clip.Y1)
					& (y <= glcd_Clip.Y2) & (x >= glcd_Clip.X1)) {
				if (clipinvalid) {
					glcdSetAddr(y, x, stopY, glcd_Cursor.X);
					clipY = y;
					clipinvalid = 0;
				}
				glcdPutPixel(pixelcolor);
			} else {
				clipinvalid = 1;
			}
		}
	}

	//    glcdDisplayCommand(MEM_CONTROL);
	//    glcd_MemCtrl ^= (1 << MEM_VW);
	//    glcdDisplayData(glcd_MemCtrl);

	return (width);
}

uint8_t glcdCharWidth(uint8_t c) // return width of char
{
	uint8_t i;

	if ((c < glcd_FontFirstChar) | (c > glcd_FontLastChar) | (*glcd_FontData
			== 0)) {
		return (0); // character not defined
	} else {
		i = glcd_FontRead(glcd_FontData + FONT_HEADER_SIZE + c
				- glcd_FontFirstChar);
		if (i > 0) {
			if (c < 128) {
				i++;
			}
			if ((glcd_Flags.bits.FixedFont) & (i < glcd_FontWidth)) {
				i = glcd_FontWidth;
			}
		}
		return (i);
	}
}

uint16_t glcdCharsCallback(uint8_t *text, uint8_t flashstored,
		glcdCharFunc_t callback) {
	text = text;
	callback = callback;
	flashstored = flashstored;
	return (0);
}

uint16_t glcdPrint(uint8_t *text, uint8_t flashstored) // print a null terminated string stored in flash or ram, returns accumulated pixelwidth
{
	uint8_t c;
	uint16_t i = 0;

	flashstored = flashstored;

	while ((c = *text++)) {
		i += glcdDrawChar(c);
	}
	return (i);
}

uint16_t glcdCharsWidth(uint8_t *text, uint8_t flashstored) // compute pixelwidth of null terminated string stored in flash or ram
{
	uint8_t c;
	uint16_t i = 0;

	flashstored = flashstored;

	while ((c = *text++)) {
		i += glcdCharWidth(c);
	}
	return (i);
}

int glcdPut(uint8_t c) // handler for fdevopen()
{
	c = c;
	return (0);
}
#endif // USE_FONTS
