/*
 * ad7843.c
 *
 *  Created on: Sep 4, 2010
 *      Author: irrenhaus
 */

#include "ad7843.h"

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

void touchHandler() {
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
	//}
}
