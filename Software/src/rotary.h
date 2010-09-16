/*
 * rotary.h
 *
 *  Created on: Sep 12, 2010
 *      Author: irrenhaus
 */

#ifndef ROTARY_H_
#define ROTARY_H_

#include "stm32f10x.h"

void initRotary(void);
void updateRotary(void);
int8_t readRotary(void);

#endif /* ROTARY_H_ */
