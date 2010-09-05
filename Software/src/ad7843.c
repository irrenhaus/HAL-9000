/*
 * ad7843.c
 *
 *  Created on: Sep 4, 2010
 *      Author: irrenhaus
 */

#include "ad7843.h"

void initTouchscreenController(void) {
	SPI_InitTypeDef spiInit;
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15 | GPIO_Pin_14 | GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	spiInit.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	spiInit.SPI_Mode = SPI_Mode_Master;
	spiInit.SPI_DataSize = SPI_DataSize_8b;
	spiInit.SPI_CPOL = SPI_CPOL_Low;
	spiInit.SPI_CPHA = SPI_CPHA_1Edge;
	spiInit.SPI_NSS = SPI_NSS_Soft;
	spiInit.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; /* 72MHz/2 = 36 MHz Clock */
	spiInit.SPI_FirstBit = SPI_FirstBit_MSB;
	spiInit.SPI_CRCPolynomial = 7;

	SPI_Init(SPI2, &spiInit);

	SPI_Cmd(SPI2, ENABLE);
}
