/*
 * config.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#include "config.h"
#include "rtc.h"

int sysTick = 0;
int lastFATCall = 0;

void configureNVIC(void) {

}

void configureSystem(void) {
	/* SYSCLK, HCLK, PCLK2 and PCLK1 configuration -----------------------------*/
	/* RCC system reset(for debug purpose) */
	RCC_DeInit();

	/* Enable HSE */
	RCC_HSEConfig(RCC_HSE_ON);

	/* Wait till HSE is ready */
	ErrorStatus HSEStartUpStatus = RCC_WaitForHSEStartUp();

	if (HSEStartUpStatus == SUCCESS) {
		/* Enable Prefetch Buffer */
		FLASH->ACR |= FLASH_ACR_PRFTBE;

		/* Flash 2 wait state */
		FLASH->ACR &= (uint32_t) ((uint32_t) ~FLASH_ACR_LATENCY);
		FLASH->ACR |= (uint32_t) FLASH_ACR_LATENCY_2;

		/* HCLK = SYSCLK */
		RCC_HCLKConfig(RCC_SYSCLK_Div1);

		/* PCLK2 = HCLK */
		RCC_PCLK2Config(RCC_HCLK_Div1);

		/* PCLK1 = HCLK/2 */
		RCC_PCLK1Config(RCC_HCLK_Div2);

		// PLL configuration: PLLCLK
		/* Configure PLLs *********************************************************/
		/* PLL2 configuration: PLL2CLK = (HSE / 5) * 8 = 40 MHz */
		//RCC_PREDIV2Config(RCC_PREDIV2_Div5);
		//RCC_PLL2Config(RCC_PLL2Mul_8);
		/* PLL2 configuration: PLL2CLK = (HSE / 4) * 20 = 40 MHz */
		RCC_PREDIV2Config(RCC_PREDIV2_Div4);
		RCC_PLL2Config(RCC_PLL2Mul_20);

		// Enable PLL2
		RCC_PLL2Cmd(ENABLE);

		// Wait till PLL2 is ready
		while (RCC_GetFlagStatus(RCC_FLAG_PLL2RDY) == RESET) {
		}

		// PLL configuration: PLLCLK = (PLL2 / 5) * 9 = 72 MHz *
		RCC_PREDIV1Config(RCC_PREDIV1_Source_PLL2, RCC_PREDIV1_Div5);
		RCC_PLLConfig(RCC_PLLSource_PREDIV1, RCC_PLLMul_9);

		/* Enable PLL */
		RCC_PLLCmd(ENABLE);

		/* Wait till PLL is ready */
		while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET) {
		}

		/* Select PLL as system clock source */
		RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

		/* Wait till PLL is used as system clock source */
		while (RCC_GetSYSCLKSource() != 0x08) {
		}
	} else { /* If HSE fails to start-up, the application will have wrong clock configuration.
	 User can add here some code to deal with this error */

		/* Go to infinite loop */
		while (1) {
		}
	}

	rtc_init();

	configureNVIC();

	SysTick_Config(72000);
}
