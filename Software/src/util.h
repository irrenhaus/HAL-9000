/*
 * util.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef UTIL_H_
#define UTIL_H_

#include "stm32f10x.h"

void toggle(void);
void delay_ms(int ms);
char *itoa(int val, char *buf, unsigned radix) ;

extern unsigned int SysTickCounter;

#endif /* UTIL_H_ */
