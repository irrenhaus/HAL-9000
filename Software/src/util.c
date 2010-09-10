/*
 * util.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */
#include "util.h"

extern void disk_timerproc();

unsigned int SysTickCounter = 0;
unsigned int lastDiskTimerCall = 0;

void SysTick_Handler(void) {
	SysTickCounter++;
	lastDiskTimerCall++;

	if (lastDiskTimerCall >= 10) {
		disk_timerproc();
		lastDiskTimerCall = 0;
	}
}

void delay_ms(int ms) {
	int to = SysTickCounter + ms;
	while(SysTickCounter < to) ;
}
