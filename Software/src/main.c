#include <stddef.h>
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "util.h"
#include "config.h"
#include "screen.h"
#include "dbgMsg.h"
#include "lib/fat_sd/ffconf.h"
#include "lib/fat_sd/ff.h"
#include "lib/fat_sd/diskio.h"

#define F_CPU SystemCoreClock

/* REED Sensor & Touch handling */
int reed = 0;
unsigned int lastOccured = 0;
unsigned int touchAwaiting = 0;
u8 on = 0;
void EXTI15_10_IRQHandler(void) {
	if (EXTI_GetITStatus(EXTI_Line15) != RESET) {
		if ((SysTickCounter - lastOccured) > 10) {
			lastOccured = SysTickCounter;
			reed++;
		}
		EXTI_ClearITPendingBit(EXTI_Line15);
	} else if (EXTI_GetITStatus(EXTI_Line10) != RESET) {
		touchAwaiting = 1;
		if (on)
			GPIO_WriteBit(GPIOE, GPIO_Pin_2, Bit_SET);
		else
			GPIO_WriteBit(GPIOE, GPIO_Pin_2, Bit_RESET);
		on = 1 - on;

		EXTI_ClearITPendingBit(EXTI_Line10);
	}
}

u8 touchX = 0;
u8 touchY = 0;

void initTouchController() {
	SPI_InitTypeDef SPI_InitStructure;
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Enable GPIO clock for CS */
	RCC_APB2PeriphClockCmd(GPIOD, ENABLE);
	/* Enable SPI clock, SPI1: APB2, SPI2: APB1 */
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);

	/* Configure I/O for Flash Chip select */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	/* Configure SPI pins: SCK and MOSI with default alternate function (not re-mapped) push-pull */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13 | GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	/* Configure MISO as Input with internal pull-up */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	/* SPI configuration */
	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low;
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_128; // 72000kHz/256=281kHz < 400kHz
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_CRCPolynomial = 7;

	SPI_Init(SPI2, &SPI_InitStructure);
	SPI_CalculateCRC(SPI2, DISABLE);
	SPI_Cmd(SPI2, ENABLE);

	/* drain SPI */
	while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET) {
		;
	}

	GPIO_SetBits(GPIOE, GPIO_Pin_10);
}

void touchTask(void *params) {
	for (;;) {
		//if (touchAwaiting) {
			initTouchController();

			GPIO_ResetBits(GPIOD, GPIO_Pin_8);
			/* Differential read of X coordinate */
			SPI_I2S_SendData(SPI2, 0x99); //S[1]A2[0]A1[0]A0[1]MODE[1]SER/DFR[0]PD1[1]PD0[0]
			while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET)
				;

			while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET)
				;

			touchX = SPI_I2S_ReceiveData(SPI2);

			/* Differential read of Y coordinate */
			SPI_I2S_SendData(SPI2, 0xD9); //S[1]A2[1]A1[0]A0[1]MODE[1]SER/DFR[0]PD1[1]PD0[0]
			while ((SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET))
				;
			touchY = SPI_I2S_ReceiveData(SPI2);
			while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET)
				;

			GPIO_SetBits(GPIOD, GPIO_Pin_8);

			touchAwaiting = 0;
		//}
	}
}

int main(void) {
	configureSystem();

	/* GPIO Initialisation */
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

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);

	/* REED & PENIRQ Interrupt */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);

	EXTI_InitTypeDef EXTI_InitStructure;

	GPIO_EXTILineConfig(GPIO_PortSourceGPIOD, GPIO_PinSource15);
	EXTI_InitStructure.EXTI_Line = EXTI_Line15;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);

	GPIO_EXTILineConfig(GPIO_PortSourceGPIOD, GPIO_PinSource10);
	EXTI_InitStructure.EXTI_Line = EXTI_Line10;
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

	// Init touch controller

	GPIO_SetBits(GPIOD, GPIO_Pin_8);

	/* Fat filesystem for the SD Card*/

	//FATFS fatfs;

	//if (f_mount(0, &fatfs) != FR_OK)
	//	sprintf(dbgMessage, "Mount failed");

	for (;;)
		;

	return 0;
}

