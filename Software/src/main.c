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
#include "gui.h"
#include "lib/fat_sd/ffconf.h"
#include "lib/fat_sd/ff.h"
#include "lib/fat_sd/diskio.h"
#include "rotary.h"

#define F_CPU SystemCoreClock

/* REED Sensor & Touch handling */
int reed = 0;
int reedDifference = 0;
void EXTI15_10_IRQHandler(void) {
	static unsigned int lastOccured = 0;

	//reed
	if (EXTI_GetITStatus(EXTI_Line15) != RESET) {
		if ((SysTickCounter - lastOccured) > 10) {
			reedDifference = SysTickCounter - lastOccured;
			lastOccured = SysTickCounter;
			reed++;
		}
		EXTI_ClearITPendingBit(EXTI_Line15);
	}
	//PENIRQ
	if (EXTI_GetITStatus(EXTI_Line10) != RESET) {

		EXTI_ClearITPendingBit(EXTI_Line10);
	}
	//DTASTER
	if (EXTI_GetITStatus(EXTI_Line13) != RESET) {
		enterPressed();

		EXTI_ClearITPendingBit(EXTI_Line13);
	}
}

int main(void) {
	configureSystem();

	initRotary();

	initDisplay();

	initUI();

	//Display Backlight on
	GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);

	/* Fat filesystem for the SD Card*/
	FATFS fatfs;

	if (f_mount(0, &fatfs) != FR_OK)
		sprintf(dbgMessage, "Mount failed");

	for (;;) {
		guiHandleInput();
		updateScreen();
	}

	return 0;
}

