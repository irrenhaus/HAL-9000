/*
 * displayTask.c
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
	SPI_S65Init.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; /* 72MHz/9 = 36 MHz Clock */
	SPI_S65Init.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_S65Init.SPI_CRCPolynomial = 7;

	SPI_Init(DISPLAY_SPI, &SPI_S65Init);

	SPI_Cmd(DISPLAY_SPI, ENABLE);

	lcd_init();
}

void displayTask(void *params) {
	initDisplay();
	delay_ms(500);

	u8 color = 0;
	lcd_clear(RGB(0, 0, 0));

	int rtc = RTC_GetCounter();
	int h = rtc / 3600;
	int m = (rtc % 3600) / 60;
	int s = (rtc % 3600) % 60;
	char buffer[32] = {'H', 'a', 'l', 'l', 'o', ' ', 'H', 'a', 'l', 'l', 'o', ' ',
	           'L', 'O', 'L', ' ',
	           'H', 'a', 'l', 'l', 'o', ' ', 'H', 'a', 'l', 'l', 'o', ' ',
	           			           'L', 'O', 'L', '\0'};

	uint8_t which = 0;

	for (;;) {
		rtc = RTC_GetCounter();
		h = rtc / 3600;
		m = (rtc % 3600) / 60;
		s = (rtc % 3600) % 60;

		which = 1 - which;

		if(which)
			buffer[16] = 'X';
		else
			buffer[16] = ' ';

		//sprintf(buffer, "%.2d:%.2d:%.2d SysTick: %d", h, m, s, xTaskGetTickCount());
		lcd_puts(10, 10, buffer, NORMALFONT, 1, RGB(255, 255, 255), RGB(0, 0, 0));
		lcd_puts(10, 30, buffer, NORMALFONT, 1, RGB(255, 255, 255), RGB(0, 0, 0));
		lcd_puts(10, 50, buffer, NORMALFONT, 1, RGB(255, 255, 255), RGB(0, 0, 0));
		lcd_puts(10, 70, buffer, NORMALFONT, 1, RGB(255, 255, 255), RGB(0, 0, 0));
		lcd_puts(10, 90, buffer, NORMALFONT, 1, RGB(255, 255, 255), RGB(0, 0, 0));

	}
}
