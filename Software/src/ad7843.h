/*
 * ad7843.h
 *
 *  Created on: Sep 4, 2010
 *      Author: irrenhaus
 */

#ifndef AD7843_H_
#define AD7843_H_

#include "stm32f10x.h"

#define AD_CS_ENABLE() GPIO_WriteBit(GPIOD, GPIO_Pin_8, Bit_RESET);
#define AD_CS_DISABLE() GPIO_WriteBit(GPIOD, GPIO_Pin_8, Bit_SET);

#endif /* AD7843_H_ */
