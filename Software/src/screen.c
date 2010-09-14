/*
 * updateScreen.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */
#include <stdio.h>
#include "stm32f10x.h"
#include "util.h"
#include "config.h"
#include "rtc.h"
#include "lib/lcd/lcd.h"
#include "dbgMsg.h"
#include "font/font_8x12.h"
#include "font/font_clock.h"
#include <string.h>

#define DISPLAYBG RGB(0, 0, 0)

#define HEADERBG RGB(64, 64, 64)
#define HEADERFG RGB(255, 255, 255)
#define HEADER_HEIGHT (32)
#define HEADER_WIDTH (LCD_WIDTH-1)

void initDisplay(void) {
	SPI_InitTypeDef SPI_S65Init;

	RCC_APB2PeriphClockCmd(DISPLAY_SPI_PERIPH, ENABLE);

	GPIO_InitTypeDef GPIOS65Init;
	GPIOS65Init.GPIO_Pin = DISPLAY_SPI_CLK_PIN | DISPLAY_SPI_MOSI_PIN
			| DISPLAY_SPI_MISO_PIN;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DISPLAY_SPI_GPIO, &GPIOS65Init);

	SPI_S65Init.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_S65Init.SPI_Mode = SPI_Mode_Master;
	SPI_S65Init.SPI_DataSize = SPI_DataSize_8b;
	SPI_S65Init.SPI_CPOL = SPI_CPOL_Low;
	SPI_S65Init.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_S65Init.SPI_NSS = SPI_NSS_Soft;
	SPI_S65Init.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; /* 72MHz/2 = 36 MHz Clock */
	SPI_S65Init.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_S65Init.SPI_CRCPolynomial = 7;

	SPI_Init(DISPLAY_SPI, &SPI_S65Init);

	SPI_Cmd(DISPLAY_SPI, ENABLE);

	lcd_init();

	lcd_clear(DISPLAYBG);
}

void drawHeaderLine(void) {
	char buffer[16];
	static u8 filled = 0;

	int rtc = RTC_GetCounter();
	int h = rtc / 3600;
	int m = (rtc % 3600) / 60;

	if (!filled) {
		lcd_fillrect(0, 0, HEADER_WIDTH, HEADER_HEIGHT, HEADERBG);
		filled = 1;
	}

	sprintf(buffer, "%.2d:%.2d", h, m);
	u16 width = strlen(buffer) * (TIMEFONT_WIDTH);
	u16 posx = (HEADER_WIDTH / 2) - (width / 2);
	u16 posy = (HEADER_HEIGHT / 2) - (TIMEFONT_HEIGHT / 2);
	lcd_puts(posx, posy, buffer, TIMEFONT, 1, HEADERFG, HEADERBG);

	sprintf(buffer, "%dC", 22);
	width = strlen(buffer) * (NORMALFONT_WIDTH);
	posx = 5;
	posy = (HEADER_HEIGHT / 2) - (NORMALFONT_HEIGHT / 2);
	lcd_puts(posx, posy, buffer, NORMALFONT, 1, HEADERFG, HEADERBG);

	sprintf(buffer, "%dV", 13);
	width = strlen(buffer) * (NORMALFONT_WIDTH);
	posx = (HEADER_WIDTH - 5) - (width);
	posy = (HEADER_HEIGHT / 2) - (NORMALFONT_HEIGHT / 2);
	lcd_puts(posx, posy, buffer, NORMALFONT, 1, HEADERFG, HEADERBG);
}

void updateScreen() {
	char buffer[32];

	drawHeaderLine();

	lcd_puts(100, 150, dbgMessage, NORMALFONT, 1, RGB(0, 0, 0), RGB(255, 0, 0));
	extern int reed;

	sprintf(buffer, "Reed: %d", reed);
	lcd_puts(5, 100, buffer, NORMALFONT, 1, HEADERFG, HEADERBG);
}