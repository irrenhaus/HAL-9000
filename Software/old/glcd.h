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

#ifdef AVR
	#include <avr/io.h>
	#include <avr/pgmspace.h>
#endif

#ifdef __C166__
	#include "inttypes.h"
	#ifdef TARGET_C164CI
		#include <C164CXSX.H>
	#endif
	
	#ifdef TARGET_MM167
		#include <C167CS.H>
	#endif
#endif

#ifdef STM32F10X_CL
#include "stm32f10x.h"
#endif

#ifndef GLCD_H
#define GLCD_H

#include "glcd.inc"

typedef uint16_t glcdColor_t;         // 65535 colors

typedef uint16_t glcdCoord2_t;        // intern zur Koordinatenberechnung
typedef uint8_t glcdCoord_t;          // coordinates, ONLY byte coords supported without rewriting of lib

typedef uint8_t glcdFontData_t;      // pointer to font datas
typedef uint8_t (*glcdFontFunc_t)(glcdFontData_t *index); // custom font data read callback, thus we can support ae. I2C EEPROM
typedef uint8_t (*glcdCharFunc_t)(char c);

typedef struct 
{
    glcdCoord_t X;
    glcdCoord_t Y;
} glcdPoint_t;

typedef struct
{
    glcdCoord_t X1;
    glcdCoord_t Y1;
    glcdCoord_t X2;
    glcdCoord_t Y2;
} glcdRect_t;

typedef union {
    uint8_t All;
    struct 
   {
        uint8_t AutoLineFeed:1;          // font routines should use implizit linefeed and wrap around glcd_Window
        uint8_t FixedFont:1;             // == 0 fonts painted proportional, == 1 fonts painted in fixed pitch
        uint8_t Clipping:1;              // activate clipping
    }bits;
} glcdFlags_t;


extern glcdColor_t     glcd_Colors[1 << COLOR_TABLE_BITS]; // Farbtabelle, Colors[0] = Hintergrund = Füllfarbe, Color[1] = Vordergrund = Linienfarbe
extern uint8_t         glcd_MemCtrl;
extern glcdFlags_t     glcd_Flags;
extern glcdRect_t      glcd_Clip;            // Clipping Koordinaten, alles was ausserhalb ist wird nicht dargestellt

#ifdef USE_FONTS
extern glcdPoint_t          glcd_Cursor;          // aktuelle Position für Schriften
extern glcdRect_t           glcd_Window;          // aktuelles Fenster für Textausgaben
extern uint8_t                   glcd_FontFirstChar;   // erstes Zeichen im Font
extern uint8_t                 glcd_FontLastChar;    // letztes Zeichen im Font
extern uint8_t              glcd_FontWidth;       // fixed Zeichenbreite des Fonts
extern uint8_t              glcd_FontHeight;      // Zeichenhöhe
extern uint8_t              glcd_FontBitsPixel;   // Farbtiefe des Fonts
extern uint16_t        glcd_FontSize;          // Font size
extern glcdFontFunc_t              glcd_FontRead;        // User definierte Readcallback für die Fontdaten
extern glcdFontData_t  *glcd_FontData;        // die eigentlichen Fontdaten beginnen hier, abhängig von der Readcallback
#endif

extern void glcdDisplayByte(uint8_t cmd); // send a byte to display
extern void glcdDisplayWord(uint16_t cmd); // send a word to display
extern void glcdDisplayCommand(uint16_t cmd); // send a command to display
extern void glcdDisplayData(uint16_t data);   // send data to display
extern void glcdDisplayBufferByte( uint8_t *buffer, uint8_t buffersize, uint8_t flashstored); // send a buffer of bytes to the display
extern void glcdDisplayBufferWord( uint16_t *buffer, uint8_t buffersize, uint8_t flashstored); // send a buffer of words to the display
extern void glcdDisplayBufferCommand( uint16_t *buffer, uint8_t buffersize, uint8_t flashstored); // send a buffer of bytes as command to the display
extern void glcdDisplayBufferData( uint16_t *buffer, uint8_t buffersize, uint8_t flashstored); // send a buffer of bytes as data to the display

extern void glcdDisplayInit(void);           // initialize the display, MUST be normaly NEVER called, it's automaticaly called by the initialization code
extern void glcdDisplayOn(void);             // switch display on, booster on, sleep out
extern void glcdDisplayOff(void);            // switch display off, booster off, sleep in

extern void glcdPowerOn(void);           // switch power on
extern void glcdPowerOff(void);          // switch power off

extern void glcdBackLightOn(void);           // switch backlight on
extern void glcdBackLightOff(void);          // switch backlight off

extern void glcdWait(uint16_t ms);           // wait some milliseconds, XTAL must be correct defined

extern void glcdFillScreen(uint16_t color);
extern void glcdSetOrientation(uint8_t orientation); // degree 0°,90°,180°,270° -> 0,1,2,3
extern void glcdSetAddr(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2);   // set RAM access pointer of display
extern void glcdPutPixel(glcdColor_t color);                                               // put a pixel, glcdSetAddr() MUST be prior called
extern void glcdSetPixel(glcdCoord_t x, glcdCoord_t y, glcdColor_t color);                 // set a pixel
extern void glcdFillRect(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2, glcdColor_t color);
extern void glcdRectangle(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2); // paint border with glcdFgColor and fill background with glcdBkColor
extern void glcdFrame(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2); // paint a frame, colors glcdBkColor, glcdFrColor, glcdShColor used
extern void glcdLine(glcdCoord_t x1, glcdCoord_t y1, glcdCoord_t x2, glcdCoord_t y2);
extern void glcdCircle(glcdCoord_t x, glcdCoord_t y, glcdCoord_t r);                   // circle at x,y with radius r
extern void glcdEllipse(glcdCoord_t x, glcdCoord_t y, glcdCoord_t a, glcdCoord_t b);   // ellipse at x,y with radius a,b
extern void glcdSwapClipRect(void); // swaps glcd_Clip.X1 <-> glcd_Clip.Y1, glcd_Clip_X2 <-> glcd_Clip.Y2

extern void glcdSelectFont( glcdFontData_t *data, glcdFontFunc_t callback); // select a font
extern void glcdNewLine(void);                                        // <CR><LF> in glcd_Window of glcd_Cursor
extern uint8_t glcdDrawChar(uint8_t c);                                  // draw a character, returns width of char, if any painted
extern uint8_t glcdCharWidth(uint8_t c);                                 // return width of char

extern uint16_t glcdCharsCallback( uint8_t *text, uint8_t flashstored, glcdCharFunc_t callback);
uint8_t glcdFontRead( glcdFontData_t *index);
extern uint16_t glcdPrint( uint8_t *text, uint8_t flashstored);       // print a null terminated string stored in flash or ram, returns accumulated pixelwidth
extern uint16_t glcdCharsWidth( uint8_t *text, uint8_t flashstored);  // compute pixelwidth of null terminated string stored in flash or ram
extern int glcdPut(uint8_t c);                                       // handler for fdevopen()


#define glcdBkColor glcd_Colors[0]
#define glcdFgColor glcd_Colors[1]
#define glcdFrColor glcd_Colors[2]
#define glcdShColor glcd_Colors[3]
#define glcdSetColor(index, color) {glcd_Colors[index] = color;}
#define glcdSetBkColor(color) {glcdSetColor(0, color);}
#define glcdSetFgColor(color) {glcdSetColor(1, color);}
#define glcdSetFrColor(color) {glcdSetColor(2, color);}
#define glcdSetShColor(color) {glcdSetColor(3, color);}
#define glcdSetColors(fgColor, bkColor) {glcdSetFgColor(fgColor); glcdSetBkColor(bkColor);}
#define glcdSetRect(r,x1,y1,x2,y2) {r.X1 = x1; r.Y1 = y1; r.X2 = x2; r.Y2 = y2;}
#define glcdClearScreen() glcdFillScreen(SCREEN_COLOR);
#define glcdSwapCoord(x, y) {glcdCoord_t t = x; x = y; y = t;}
#define glcdCheckCoord(x, y) {if (x > y) {glcdSwapCoord(x, y)}}

#ifdef USE_FONTS
#define glcdMoveTo(x, y) {glcd_Cursor.X = x; glcd_Cursor.Y = y;}
#endif

#endif
