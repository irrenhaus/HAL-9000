#include <stddef.h>
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "util.h"
#include "config.h"
#include "displayTask.h"
#include "dbgMsg.h"
#include "lib/fat_sd/ffconf.h"
#include "lib/fat_sd/ff.h"
#include "lib/fat_sd/diskio.h"

#include "../FreeRTOS/FreeRTOS.h"
#include "../FreeRTOS/task.h"

#define F_CPU SystemCoreClock

void ledTask(void *params) {
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOE, &GPIO_InitStructure);

	uint8_t ledOn = 0;

	for (;;) {
		if (ledOn)
			GPIO_ResetBits(GPIOE, GPIO_Pin_2);
		else
			GPIO_SetBits(GPIOE, GPIO_Pin_2);

		ledOn = 1 - ledOn;

		delay_ms(500);
	}
}
static int SysTickCounter = 0;
int lastDiskTimerCall = 0;

void vApplicationTickHook(void) {
	SysTickCounter++;
	lastDiskTimerCall++;

	if (lastDiskTimerCall >= 10) {
		disk_timerproc();
		lastDiskTimerCall = 0;
	}
}

/* REED Sensor handling */
int reed = 0;
unsigned int lastOccured = 0;
void EXTI15_10_IRQHandler(void) {
	if (EXTI_GetITStatus(EXTI_Line15) != RESET) {
		if ((SysTickCounter - lastOccured) > 10) {
			lastOccured = SysTickCounter;
			reed++;
		}
		EXTI_ClearITPendingBit(EXTI_Line15);
	}
}


u8 touchX = 0;
u8 touchY = 0;

void touchTask(void *params) {
	SPI_InitTypeDef SPI_SPI2_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);

	GPIO_InitTypeDef GPIOSPI2_InitStructure;
	GPIOSPI2_InitStructure.GPIO_Pin = GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIOSPI2_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	//GPIOSPI2_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIOSPI2_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIOSPI2_InitStructure);

	GPIOSPI2_InitStructure.GPIO_Pin = GPIO_Pin_8;
	GPIOSPI2_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIOSPI2_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIOSPI2_InitStructure);

	SPI_SPI2_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_SPI2_InitStructure.SPI_Mode = SPI_Mode_Master;
	SPI_SPI2_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_SPI2_InitStructure.SPI_CPOL = SPI_CPOL_Low;
	SPI_SPI2_InitStructure.SPI_CPHA = SPI_CPHA_2Edge;
	SPI_SPI2_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_SPI2_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_128;
	SPI_SPI2_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;

	SPI_Init(SPI2, &SPI_SPI2_InitStructure);

	SPI_Cmd(SPI2, ENABLE);

	GPIO_SetBits(GPIOE, GPIO_Pin_10);

	delay_ms(4000);

	for(;;) {
		GPIO_ResetBits(GPIOD, GPIO_Pin_8);
		SPI_I2S_SendData(SPI2, 0x9B);
		sprintf(dbgMessage, "0x9B sent");

		while(SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET);
		sprintf(dbgMessage, "receiving");

		touchX = SPI_I2S_ReceiveData(SPI2);
		sprintf(dbgMessage, "X received");

		SPI_I2S_SendData(SPI2, 0xDB);
		while((SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET));
		touchY = SPI_I2S_ReceiveData(SPI2);

		GPIO_SetBits(GPIOD, GPIO_Pin_8);
	}
}

int main(void) {
	configureSystem();

	//xTaskCreate(ledTask, "led", configMINIMAL_STACK_SIZE, NULL, LED_TASK_PRIORITY, NULL);
	xTaskCreate(displayTask, "display", DISPLAY_TASK_STACK_SIZE, NULL, DISPLAY_TASK_PRIORITY, NULL);
	xTaskCreate(touchTask, "touch", DISPLAY_TASK_STACK_SIZE, NULL, DISPLAY_TASK_PRIORITY, NULL);

	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC, &GPIO_InitStructure);

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOE, &GPIO_InitStructure);

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);

	/* REED Interrupt */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);

	EXTI_InitTypeDef EXTI_InitStructure;

	GPIO_EXTILineConfig(GPIO_PortSourceGPIOD, GPIO_PinSource15);
	EXTI_InitStructure.EXTI_Line = EXTI_Line15;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);

	NVIC_InitTypeDef NVIC_InitStructure;

	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);

	NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);

	FATFS fatfs;

	//if (f_mount(0, &fatfs) != FR_OK)
	//	sprintf(dbgMessage, "Mount failed");

	vTaskStartScheduler();

	for (;;)
		;

	return 0;
}

