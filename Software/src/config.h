/*
 * config.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "stm32f10x.h"
#include "../FreeRTOS/FreeRTOS.h"

#define DISPLAY_TASK_STACK_SIZE configMINIMAL_STACK_SIZE+512

#define LED_TASK_PRIORITY tskIDLE_PRIORITY+4
#define DISPLAY_TASK_PRIORITY tskIDLE_PRIORITY+4

void configureSystem(void);

#endif /* CONFIG_H_ */
