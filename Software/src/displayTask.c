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
#include "glcdS65.h"
#include "rtc.h"

void displayTask(void *params) {
	//S65_init_PWM();

	glcdInit();
	glcdDisplayInit();
	delay_ms(500);

	glcdFillScreen(BLACK);
	u8 color = 0;

	int rtc = RTC_GetCounter();
	int h = rtc / 3600;
	int m = (rtc % 3600) / 60;
	int s = (rtc % 3600) % 60;
	char buffer[16];
	for (;;) {
		rtc = RTC_GetCounter();
		h = rtc / 3600;
		m = (rtc % 3600) / 60;
		s = (rtc % 3600) % 60;
		sprintf(buffer, "%.2d:%.2d:%.2d", h, m, s);

		glcdFillScreen(RGB(color, color, color));
		if(color == 255)
			color = 0;
		color++;
		//glcdFillRect(20, 20, 50, 50, WHITE);
	}
}
