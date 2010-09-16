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

void updateRotary(void);

void SysTick_Handler(void) {
	SysTickCounter++;
	lastDiskTimerCall++;

	updateRotary();

	if (lastDiskTimerCall >= 10) {
		disk_timerproc();
		lastDiskTimerCall = 0;
	}
}



void toggle(void) {
	static u8 on = 0;

	if(on) {
		GPIO_ResetBits(GPIOE, GPIO_Pin_2);
		on = 0;
	} else {
		GPIO_SetBits(GPIOE, GPIO_Pin_2);
		on = 1;
	}
}

void delay_ms(int ms) {
	int to = SysTickCounter + ms;
	while (SysTickCounter < to)
		;
}

char *itoa(int val, char *buf, unsigned radix) {
	char *p;
	char *firstdig;
	char temp;
	unsigned digval;
	p = buf;
	if (val < 0) {
		*p++ = '-';
		val = (unsigned long) (-(long) val);
	}
	firstdig = p;
	do {
		digval = (unsigned) (val % radix);
		val /= radix;
		if (digval > 9) {
			*p++ = (char) (digval - 10 + 'a');
		} else {
			*p++ = (char) (digval + '0');
		}
	} while (val > 0);
	*p-- = '\0';
	do {
		temp = *p;
		*p = *firstdig;
		*firstdig = temp;
		--p;
		++firstdig;
	} while (firstdig < p);
	return buf;
}
