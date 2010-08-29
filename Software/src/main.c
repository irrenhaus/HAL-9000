#include <stddef.h>
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "util.h"
#include "config.h"
#include "displayTask.h"

#include "../FreeRTOS/FreeRTOS.h"
#include "../FreeRTOS/task.h"

#define F_CPU SystemCoreClock

void ledTask(void *params) {
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	uint8_t ledOn = 0;

	for (;;) {
		if (ledOn)
			GPIO_ResetBits(GPIOA, GPIO_Pin_1);
		else
			GPIO_SetBits(GPIOA, GPIO_Pin_1);

		ledOn = 1 - ledOn;

		delay_ms(500);
	}
}

void displayPWMTask(void *params) {
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	u8 on = 0;
	int i = 0;

	for(;;) {
		if(on) {
			GPIO_SetBits(GPIOA, GPIO_Pin_4);
		}
		else {
			GPIO_ResetBits(GPIOA, GPIO_Pin_4);
			for(i = 0; i < 1024; i++) ;
		}

		on = 1 - on;

		for(i = 0; i < 11520; i++) ;
	}
}

int main(void) {
	configureSystem();

	xTaskCreate(ledTask, "led", configMINIMAL_STACK_SIZE, NULL, LED_TASK_PRIORITY, NULL);
	xTaskCreate(displayTask, "display", DISPLAY_TASK_STACK_SIZE, NULL, DISPLAY_TASK_PRIORITY, NULL);
	//xTaskCreate(displayPWMTask, "displayPWM", configMINIMAL_STACK_SIZE, NULL, DISPLAY_TASK_PRIORITY, NULL);

	vTaskStartScheduler();

	return 0;
}

