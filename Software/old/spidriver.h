/*
 * spidriver.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef SPIDRIVER_H_
#define SPIDRIVER_H_

#include "stm32f10x.h"

void SPI_driver_send_byte(u8 cmd);
void SPI_driver_send_word(u16 cmd);

#endif /* SPIDRIVER_H_ */
