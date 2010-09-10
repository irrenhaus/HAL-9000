#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "util.h"
#include "config.h"
#include "screen.h"
#include "dbgMsg.h"
#include "ad7843.h"
#include "ui.h"
#include "lib/fat_sd/ffconf.h"
#include "lib/fat_sd/ff.h"
#include "lib/fat_sd/diskio.h"

#define F_CPU SystemCoreClock

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

/* REED Sensor & Touch handling */
int reed = 0;
void EXTI15_10_IRQHandler(void) {
	static unsigned int lastOccured = 0;
	static u8 direction = 0;
	static unsigned int directionLastChange = 0;

	if(SysTickCounter - directionLastChange < 20) {
		direction = 0;
	}

	if (EXTI_GetITStatus(EXTI_Line15) != RESET) {
		if ((SysTickCounter - lastOccured) > 10) {
			lastOccured = SysTickCounter;
			reed++;
		}
		EXTI_ClearITPendingBit(EXTI_Line15);
	}
	//PENIRQ
	if (EXTI_GetITStatus(EXTI_Line10) != RESET) {


		EXTI_ClearITPendingBit(EXTI_Line10);
	}
	//DIN2
	if (EXTI_GetITStatus(EXTI_Line11) != RESET) {
		if(direction == 1) { //Left
			upPressed();
			toggle();
			direction = 0;
		} else {
			direction = 2;
		}

		EXTI_ClearITPendingBit(EXTI_Line11);
	}
	//DIN1
	if (EXTI_GetITStatus(EXTI_Line12) != RESET) {
		if(direction == 2) { //Right
			downPressed();
			toggle();
			direction = 0;
		} else {
			direction = 1;
		}

		EXTI_ClearITPendingBit(EXTI_Line12);
	}
	//DTASTER
	if (EXTI_GetITStatus(EXTI_Line13) != RESET) {
		enterPressed();
		toggle();
		EXTI_ClearITPendingBit(EXTI_Line13);
	}
}

int main(void) {
	configureSystem();

	initDisplay();

	initUI();

	//Display Backlight on
	GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);

	/* Fat filesystem for the SD Card*/
	FATFS fatfs;

	if (f_mount(0, &fatfs) != FR_OK)
		sprintf(dbgMessage, "Mount failed");

	for (;;) {
		updateScreen();

		processUI();
	}

	return 0;
}

