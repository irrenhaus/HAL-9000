                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#ifndef CSTM_IUT_HEADER_PATH
#include "stm32f10x_usart_5635_IUT.h"
#else
#include CSTM_IUT_HEADER_PATH
#endif

#ifndef CSTM_CVRG_IDX_HEADER_PATH
#include "codescroll_cvrg_idx.h"
#else
#include CSTM_CVRG_IDX_HEADER_PATH
#endif
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\.coverage\\data//"*/
/* # 1 "<built-in>"*/
/* # 1 "<command-line>"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
/* # 22 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h" 1
/* # 31 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h" 1
/* # 141 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h"*/
typedef enum IRQn
{

  NonMaskableInt_IRQn = -14,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,


  WWDG_IRQn = 0,
  PVD_IRQn = 1,
  TAMPER_IRQn = 2,
  RTC_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Channel1_IRQn = 11,
  DMA1_Channel2_IRQn = 12,
  DMA1_Channel3_IRQn = 13,
  DMA1_Channel4_IRQn = 14,
  DMA1_Channel5_IRQn = 15,
  DMA1_Channel6_IRQn = 16,
  DMA1_Channel7_IRQn = 17,
/* # 362 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h"*/
  ADC1_2_IRQn = 18,
  CAN1_TX_IRQn = 19,
  CAN1_RX0_IRQn = 20,
  CAN1_RX1_IRQn = 21,
  CAN1_SCE_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_IRQn = 24,
  TIM1_UP_IRQn = 25,
  TIM1_TRG_COM_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTCAlarm_IRQn = 41,
  OTG_FS_WKUP_IRQn = 42,
  TIM5_IRQn = 50,
  SPI3_IRQn = 51,
  UART4_IRQn = 52,
  UART5_IRQn = 53,
  TIM6_IRQn = 54,
  TIM7_IRQn = 55,
  DMA2_Channel1_IRQn = 56,
  DMA2_Channel2_IRQn = 57,
  DMA2_Channel3_IRQn = 58,
  DMA2_Channel4_IRQn = 59,
  DMA2_Channel5_IRQn = 60,
  ETH_IRQn = 61,
  ETH_WKUP_IRQn = 62,
  CAN2_TX_IRQn = 63,
  CAN2_RX0_IRQn = 64,
  CAN2_RX1_IRQn = 65,
  CAN2_SCE_IRQn = 66,
  OTG_FS_IRQn = 67

} IRQn_Type;





# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h" 1
/* # 90 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
# 1 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 1 3
# 41 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef signed char int8_t ;
typedef unsigned char uint8_t ;




typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;
# 67 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;
# 79 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef signed long int32_t;
typedef unsigned long uint32_t;
# 97 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;
# 119 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
# 129 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;
# 159 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
  typedef signed int int_fast8_t;
  typedef unsigned int uint_fast8_t;




  typedef signed int int_fast16_t;
  typedef unsigned int uint_fast16_t;




  typedef signed int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 213 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
  typedef int_least64_t int_fast64_t;
  typedef uint_least64_t uint_fast64_t;







  typedef long long int intmax_t;
# 231 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
  typedef long long unsigned int uintmax_t;
# 243 "c:/program files (x86)/atollic/truestudio stm32 lite 1.4.0/armtools/lib/gcc/../../arm-atollic-eabi/include/stdint.h" 3
typedef signed int intptr_t;
typedef unsigned int uintptr_t;
# 91 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h" 2
/* # 132 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
typedef struct
{
  volatile uint32_t ISER[8];
       uint32_t RESERVED0[24];
  volatile uint32_t ICER[8];
       uint32_t RSERVED1[24];
  volatile uint32_t ISPR[8];
       uint32_t RESERVED2[24];
  volatile uint32_t ICPR[8];
       uint32_t RESERVED3[24];
  volatile uint32_t IABR[8];
       uint32_t RESERVED4[56];
  volatile uint8_t IP[240];
       uint32_t RESERVED5[644];
  volatile uint32_t STIR;
} NVIC_Type;







typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4];
  volatile const uint32_t ISAR[5];
} SCB_Type;
/* # 365 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
/* # 410 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32];
       uint32_t RESERVED0[864];
  volatile uint32_t TER;
       uint32_t RESERVED1[15];
  volatile uint32_t TPR;
       uint32_t RESERVED2[15];
  volatile uint32_t TCR;
       uint32_t RESERVED3[29];
  volatile uint32_t IWR;
  volatile uint32_t IRR;
  volatile uint32_t IMCR;
       uint32_t RESERVED4[43];
  volatile uint32_t LAR;
  volatile uint32_t LSR;
       uint32_t RESERVED5[6];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
/* # 503 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
typedef struct
{
       uint32_t RESERVED0;
  volatile const uint32_t ICTR;



       uint32_t RESERVED1;

} InterruptType_Type;
/* # 620 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
/* # 1204 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void __enable_irq() { __asm volatile ("cpsie i"); }
static inline void __disable_irq() { __asm volatile ("cpsid i"); }

static inline void __enable_fault_irq() { __asm volatile ("cpsie f"); }
static inline void __disable_fault_irq() { __asm volatile ("cpsid f"); }

static inline void __NOP() { __asm volatile ("nop"); }
static inline void __WFI() { __asm volatile ("wfi"); }
static inline void __WFE() { __asm volatile ("wfe"); }
static inline void __SEV() { __asm volatile ("sev"); }
static inline void __ISB() { __asm volatile ("isb"); }
static inline void __DSB() { __asm volatile ("dsb"); }
static inline void __DMB() { __asm volatile ("dmb"); }
static inline void __CLREX() { __asm volatile ("clrex"); }
/* # 1227 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_PSP(void);
/* # 1237 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_PSP(uint32_t topOfProcStack);
/* # 1247 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_MSP(void);
/* # 1257 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_MSP(uint32_t topOfMainStack);
/* # 1266 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_BASEPRI(void);
/* # 1275 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_BASEPRI(uint32_t basePri);
/* # 1284 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_PRIMASK(void);
/* # 1293 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_PRIMASK(uint32_t priMask);
/* # 1302 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_FAULTMASK(void);
/* # 1311 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_FAULTMASK(uint32_t faultMask);
/* # 1320 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __get_CONTROL(void);
/* # 1329 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern void __set_CONTROL(uint32_t control);
/* # 1339 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __REV(uint32_t value);
/* # 1349 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __REV16(uint16_t value);
/* # 1359 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern int32_t __REVSH(int16_t value);
/* # 1369 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __RBIT(uint32_t value);
/* # 1379 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint8_t __LDREXB(uint8_t *addr);
/* # 1389 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint16_t __LDREXH(uint16_t *addr);
/* # 1399 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __LDREXW(uint32_t *addr);
/* # 1410 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __STREXB(uint8_t value, uint8_t *addr);
/* # 1421 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __STREXH(uint16_t value, uint16_t *addr);
/* # 1432 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern uint32_t __STREXW(uint32_t value, uint32_t *addr);
/* # 1468 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & 0x07);

  reg_value = ((SCB_Type *) ((0xE000E000) + 0x0D00))->AIRCR;
  reg_value &= ~((0xFFFFul << 16) | (7ul << 8));
  reg_value = (reg_value |
                (0x5FA << 16) |
                (PriorityGroupTmp << 8));
  ((SCB_Type *) ((0xE000E000) + 0x0D00))->AIRCR = reg_value;
}
/* # 1489 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t NVIC_GetPriorityGrouping(void)
{
  return ((((SCB_Type *) ((0xE000E000) + 0x0D00))->AIRCR & (7ul << 8)) >> 8);
}
/* # 1502 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000) + 0x0100))->ISER[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
/* # 1515 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000) + 0x0100))->ICER[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
/* # 1529 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t) ((((NVIC_Type *) ((0xE000E000) + 0x0100))->ISPR[(uint32_t)(IRQn) >> 5] & (1 << ((uint32_t)(IRQn) & 0x1F)))?1:0));
}
/* # 1542 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000) + 0x0100))->ISPR[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
/* # 1555 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000) + 0x0100))->ICPR[((uint32_t)(IRQn) >> 5)] = (1 << ((uint32_t)(IRQn) & 0x1F));
}
/* # 1569 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)((((NVIC_Type *) ((0xE000E000) + 0x0100))->IABR[(uint32_t)(IRQn) >> 5] & (1 << ((uint32_t)(IRQn) & 0x1F)))?1:0));
}
/* # 1586 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if(IRQn < 0) {
    ((SCB_Type *) ((0xE000E000) + 0x0D00))->SHP[((uint32_t)(IRQn) & 0xF)-4] = ((priority << (8 - 4)) & 0xff); }
  else {
    ((NVIC_Type *) ((0xE000E000) + 0x0100))->IP[(uint32_t)(IRQn)] = ((priority << (8 - 4)) & 0xff); }
}
/* # 1609 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if(IRQn < 0) {
    return((uint32_t)(((SCB_Type *) ((0xE000E000) + 0x0D00))->SHP[((uint32_t)(IRQn) & 0xF)-4] >> (8 - 4))); }
  else {
    return((uint32_t)(((NVIC_Type *) ((0xE000E000) + 0x0100))->IP[(uint32_t)(IRQn)] >> (8 - 4))); }
}
/* # 1634 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & 0x07);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7 - PriorityGroupTmp) > 4) ? 4 : 7 - PriorityGroupTmp;
  SubPriorityBits = ((PriorityGroupTmp + 4) < 7) ? 0 : PriorityGroupTmp - 7 + 4;

  return (
           ((PreemptPriority & ((1 << (PreemptPriorityBits)) - 1)) << SubPriorityBits) |
           ((SubPriority & ((1 << (SubPriorityBits )) - 1)))
         );
}
/* # 1665 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & 0x07);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7 - PriorityGroupTmp) > 4) ? 4 : 7 - PriorityGroupTmp;
  SubPriorityBits = ((PriorityGroupTmp + 4) < 7) ? 0 : PriorityGroupTmp - 7 + 4;

  *pPreemptPriority = (Priority >> SubPriorityBits) & ((1 << (PreemptPriorityBits)) - 1);
  *pSubPriority = (Priority ) & ((1 << (SubPriorityBits )) - 1);
}
/* # 1694 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if (ticks > (0xFFFFFFul << 0)) return (1);

  ((SysTick_Type *) ((0xE000E000) + 0x0010))->LOAD = (ticks & (0xFFFFFFul << 0)) - 1;
  NVIC_SetPriority (SysTick_IRQn, (1<<4) - 1);
  ((SysTick_Type *) ((0xE000E000) + 0x0010))->VAL = 0;
  ((SysTick_Type *) ((0xE000E000) + 0x0010))->CTRL = (1ul << 2) |
                   (1ul << 1) |
                   (1ul << 0);
  return (0);
}
/* # 1719 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline void NVIC_SystemReset(void)
{
  ((SCB_Type *) ((0xE000E000) + 0x0D00))->AIRCR = ((0x5FA << 16) |
                 (((SCB_Type *) ((0xE000E000) + 0x0D00))->AIRCR & (7ul << 8)) |
                 (1ul << 2));
  __DSB();
  while(1);
}
/* # 1742 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
extern volatile int ITM_RxBuffer;
/* # 1756 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if ((((CoreDebug_Type *) (0xE000EDF0))->DEMCR & (1ul << 24)) &&
      (((ITM_Type *) (0xE0000000))->TCR & (1ul << 0)) &&
      (((ITM_Type *) (0xE0000000))->TER & (1ul << 0) ) )
  {
    while (((ITM_Type *) (0xE0000000))->PORT[0].u32 == 0);
    ((ITM_Type *) (0xE0000000))->PORT[0].u8 = (uint8_t) ch;
  }
  return (ch);
}
/* # 1778 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline int ITM_ReceiveChar (void) {
  int ch = -1;

  if (ITM_RxBuffer != 0x5AA55AA5) {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = 0x5AA55AA5;
  }

  return (ch);
}
/* # 1798 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\CoreSupport/core_cm3.h"*/
static inline int ITM_CheckChar (void) {

  if (ITM_RxBuffer == 0x5AA55AA5) {
    return (0);
  } else {
    return (1);
  }
}
# 413 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/system_stm32f10x.h" 1
/* # 52 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/system_stm32f10x.h"*/
extern uint32_t SystemCoreClock;
/* # 78 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/system_stm32f10x.h"*/
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 414 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h" 2







typedef int32_t s32;
typedef int16_t s16;
typedef int8_t s8;

typedef const int32_t sc32;
typedef const int16_t sc16;
typedef const int8_t sc8;

typedef volatile int32_t vs32;
typedef volatile int16_t vs16;
typedef volatile int8_t vs8;

typedef volatile const int32_t vsc32;
typedef volatile const int16_t vsc16;
typedef volatile const int8_t vsc8;

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef const uint32_t uc32;
typedef const uint16_t uc16;
typedef const uint8_t uc8;

typedef volatile uint32_t vu32;
typedef volatile uint16_t vu16;
typedef volatile uint8_t vu8;

typedef volatile const uint32_t vuc32;
typedef volatile const uint16_t vuc16;
typedef volatile const uint8_t vuc8;


typedef enum {FALSE = 0, TRUE = !FALSE} bool;


typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;

typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;


typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;
/* # 480 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h"*/
typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC_TypeDef;





typedef struct
{
  uint32_t RESERVED0;
  volatile uint16_t DR1;
  uint16_t RESERVED1;
  volatile uint16_t DR2;
  uint16_t RESERVED2;
  volatile uint16_t DR3;
  uint16_t RESERVED3;
  volatile uint16_t DR4;
  uint16_t RESERVED4;
  volatile uint16_t DR5;
  uint16_t RESERVED5;
  volatile uint16_t DR6;
  uint16_t RESERVED6;
  volatile uint16_t DR7;
  uint16_t RESERVED7;
  volatile uint16_t DR8;
  uint16_t RESERVED8;
  volatile uint16_t DR9;
  uint16_t RESERVED9;
  volatile uint16_t DR10;
  uint16_t RESERVED10;
  volatile uint16_t RTCCR;
  uint16_t RESERVED11;
  volatile uint16_t CR;
  uint16_t RESERVED12;
  volatile uint16_t CSR;
  uint16_t RESERVED13[5];
  volatile uint16_t DR11;
  uint16_t RESERVED14;
  volatile uint16_t DR12;
  uint16_t RESERVED15;
  volatile uint16_t DR13;
  uint16_t RESERVED16;
  volatile uint16_t DR14;
  uint16_t RESERVED17;
  volatile uint16_t DR15;
  uint16_t RESERVED18;
  volatile uint16_t DR16;
  uint16_t RESERVED19;
  volatile uint16_t DR17;
  uint16_t RESERVED20;
  volatile uint16_t DR18;
  uint16_t RESERVED21;
  volatile uint16_t DR19;
  uint16_t RESERVED22;
  volatile uint16_t DR20;
  uint16_t RESERVED23;
  volatile uint16_t DR21;
  uint16_t RESERVED24;
  volatile uint16_t DR22;
  uint16_t RESERVED25;
  volatile uint16_t DR23;
  uint16_t RESERVED26;
  volatile uint16_t DR24;
  uint16_t RESERVED27;
  volatile uint16_t DR25;
  uint16_t RESERVED28;
  volatile uint16_t DR26;
  uint16_t RESERVED29;
  volatile uint16_t DR27;
  uint16_t RESERVED30;
  volatile uint16_t DR28;
  uint16_t RESERVED31;
  volatile uint16_t DR29;
  uint16_t RESERVED32;
  volatile uint16_t DR30;
  uint16_t RESERVED33;
  volatile uint16_t DR31;
  uint16_t RESERVED34;
  volatile uint16_t DR32;
  uint16_t RESERVED35;
  volatile uint16_t DR33;
  uint16_t RESERVED36;
  volatile uint16_t DR34;
  uint16_t RESERVED37;
  volatile uint16_t DR35;
  uint16_t RESERVED38;
  volatile uint16_t DR36;
  uint16_t RESERVED39;
  volatile uint16_t DR37;
  uint16_t RESERVED40;
  volatile uint16_t DR38;
  uint16_t RESERVED41;
  volatile uint16_t DR39;
  uint16_t RESERVED42;
  volatile uint16_t DR40;
  uint16_t RESERVED43;
  volatile uint16_t DR41;
  uint16_t RESERVED44;
  volatile uint16_t DR42;
  uint16_t RESERVED45;
} BKP_TypeDef;





typedef struct
{
  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;





typedef struct
{
  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;





typedef struct
{
  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;





typedef struct
{
  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];



  CAN_FilterRegister_TypeDef sFilterRegister[28];

} CAN_TypeDef;




typedef struct
{
  volatile uint32_t CFGR;
  volatile uint32_t OAR;
  volatile uint32_t PRES;
  volatile uint32_t ESR;
  volatile uint32_t CSR;
  volatile uint32_t TXD;
  volatile uint32_t RXD;
} CEC_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
} CRC_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;



} DAC_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
}DBGMCU_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;





typedef struct
{
  volatile uint32_t MACCR;
  volatile uint32_t MACFFR;
  volatile uint32_t MACHTHR;
  volatile uint32_t MACHTLR;
  volatile uint32_t MACMIIAR;
  volatile uint32_t MACMIIDR;
  volatile uint32_t MACFCR;
  volatile uint32_t MACVLANTR;
       uint32_t RESERVED0[2];
  volatile uint32_t MACRWUFFR;
  volatile uint32_t MACPMTCSR;
       uint32_t RESERVED1[2];
  volatile uint32_t MACSR;
  volatile uint32_t MACIMR;
  volatile uint32_t MACA0HR;
  volatile uint32_t MACA0LR;
  volatile uint32_t MACA1HR;
  volatile uint32_t MACA1LR;
  volatile uint32_t MACA2HR;
  volatile uint32_t MACA2LR;
  volatile uint32_t MACA3HR;
  volatile uint32_t MACA3LR;
       uint32_t RESERVED2[40];
  volatile uint32_t MMCCR;
  volatile uint32_t MMCRIR;
  volatile uint32_t MMCTIR;
  volatile uint32_t MMCRIMR;
  volatile uint32_t MMCTIMR;
       uint32_t RESERVED3[14];
  volatile uint32_t MMCTGFSCCR;
  volatile uint32_t MMCTGFMSCCR;
       uint32_t RESERVED4[5];
  volatile uint32_t MMCTGFCR;
       uint32_t RESERVED5[10];
  volatile uint32_t MMCRFCECR;
  volatile uint32_t MMCRFAECR;
       uint32_t RESERVED6[10];
  volatile uint32_t MMCRGUFCR;
       uint32_t RESERVED7[334];
  volatile uint32_t PTPTSCR;
  volatile uint32_t PTPSSIR;
  volatile uint32_t PTPTSHR;
  volatile uint32_t PTPTSLR;
  volatile uint32_t PTPTSHUR;
  volatile uint32_t PTPTSLUR;
  volatile uint32_t PTPTSAR;
  volatile uint32_t PTPTTHR;
  volatile uint32_t PTPTTLR;
       uint32_t RESERVED8[567];
  volatile uint32_t DMABMR;
  volatile uint32_t DMATPDR;
  volatile uint32_t DMARPDR;
  volatile uint32_t DMARDLAR;
  volatile uint32_t DMATDLAR;
  volatile uint32_t DMASR;
  volatile uint32_t DMAOMR;
  volatile uint32_t DMAIER;
  volatile uint32_t DMAMFBOCR;
       uint32_t RESERVED9[9];
  volatile uint32_t DMACHTDR;
  volatile uint32_t DMACHRDR;
  volatile uint32_t DMACHTBAR;
  volatile uint32_t DMACHRBAR;
} ETH_TypeDef;





typedef struct
{
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t AR;
  volatile uint32_t RESERVED;
  volatile uint32_t OBR;
  volatile uint32_t WRPR;
/* # 858 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h"*/
} FLASH_TypeDef;





typedef struct
{
  volatile uint16_t RDP;
  volatile uint16_t USER;
  volatile uint16_t Data0;
  volatile uint16_t Data1;
  volatile uint16_t WRP0;
  volatile uint16_t WRP1;
  volatile uint16_t WRP2;
  volatile uint16_t WRP3;
} OB_TypeDef;





typedef struct
{
  volatile uint32_t BTCR[8];
} FSMC_Bank1_TypeDef;





typedef struct
{
  volatile uint32_t BWTR[7];
} FSMC_Bank1E_TypeDef;





typedef struct
{
  volatile uint32_t PCR2;
  volatile uint32_t SR2;
  volatile uint32_t PMEM2;
  volatile uint32_t PATT2;
  uint32_t RESERVED0;
  volatile uint32_t ECCR2;
} FSMC_Bank2_TypeDef;





typedef struct
{
  volatile uint32_t PCR3;
  volatile uint32_t SR3;
  volatile uint32_t PMEM3;
  volatile uint32_t PATT3;
  uint32_t RESERVED0;
  volatile uint32_t ECCR3;
} FSMC_Bank3_TypeDef;





typedef struct
{
  volatile uint32_t PCR4;
  volatile uint32_t SR4;
  volatile uint32_t PMEM4;
  volatile uint32_t PATT4;
  volatile uint32_t PIO4;
} FSMC_Bank4_TypeDef;





typedef struct
{
  volatile uint32_t CRL;
  volatile uint32_t CRH;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t BRR;
  volatile uint32_t LCKR;
} GPIO_TypeDef;





typedef struct
{
  volatile uint32_t EVCR;
  volatile uint32_t MAPR;
  volatile uint32_t EXTICR[4];
  uint32_t RESERVED0;
  volatile uint32_t MAPR2;
} AFIO_TypeDef;




typedef struct
{
  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t OAR1;
  uint16_t RESERVED2;
  volatile uint16_t OAR2;
  uint16_t RESERVED3;
  volatile uint16_t DR;
  uint16_t RESERVED4;
  volatile uint16_t SR1;
  uint16_t RESERVED5;
  volatile uint16_t SR2;
  uint16_t RESERVED6;
  volatile uint16_t CCR;
  uint16_t RESERVED7;
  volatile uint16_t TRISE;
  uint16_t RESERVED8;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t AHBENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;


  volatile uint32_t AHBRSTR;
  volatile uint32_t CFGR2;






} RCC_TypeDef;





typedef struct
{
  volatile uint16_t CRH;
  uint16_t RESERVED0;
  volatile uint16_t CRL;
  uint16_t RESERVED1;
  volatile uint16_t PRLH;
  uint16_t RESERVED2;
  volatile uint16_t PRLL;
  uint16_t RESERVED3;
  volatile uint16_t DIVH;
  uint16_t RESERVED4;
  volatile uint16_t DIVL;
  uint16_t RESERVED5;
  volatile uint16_t CNTH;
  uint16_t RESERVED6;
  volatile uint16_t CNTL;
  uint16_t RESERVED7;
  volatile uint16_t ALRH;
  uint16_t RESERVED8;
  volatile uint16_t ALRL;
  uint16_t RESERVED9;
} RTC_TypeDef;





typedef struct
{
  volatile uint32_t POWER;
  volatile uint32_t CLKCR;
  volatile uint32_t ARG;
  volatile uint32_t CMD;
  volatile const uint32_t RESPCMD;
  volatile const uint32_t RESP1;
  volatile const uint32_t RESP2;
  volatile const uint32_t RESP3;
  volatile const uint32_t RESP4;
  volatile uint32_t DTIMER;
  volatile uint32_t DLEN;
  volatile uint32_t DCTRL;
  volatile const uint32_t DCOUNT;
  volatile const uint32_t STA;
  volatile uint32_t ICR;
  volatile uint32_t MASK;
  uint32_t RESERVED0[2];
  volatile const uint32_t FIFOCNT;
  uint32_t RESERVED1[13];
  volatile uint32_t FIFO;
} SDIO_TypeDef;





typedef struct
{
  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t SR;
  uint16_t RESERVED2;
  volatile uint16_t DR;
  uint16_t RESERVED3;
  volatile uint16_t CRCPR;
  uint16_t RESERVED4;
  volatile uint16_t RXCRCR;
  uint16_t RESERVED5;
  volatile uint16_t TXCRCR;
  uint16_t RESERVED6;
  volatile uint16_t I2SCFGR;
  uint16_t RESERVED7;
  volatile uint16_t I2SPR;
  uint16_t RESERVED8;
} SPI_TypeDef;





typedef struct
{
  volatile uint16_t CR1;
  uint16_t RESERVED0;
  volatile uint16_t CR2;
  uint16_t RESERVED1;
  volatile uint16_t SMCR;
  uint16_t RESERVED2;
  volatile uint16_t DIER;
  uint16_t RESERVED3;
  volatile uint16_t SR;
  uint16_t RESERVED4;
  volatile uint16_t EGR;
  uint16_t RESERVED5;
  volatile uint16_t CCMR1;
  uint16_t RESERVED6;
  volatile uint16_t CCMR2;
  uint16_t RESERVED7;
  volatile uint16_t CCER;
  uint16_t RESERVED8;
  volatile uint16_t CNT;
  uint16_t RESERVED9;
  volatile uint16_t PSC;
  uint16_t RESERVED10;
  volatile uint16_t ARR;
  uint16_t RESERVED11;
  volatile uint16_t RCR;
  uint16_t RESERVED12;
  volatile uint16_t CCR1;
  uint16_t RESERVED13;
  volatile uint16_t CCR2;
  uint16_t RESERVED14;
  volatile uint16_t CCR3;
  uint16_t RESERVED15;
  volatile uint16_t CCR4;
  uint16_t RESERVED16;
  volatile uint16_t BDTR;
  uint16_t RESERVED17;
  volatile uint16_t DCR;
  uint16_t RESERVED18;
  volatile uint16_t DMAR;
  uint16_t RESERVED19;
} TIM_TypeDef;





typedef struct
{
  volatile uint16_t SR;
  uint16_t RESERVED0;
  volatile uint16_t DR;
  uint16_t RESERVED1;
  volatile uint16_t BRR;
  uint16_t RESERVED2;
  volatile uint16_t CR1;
  uint16_t RESERVED3;
  volatile uint16_t CR2;
  uint16_t RESERVED4;
  volatile uint16_t CR3;
  uint16_t RESERVED5;
  volatile uint16_t GTPR;
  uint16_t RESERVED6;
} USART_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;
/* # 8185 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 1
/* # 27 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_adc.h" 1
/* # 31 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_adc.h"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h" 1
# 32 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_adc.h" 2
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_adc.h"*/
typedef struct
{
  uint32_t ADC_Mode;



  FunctionalState ADC_ScanConvMode;



  FunctionalState ADC_ContinuousConvMode;



  uint32_t ADC_ExternalTrigConv;



  uint32_t ADC_DataAlign;


  uint8_t ADC_NbrOfChannel;


}ADC_InitTypeDef;
/* # 427 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_adc.h"*/
void ADC_DeInit(ADC_TypeDef* ADCx);
void ADC_Init(ADC_TypeDef* ADCx, ADC_InitTypeDef* ADC_InitStruct);
void ADC_StructInit(ADC_InitTypeDef* ADC_InitStruct);
void ADC_Cmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_DMACmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_ITConfig(ADC_TypeDef* ADCx, uint16_t ADC_IT, FunctionalState NewState);
void ADC_ResetCalibration(ADC_TypeDef* ADCx);
FlagStatus ADC_GetResetCalibrationStatus(ADC_TypeDef* ADCx);
void ADC_StartCalibration(ADC_TypeDef* ADCx);
FlagStatus ADC_GetCalibrationStatus(ADC_TypeDef* ADCx);
void ADC_SoftwareStartConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
FlagStatus ADC_GetSoftwareStartConvStatus(ADC_TypeDef* ADCx);
void ADC_DiscModeChannelCountConfig(ADC_TypeDef* ADCx, uint8_t Number);
void ADC_DiscModeCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_RegularChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel, uint8_t Rank, uint8_t ADC_SampleTime);
void ADC_ExternalTrigConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
uint16_t ADC_GetConversionValue(ADC_TypeDef* ADCx);
uint32_t ADC_GetDualModeConversionValue(void);
void ADC_AutoInjectedConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_InjectedDiscModeCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_ExternalTrigInjectedConvConfig(ADC_TypeDef* ADCx, uint32_t ADC_ExternalTrigInjecConv);
void ADC_ExternalTrigInjectedConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_SoftwareStartInjectedConvCmd(ADC_TypeDef* ADCx, FunctionalState NewState);
FlagStatus ADC_GetSoftwareStartInjectedConvCmdStatus(ADC_TypeDef* ADCx);
void ADC_InjectedChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel, uint8_t Rank, uint8_t ADC_SampleTime);
void ADC_InjectedSequencerLengthConfig(ADC_TypeDef* ADCx, uint8_t Length);
void ADC_SetInjectedOffset(ADC_TypeDef* ADCx, uint8_t ADC_InjectedChannel, uint16_t Offset);
uint16_t ADC_GetInjectedConversionValue(ADC_TypeDef* ADCx, uint8_t ADC_InjectedChannel);
void ADC_AnalogWatchdogCmd(ADC_TypeDef* ADCx, uint32_t ADC_AnalogWatchdog);
void ADC_AnalogWatchdogThresholdsConfig(ADC_TypeDef* ADCx, uint16_t HighThreshold, uint16_t LowThreshold);
void ADC_AnalogWatchdogSingleChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel);
void ADC_TempSensorVrefintCmd(FunctionalState NewState);
FlagStatus ADC_GetFlagStatus(ADC_TypeDef* ADCx, uint8_t ADC_FLAG);
void ADC_ClearFlag(ADC_TypeDef* ADCx, uint8_t ADC_FLAG);
ITStatus ADC_GetITStatus(ADC_TypeDef* ADCx, uint16_t ADC_IT);
void ADC_ClearITPendingBit(ADC_TypeDef* ADCx, uint16_t ADC_IT);
# 28 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_bkp.h" 1
/* # 164 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_bkp.h"*/
void BKP_DeInit(void);
void BKP_TamperPinLevelConfig(uint16_t BKP_TamperPinLevel);
void BKP_TamperPinCmd(FunctionalState NewState);
void BKP_ITConfig(FunctionalState NewState);
void BKP_RTCOutputConfig(uint16_t BKP_RTCOutputSource);
void BKP_SetRTCCalibrationValue(uint8_t CalibrationValue);
void BKP_WriteBackupRegister(uint16_t BKP_DR, uint16_t Data);
uint16_t BKP_ReadBackupRegister(uint16_t BKP_DR);
FlagStatus BKP_GetFlagStatus(void);
void BKP_ClearFlag(void);
ITStatus BKP_GetITStatus(void);
void BKP_ClearITPendingBit(void);
# 29 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_can.h" 1
/* # 52 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_can.h"*/
typedef struct
{
  uint16_t CAN_Prescaler;

  uint8_t CAN_Mode;


  uint8_t CAN_SJW;



  uint8_t CAN_BS1;


  uint8_t CAN_BS2;


  FunctionalState CAN_TTCM;


  FunctionalState CAN_ABOM;


  FunctionalState CAN_AWUM;


  FunctionalState CAN_NART;


  FunctionalState CAN_RFLM;


  FunctionalState CAN_TXFP;

} CAN_InitTypeDef;





typedef struct
{
  uint16_t CAN_FilterIdHigh;



  uint16_t CAN_FilterIdLow;



  uint16_t CAN_FilterMaskIdHigh;




  uint16_t CAN_FilterMaskIdLow;




  uint16_t CAN_FilterFIFOAssignment;


  uint8_t CAN_FilterNumber;

  uint8_t CAN_FilterMode;


  uint8_t CAN_FilterScale;


  FunctionalState CAN_FilterActivation;

} CAN_FilterInitTypeDef;





typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint8_t IDE;


  uint8_t RTR;


  uint8_t DLC;


  uint8_t Data[8];
} CanTxMsg;





typedef struct
{
  uint32_t StdId;


  uint32_t ExtId;


  uint8_t IDE;


  uint8_t RTR;


  uint8_t DLC;


  uint8_t Data[8];

  uint8_t FMI;

} CanRxMsg;
/* # 498 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_can.h"*/
void CAN_DeInit(CAN_TypeDef* CANx);
uint8_t CAN_Init(CAN_TypeDef* CANx, CAN_InitTypeDef* CAN_InitStruct);
void CAN_FilterInit(CAN_FilterInitTypeDef* CAN_FilterInitStruct);
void CAN_StructInit(CAN_InitTypeDef* CAN_InitStruct);
void CAN_SlaveStartBank(uint8_t CAN_BankNumber);
void CAN_ITConfig(CAN_TypeDef* CANx, uint32_t CAN_IT, FunctionalState NewState);
uint8_t CAN_Transmit(CAN_TypeDef* CANx, CanTxMsg* TxMessage);
uint8_t CAN_TransmitStatus(CAN_TypeDef* CANx, uint8_t TransmitMailbox);
void CAN_CancelTransmit(CAN_TypeDef* CANx, uint8_t Mailbox);
void CAN_FIFORelease(CAN_TypeDef* CANx, uint8_t FIFONumber);
uint8_t CAN_MessagePending(CAN_TypeDef* CANx, uint8_t FIFONumber);
void CAN_Receive(CAN_TypeDef* CANx, uint8_t FIFONumber, CanRxMsg* RxMessage);
void CAN_DBGFreeze(CAN_TypeDef* CANx, FunctionalState NewState);
uint8_t CAN_Sleep(CAN_TypeDef* CANx);
uint8_t CAN_WakeUp(CAN_TypeDef* CANx);
FlagStatus CAN_GetFlagStatus(CAN_TypeDef* CANx, uint32_t CAN_FLAG);
void CAN_ClearFlag(CAN_TypeDef* CANx, uint32_t CAN_FLAG);
ITStatus CAN_GetITStatus(CAN_TypeDef* CANx, uint32_t CAN_IT);
void CAN_ClearITPendingBit(CAN_TypeDef* CANx, uint32_t CAN_IT);
# 30 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_cec.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_cec.h"*/
typedef struct
{
  uint16_t CEC_BitTimingMode;

  uint16_t CEC_BitPeriodMode;

}CEC_InitTypeDef;
/* # 176 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_cec.h"*/
void CEC_DeInit(void);
void CEC_Init(CEC_InitTypeDef* CEC_InitStruct);
void CEC_Cmd(FunctionalState NewState);
void CEC_ITConfig(FunctionalState NewState);
void CEC_OwnAddressConfig(uint8_t CEC_OwnAddress);
void CEC_SetPrescaler(uint16_t CEC_Prescaler);
void CEC_SendDataByte(uint8_t Data);
uint8_t CEC_ReceiveDataByte(void);
void CEC_StartOfMessage(void);
void CEC_EndOfMessageCmd(FunctionalState NewState);
FlagStatus CEC_GetFlagStatus(uint32_t CEC_FLAG);
void CEC_ClearFlag(uint32_t CEC_FLAG);
ITStatus CEC_GetITStatus(uint8_t CEC_IT);
void CEC_ClearITPendingBit(uint16_t CEC_IT);
# 31 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_crc.h" 1
/* # 69 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_crc.h"*/
void CRC_ResetDR(void);
uint32_t CRC_CalcCRC(uint32_t Data);
uint32_t CRC_CalcBlockCRC(uint32_t pBuffer[], uint32_t BufferLength);
uint32_t CRC_GetCRC(void);
void CRC_SetIDRegister(uint8_t IDValue);
uint8_t CRC_GetIDRegister(void);
# 32 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dac.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dac.h"*/
typedef struct
{
  uint32_t DAC_Trigger;


  uint32_t DAC_WaveGeneration;



  uint32_t DAC_LFSRUnmask_TriangleAmplitude;



  uint32_t DAC_OutputBuffer;

}DAC_InitTypeDef;
/* # 277 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dac.h"*/
void DAC_DeInit(void);
void DAC_Init(uint32_t DAC_Channel, DAC_InitTypeDef* DAC_InitStruct);
void DAC_StructInit(DAC_InitTypeDef* DAC_InitStruct);
void DAC_Cmd(uint32_t DAC_Channel, FunctionalState NewState);



void DAC_DMACmd(uint32_t DAC_Channel, FunctionalState NewState);
void DAC_SoftwareTriggerCmd(uint32_t DAC_Channel, FunctionalState NewState);
void DAC_DualSoftwareTriggerCmd(FunctionalState NewState);
void DAC_WaveGenerationCmd(uint32_t DAC_Channel, uint32_t DAC_Wave, FunctionalState NewState);
void DAC_SetChannel1Data(uint32_t DAC_Align, uint16_t Data);
void DAC_SetChannel2Data(uint32_t DAC_Align, uint16_t Data);
void DAC_SetDualChannelData(uint32_t DAC_Align, uint16_t Data2, uint16_t Data1);
uint16_t DAC_GetDataOutputValue(uint32_t DAC_Channel);
# 33 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dbgmcu.h" 1
/* # 97 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dbgmcu.h"*/
uint32_t DBGMCU_GetREVID(void);
uint32_t DBGMCU_GetDEVID(void);
void DBGMCU_Config(uint32_t DBGMCU_Periph, FunctionalState NewState);
# 34 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dma.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dma.h"*/
typedef struct
{
  uint32_t DMA_PeripheralBaseAddr;

  uint32_t DMA_MemoryBaseAddr;

  uint32_t DMA_DIR;


  uint32_t DMA_BufferSize;



  uint32_t DMA_PeripheralInc;


  uint32_t DMA_MemoryInc;


  uint32_t DMA_PeripheralDataSize;


  uint32_t DMA_MemoryDataSize;


  uint32_t DMA_Mode;




  uint32_t DMA_Priority;


  uint32_t DMA_M2M;

}DMA_InitTypeDef;
/* # 409 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_dma.h"*/
void DMA_DeInit(DMA_Channel_TypeDef* DMAy_Channelx);
void DMA_Init(DMA_Channel_TypeDef* DMAy_Channelx, DMA_InitTypeDef* DMA_InitStruct);
void DMA_StructInit(DMA_InitTypeDef* DMA_InitStruct);
void DMA_Cmd(DMA_Channel_TypeDef* DMAy_Channelx, FunctionalState NewState);
void DMA_ITConfig(DMA_Channel_TypeDef* DMAy_Channelx, uint32_t DMA_IT, FunctionalState NewState);
uint16_t DMA_GetCurrDataCounter(DMA_Channel_TypeDef* DMAy_Channelx);
FlagStatus DMA_GetFlagStatus(uint32_t DMA_FLAG);
void DMA_ClearFlag(uint32_t DMA_FLAG);
ITStatus DMA_GetITStatus(uint32_t DMA_IT);
void DMA_ClearITPendingBit(uint32_t DMA_IT);
# 35 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_exti.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_exti.h"*/
typedef enum
{
  EXTI_Mode_Interrupt = 0x00,
  EXTI_Mode_Event = 0x04
}EXTIMode_TypeDef;







typedef enum
{
  EXTI_Trigger_Rising = 0x08,
  EXTI_Trigger_Falling = 0x0C,
  EXTI_Trigger_Rising_Falling = 0x10
}EXTITrigger_TypeDef;
/* # 75 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_exti.h"*/
typedef struct
{
  uint32_t EXTI_Line;


  EXTIMode_TypeDef EXTI_Mode;


  EXTITrigger_TypeDef EXTI_Trigger;


  FunctionalState EXTI_LineCmd;

}EXTI_InitTypeDef;
/* # 157 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_exti.h"*/
void EXTI_DeInit(void);
void EXTI_Init(EXTI_InitTypeDef* EXTI_InitStruct);
void EXTI_StructInit(EXTI_InitTypeDef* EXTI_InitStruct);
void EXTI_GenerateSWInterrupt(uint32_t EXTI_Line);
FlagStatus EXTI_GetFlagStatus(uint32_t EXTI_Line);
void EXTI_ClearFlag(uint32_t EXTI_Line);
ITStatus EXTI_GetITStatus(uint32_t EXTI_Line);
void EXTI_ClearITPendingBit(uint32_t EXTI_Line);
# 36 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_flash.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_flash.h"*/
typedef enum
{
  FLASH_BUSY = 1,
  FLASH_ERROR_PG,
  FLASH_ERROR_WRP,
  FLASH_COMPLETE,
  FLASH_TIMEOUT
}FLASH_Status;
/* # 367 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_flash.h"*/
void FLASH_SetLatency(uint32_t FLASH_Latency);
void FLASH_HalfCycleAccessCmd(uint32_t FLASH_HalfCycleAccess);
void FLASH_PrefetchBufferCmd(uint32_t FLASH_PrefetchBuffer);
void FLASH_Unlock(void);
void FLASH_Lock(void);
FLASH_Status FLASH_ErasePage(uint32_t Page_Address);
FLASH_Status FLASH_EraseAllPages(void);
FLASH_Status FLASH_EraseOptionBytes(void);
FLASH_Status FLASH_ProgramWord(uint32_t Address, uint32_t Data);
FLASH_Status FLASH_ProgramHalfWord(uint32_t Address, uint16_t Data);
FLASH_Status FLASH_ProgramOptionByteData(uint32_t Address, uint8_t Data);
FLASH_Status FLASH_EnableWriteProtection(uint32_t FLASH_Pages);
FLASH_Status FLASH_ReadOutProtection(FunctionalState NewState);
FLASH_Status FLASH_UserOptionByteConfig(uint16_t OB_IWDG, uint16_t OB_STOP, uint16_t OB_STDBY);
uint32_t FLASH_GetUserOptionByte(void);
uint32_t FLASH_GetWriteProtectionOptionByte(void);
FlagStatus FLASH_GetReadOutProtectionStatus(void);
FlagStatus FLASH_GetPrefetchBufferStatus(void);
void FLASH_ITConfig(uint32_t FLASH_IT, FunctionalState NewState);
FlagStatus FLASH_GetFlagStatus(uint32_t FLASH_FLAG);
void FLASH_ClearFlag(uint32_t FLASH_FLAG);
FLASH_Status FLASH_GetStatus(void);
FLASH_Status FLASH_WaitForLastOperation(uint32_t Timeout);


void FLASH_UnlockBank1(void);
void FLASH_LockBank1(void);
FLASH_Status FLASH_EraseAllBank1Pages(void);
FLASH_Status FLASH_GetBank1Status(void);
FLASH_Status FLASH_WaitForLastBank1Operation(uint32_t Timeout);
# 37 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_fsmc.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_fsmc.h"*/
typedef struct
{
  uint32_t FSMC_AddressSetupTime;




  uint32_t FSMC_AddressHoldTime;




  uint32_t FSMC_DataSetupTime;




  uint32_t FSMC_BusTurnAroundDuration;




  uint32_t FSMC_CLKDivision;



  uint32_t FSMC_DataLatency;







  uint32_t FSMC_AccessMode;

}FSMC_NORSRAMTimingInitTypeDef;





typedef struct
{
  uint32_t FSMC_Bank;


  uint32_t FSMC_DataAddressMux;



  uint32_t FSMC_MemoryType;



  uint32_t FSMC_MemoryDataWidth;


  uint32_t FSMC_BurstAccessMode;



  uint32_t FSMC_WaitSignalPolarity;



  uint32_t FSMC_WrapMode;



  uint32_t FSMC_WaitSignalActive;




  uint32_t FSMC_WriteOperation;


  uint32_t FSMC_WaitSignal;



  uint32_t FSMC_ExtendedMode;


  uint32_t FSMC_WriteBurst;


  FSMC_NORSRAMTimingInitTypeDef* FSMC_ReadWriteTimingStruct;

  FSMC_NORSRAMTimingInitTypeDef* FSMC_WriteTimingStruct;
}FSMC_NORSRAMInitTypeDef;





typedef struct
{
  uint32_t FSMC_SetupTime;





  uint32_t FSMC_WaitSetupTime;





  uint32_t FSMC_HoldSetupTime;






  uint32_t FSMC_HiZSetupTime;




}FSMC_NAND_PCCARDTimingInitTypeDef;





typedef struct
{
  uint32_t FSMC_Bank;


  uint32_t FSMC_Waitfeature;


  uint32_t FSMC_MemoryDataWidth;


  uint32_t FSMC_ECC;


  uint32_t FSMC_ECCPageSize;


  uint32_t FSMC_TCLRSetupTime;



  uint32_t FSMC_TARSetupTime;



  FSMC_NAND_PCCARDTimingInitTypeDef* FSMC_CommonSpaceTimingStruct;

  FSMC_NAND_PCCARDTimingInitTypeDef* FSMC_AttributeSpaceTimingStruct;
}FSMC_NANDInitTypeDef;





typedef struct
{
  uint32_t FSMC_Waitfeature;


  uint32_t FSMC_TCLRSetupTime;



  uint32_t FSMC_TARSetupTime;




  FSMC_NAND_PCCARDTimingInitTypeDef* FSMC_CommonSpaceTimingStruct;

  FSMC_NAND_PCCARDTimingInitTypeDef* FSMC_AttributeSpaceTimingStruct;

  FSMC_NAND_PCCARDTimingInitTypeDef* FSMC_IOSpaceTimingStruct;
}FSMC_PCCARDInitTypeDef;
/* # 679 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_fsmc.h"*/
void FSMC_NORSRAMDeInit(uint32_t FSMC_Bank);
void FSMC_NANDDeInit(uint32_t FSMC_Bank);
void FSMC_PCCARDDeInit(void);
void FSMC_NORSRAMInit(FSMC_NORSRAMInitTypeDef* FSMC_NORSRAMInitStruct);
void FSMC_NANDInit(FSMC_NANDInitTypeDef* FSMC_NANDInitStruct);
void FSMC_PCCARDInit(FSMC_PCCARDInitTypeDef* FSMC_PCCARDInitStruct);
void FSMC_NORSRAMStructInit(FSMC_NORSRAMInitTypeDef* FSMC_NORSRAMInitStruct);
void FSMC_NANDStructInit(FSMC_NANDInitTypeDef* FSMC_NANDInitStruct);
void FSMC_PCCARDStructInit(FSMC_PCCARDInitTypeDef* FSMC_PCCARDInitStruct);
void FSMC_NORSRAMCmd(uint32_t FSMC_Bank, FunctionalState NewState);
void FSMC_NANDCmd(uint32_t FSMC_Bank, FunctionalState NewState);
void FSMC_PCCARDCmd(FunctionalState NewState);
void FSMC_NANDECCCmd(uint32_t FSMC_Bank, FunctionalState NewState);
uint32_t FSMC_GetECC(uint32_t FSMC_Bank);
void FSMC_ITConfig(uint32_t FSMC_Bank, uint32_t FSMC_IT, FunctionalState NewState);
FlagStatus FSMC_GetFlagStatus(uint32_t FSMC_Bank, uint32_t FSMC_FLAG);
void FSMC_ClearFlag(uint32_t FSMC_Bank, uint32_t FSMC_FLAG);
ITStatus FSMC_GetITStatus(uint32_t FSMC_Bank, uint32_t FSMC_IT);
void FSMC_ClearITPendingBit(uint32_t FSMC_Bank, uint32_t FSMC_IT);
# 38 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_gpio.h" 1
/* # 57 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_gpio.h"*/
typedef enum
{
  GPIO_Speed_10MHz = 1,
  GPIO_Speed_2MHz,
  GPIO_Speed_50MHz
}GPIOSpeed_TypeDef;







typedef enum
{ GPIO_Mode_AIN = 0x0,
  GPIO_Mode_IN_FLOATING = 0x04,
  GPIO_Mode_IPD = 0x28,
  GPIO_Mode_IPU = 0x48,
  GPIO_Mode_Out_OD = 0x14,
  GPIO_Mode_Out_PP = 0x10,
  GPIO_Mode_AF_OD = 0x1C,
  GPIO_Mode_AF_PP = 0x18
}GPIOMode_TypeDef;
/* # 90 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_gpio.h"*/
typedef struct
{
  uint16_t GPIO_Pin;


  GPIOSpeed_TypeDef GPIO_Speed;


  GPIOMode_TypeDef GPIO_Mode;

}GPIO_InitTypeDef;






typedef enum
{ Bit_RESET = 0,
  Bit_SET
}BitAction;
/* # 343 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_gpio.h"*/
void GPIO_DeInit(GPIO_TypeDef* GPIOx);
void GPIO_AFIODeInit(void);
void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
void GPIO_StructInit(GPIO_InitTypeDef* GPIO_InitStruct);
uint8_t GPIO_ReadInputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
uint16_t GPIO_ReadInputData(GPIO_TypeDef* GPIOx);
uint8_t GPIO_ReadOutputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
uint16_t GPIO_ReadOutputData(GPIO_TypeDef* GPIOx);
void GPIO_SetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_WriteBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, BitAction BitVal);
void GPIO_Write(GPIO_TypeDef* GPIOx, uint16_t PortVal);
void GPIO_PinLockConfig(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_EventOutputConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);
void GPIO_EventOutputCmd(FunctionalState NewState);
void GPIO_PinRemapConfig(uint32_t GPIO_Remap, FunctionalState NewState);
void GPIO_EXTILineConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);
void GPIO_ETH_MediaInterfaceConfig(uint32_t GPIO_ETH_MediaInterface);
# 39 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h"*/
typedef struct
{
  uint32_t I2C_ClockSpeed;


  uint16_t I2C_Mode;


  uint16_t I2C_DutyCycle;


  uint16_t I2C_OwnAddress1;


  uint16_t I2C_Ack;


  uint16_t I2C_AcknowledgedAddress;

}I2C_InitTypeDef;
/* # 521 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h"*/
void I2C_DeInit(I2C_TypeDef* I2Cx);
void I2C_Init(I2C_TypeDef* I2Cx, I2C_InitTypeDef* I2C_InitStruct);
void I2C_StructInit(I2C_InitTypeDef* I2C_InitStruct);
void I2C_Cmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_DMACmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_DMALastTransferCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_GenerateSTART(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_GenerateSTOP(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_AcknowledgeConfig(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_OwnAddress2Config(I2C_TypeDef* I2Cx, uint8_t Address);
void I2C_DualAddressCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_GeneralCallCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_ITConfig(I2C_TypeDef* I2Cx, uint16_t I2C_IT, FunctionalState NewState);
void I2C_SendData(I2C_TypeDef* I2Cx, uint8_t Data);
uint8_t I2C_ReceiveData(I2C_TypeDef* I2Cx);
void I2C_Send7bitAddress(I2C_TypeDef* I2Cx, uint8_t Address, uint8_t I2C_Direction);
uint16_t I2C_ReadRegister(I2C_TypeDef* I2Cx, uint8_t I2C_Register);
void I2C_SoftwareResetCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_SMBusAlertConfig(I2C_TypeDef* I2Cx, uint16_t I2C_SMBusAlert);
void I2C_TransmitPEC(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_PECPositionConfig(I2C_TypeDef* I2Cx, uint16_t I2C_PECPosition);
void I2C_CalculatePEC(I2C_TypeDef* I2Cx, FunctionalState NewState);
uint8_t I2C_GetPEC(I2C_TypeDef* I2Cx);
void I2C_ARPCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_StretchClockCmd(I2C_TypeDef* I2Cx, FunctionalState NewState);
void I2C_FastModeDutyCycleConfig(I2C_TypeDef* I2Cx, uint16_t I2C_DutyCycle);
/* # 631 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h"*/
ErrorStatus I2C_CheckEvent(I2C_TypeDef* I2Cx, uint32_t I2C_EVENT);





uint32_t I2C_GetLastEvent(I2C_TypeDef* I2Cx);





FlagStatus I2C_GetFlagStatus(I2C_TypeDef* I2Cx, uint32_t I2C_FLAG);





void I2C_ClearFlag(I2C_TypeDef* I2Cx, uint32_t I2C_FLAG);
ITStatus I2C_GetITStatus(I2C_TypeDef* I2Cx, uint32_t I2C_IT);
void I2C_ClearITPendingBit(I2C_TypeDef* I2Cx, uint32_t I2C_IT);
# 40 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_iwdg.h" 1
/* # 115 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_iwdg.h"*/
void IWDG_WriteAccessCmd(uint16_t IWDG_WriteAccess);
void IWDG_SetPrescaler(uint8_t IWDG_Prescaler);
void IWDG_SetReload(uint16_t Reload);
void IWDG_ReloadCounter(void);
void IWDG_Enable(void);
FlagStatus IWDG_GetFlagStatus(uint16_t IWDG_FLAG);
# 41 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_pwr.h" 1
/* # 128 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_pwr.h"*/
void PWR_DeInit(void);
void PWR_BackupAccessCmd(FunctionalState NewState);
void PWR_PVDCmd(FunctionalState NewState);
void PWR_PVDLevelConfig(uint32_t PWR_PVDLevel);
void PWR_WakeUpPinCmd(FunctionalState NewState);
void PWR_EnterSTOPMode(uint32_t PWR_Regulator, uint8_t PWR_STOPEntry);
void PWR_EnterSTANDBYMode(void);
FlagStatus PWR_GetFlagStatus(uint32_t PWR_FLAG);
void PWR_ClearFlag(uint32_t PWR_FLAG);
# 42 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_rcc.h" 1
/* # 45 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_rcc.h"*/
typedef struct
{
  uint32_t SYSCLK_Frequency;
  uint32_t HCLK_Frequency;
  uint32_t PCLK1_Frequency;
  uint32_t PCLK2_Frequency;
  uint32_t ADCCLK_Frequency;
}RCC_ClocksTypeDef;
/* # 646 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_rcc.h"*/
void RCC_DeInit(void);
void RCC_HSEConfig(uint32_t RCC_HSE);
ErrorStatus RCC_WaitForHSEStartUp(void);
void RCC_AdjustHSICalibrationValue(uint8_t HSICalibrationValue);
void RCC_HSICmd(FunctionalState NewState);
void RCC_PLLConfig(uint32_t RCC_PLLSource, uint32_t RCC_PLLMul);
void RCC_PLLCmd(FunctionalState NewState);


 void RCC_PREDIV1Config(uint32_t RCC_PREDIV1_Source, uint32_t RCC_PREDIV1_Div);



 void RCC_PREDIV2Config(uint32_t RCC_PREDIV2_Div);
 void RCC_PLL2Config(uint32_t RCC_PLL2Mul);
 void RCC_PLL2Cmd(FunctionalState NewState);
 void RCC_PLL3Config(uint32_t RCC_PLL3Mul);
 void RCC_PLL3Cmd(FunctionalState NewState);


void RCC_SYSCLKConfig(uint32_t RCC_SYSCLKSource);
uint8_t RCC_GetSYSCLKSource(void);
void RCC_HCLKConfig(uint32_t RCC_SYSCLK);
void RCC_PCLK1Config(uint32_t RCC_HCLK);
void RCC_PCLK2Config(uint32_t RCC_HCLK);
void RCC_ITConfig(uint8_t RCC_IT, FunctionalState NewState);




 void RCC_OTGFSCLKConfig(uint32_t RCC_OTGFSCLKSource);


void RCC_ADCCLKConfig(uint32_t RCC_PCLK2);


 void RCC_I2S2CLKConfig(uint32_t RCC_I2S2CLKSource);
 void RCC_I2S3CLKConfig(uint32_t RCC_I2S3CLKSource);


void RCC_LSEConfig(uint8_t RCC_LSE);
void RCC_LSICmd(FunctionalState NewState);
void RCC_RTCCLKConfig(uint32_t RCC_RTCCLKSource);
void RCC_RTCCLKCmd(FunctionalState NewState);
void RCC_GetClocksFreq(RCC_ClocksTypeDef* RCC_Clocks);
void RCC_AHBPeriphClockCmd(uint32_t RCC_AHBPeriph, FunctionalState NewState);
void RCC_APB2PeriphClockCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);
void RCC_APB1PeriphClockCmd(uint32_t RCC_APB1Periph, FunctionalState NewState);


void RCC_AHBPeriphResetCmd(uint32_t RCC_AHBPeriph, FunctionalState NewState);


void RCC_APB2PeriphResetCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);
void RCC_APB1PeriphResetCmd(uint32_t RCC_APB1Periph, FunctionalState NewState);
void RCC_BackupResetCmd(FunctionalState NewState);
void RCC_ClockSecuritySystemCmd(FunctionalState NewState);
void RCC_MCOConfig(uint8_t RCC_MCO);
FlagStatus RCC_GetFlagStatus(uint8_t RCC_FLAG);
void RCC_ClearFlag(void);
ITStatus RCC_GetITStatus(uint8_t RCC_IT);
void RCC_ClearITPendingBit(uint8_t RCC_IT);
# 43 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_rtc.h" 1
/* # 102 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_rtc.h"*/
void RTC_ITConfig(uint16_t RTC_IT, FunctionalState NewState);
void RTC_EnterConfigMode(void);
void RTC_ExitConfigMode(void);
uint32_t RTC_GetCounter(void);
void RTC_SetCounter(uint32_t CounterValue);
void RTC_SetPrescaler(uint32_t PrescalerValue);
void RTC_SetAlarm(uint32_t AlarmValue);
uint32_t RTC_GetDivider(void);
void RTC_WaitForLastTask(void);
void RTC_WaitForSynchro(void);
FlagStatus RTC_GetFlagStatus(uint16_t RTC_FLAG);
void RTC_ClearFlag(uint16_t RTC_FLAG);
ITStatus RTC_GetITStatus(uint16_t RTC_IT);
void RTC_ClearITPendingBit(uint16_t RTC_IT);
# 44 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_sdio.h" 1
/* # 45 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_sdio.h"*/
typedef struct
{
  uint32_t SDIO_ClockEdge;


  uint32_t SDIO_ClockBypass;



  uint32_t SDIO_ClockPowerSave;



  uint32_t SDIO_BusWide;


  uint32_t SDIO_HardwareFlowControl;


  uint8_t SDIO_ClockDiv;


} SDIO_InitTypeDef;

typedef struct
{
  uint32_t SDIO_Argument;




  uint32_t SDIO_CmdIndex;

  uint32_t SDIO_Response;


  uint32_t SDIO_Wait;


  uint32_t SDIO_CPSM;


} SDIO_CmdInitTypeDef;

typedef struct
{
  uint32_t SDIO_DataTimeOut;

  uint32_t SDIO_DataLength;

  uint32_t SDIO_DataBlockSize;


  uint32_t SDIO_TransferDir;



  uint32_t SDIO_TransferMode;


  uint32_t SDIO_DPSM;


} SDIO_DataInitTypeDef;
/* # 482 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_sdio.h"*/
void SDIO_DeInit(void);
void SDIO_Init(SDIO_InitTypeDef* SDIO_InitStruct);
void SDIO_StructInit(SDIO_InitTypeDef* SDIO_InitStruct);
void SDIO_ClockCmd(FunctionalState NewState);
void SDIO_SetPowerState(uint32_t SDIO_PowerState);
uint32_t SDIO_GetPowerState(void);
void SDIO_ITConfig(uint32_t SDIO_IT, FunctionalState NewState);
void SDIO_DMACmd(FunctionalState NewState);
void SDIO_SendCommand(SDIO_CmdInitTypeDef *SDIO_CmdInitStruct);
void SDIO_CmdStructInit(SDIO_CmdInitTypeDef* SDIO_CmdInitStruct);
uint8_t SDIO_GetCommandResponse(void);
uint32_t SDIO_GetResponse(uint32_t SDIO_RESP);
void SDIO_DataConfig(SDIO_DataInitTypeDef* SDIO_DataInitStruct);
void SDIO_DataStructInit(SDIO_DataInitTypeDef* SDIO_DataInitStruct);
uint32_t SDIO_GetDataCounter(void);
uint32_t SDIO_ReadData(void);
void SDIO_WriteData(uint32_t Data);
uint32_t SDIO_GetFIFOCount(void);
void SDIO_StartSDIOReadWait(FunctionalState NewState);
void SDIO_StopSDIOReadWait(FunctionalState NewState);
void SDIO_SetSDIOReadWaitMode(uint32_t SDIO_ReadWaitMode);
void SDIO_SetSDIOOperation(FunctionalState NewState);
void SDIO_SendSDIOSuspendCmd(FunctionalState NewState);
void SDIO_CommandCompletionCmd(FunctionalState NewState);
void SDIO_CEATAITCmd(FunctionalState NewState);
void SDIO_SendCEATACmd(FunctionalState NewState);
FlagStatus SDIO_GetFlagStatus(uint32_t SDIO_FLAG);
void SDIO_ClearFlag(uint32_t SDIO_FLAG);
ITStatus SDIO_GetITStatus(uint32_t SDIO_IT);
void SDIO_ClearITPendingBit(uint32_t SDIO_IT);
# 45 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_spi.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_spi.h"*/
typedef struct
{
  uint16_t SPI_Direction;


  uint16_t SPI_Mode;


  uint16_t SPI_DataSize;


  uint16_t SPI_CPOL;


  uint16_t SPI_CPHA;


  uint16_t SPI_NSS;



  uint16_t SPI_BaudRatePrescaler;





  uint16_t SPI_FirstBit;


  uint16_t SPI_CRCPolynomial;
}SPI_InitTypeDef;





typedef struct
{

  uint16_t I2S_Mode;


  uint16_t I2S_Standard;


  uint16_t I2S_DataFormat;


  uint16_t I2S_MCLKOutput;


  uint32_t I2S_AudioFreq;


  uint16_t I2S_CPOL;

}I2S_InitTypeDef;
/* # 449 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_spi.h"*/
void SPI_I2S_DeInit(SPI_TypeDef* SPIx);
void SPI_Init(SPI_TypeDef* SPIx, SPI_InitTypeDef* SPI_InitStruct);
void I2S_Init(SPI_TypeDef* SPIx, I2S_InitTypeDef* I2S_InitStruct);
void SPI_StructInit(SPI_InitTypeDef* SPI_InitStruct);
void I2S_StructInit(I2S_InitTypeDef* I2S_InitStruct);
void SPI_Cmd(SPI_TypeDef* SPIx, FunctionalState NewState);
void I2S_Cmd(SPI_TypeDef* SPIx, FunctionalState NewState);
void SPI_I2S_ITConfig(SPI_TypeDef* SPIx, uint8_t SPI_I2S_IT, FunctionalState NewState);
void SPI_I2S_DMACmd(SPI_TypeDef* SPIx, uint16_t SPI_I2S_DMAReq, FunctionalState NewState);
void SPI_I2S_SendData(SPI_TypeDef* SPIx, uint16_t Data);
uint16_t SPI_I2S_ReceiveData(SPI_TypeDef* SPIx);
void SPI_NSSInternalSoftwareConfig(SPI_TypeDef* SPIx, uint16_t SPI_NSSInternalSoft);
void SPI_SSOutputCmd(SPI_TypeDef* SPIx, FunctionalState NewState);
void SPI_DataSizeConfig(SPI_TypeDef* SPIx, uint16_t SPI_DataSize);
void SPI_TransmitCRC(SPI_TypeDef* SPIx);
void SPI_CalculateCRC(SPI_TypeDef* SPIx, FunctionalState NewState);
uint16_t SPI_GetCRC(SPI_TypeDef* SPIx, uint8_t SPI_CRC);
uint16_t SPI_GetCRCPolynomial(SPI_TypeDef* SPIx);
void SPI_BiDirectionalLineConfig(SPI_TypeDef* SPIx, uint16_t SPI_Direction);
FlagStatus SPI_I2S_GetFlagStatus(SPI_TypeDef* SPIx, uint16_t SPI_I2S_FLAG);
void SPI_I2S_ClearFlag(SPI_TypeDef* SPIx, uint16_t SPI_I2S_FLAG);
ITStatus SPI_I2S_GetITStatus(SPI_TypeDef* SPIx, uint8_t SPI_I2S_IT);
void SPI_I2S_ClearITPendingBit(SPI_TypeDef* SPIx, uint8_t SPI_I2S_IT);
# 46 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h" 1
/* # 50 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h"*/
typedef struct
{
  uint16_t TIM_Prescaler;


  uint16_t TIM_CounterMode;


  uint16_t TIM_Period;



  uint16_t TIM_ClockDivision;


  uint8_t TIM_RepetitionCounter;







} TIM_TimeBaseInitTypeDef;





typedef struct
{
  uint16_t TIM_OCMode;


  uint16_t TIM_OutputState;


  uint16_t TIM_OutputNState;



  uint16_t TIM_Pulse;


  uint16_t TIM_OCPolarity;


  uint16_t TIM_OCNPolarity;



  uint16_t TIM_OCIdleState;



  uint16_t TIM_OCNIdleState;


} TIM_OCInitTypeDef;





typedef struct
{

  uint16_t TIM_Channel;


  uint16_t TIM_ICPolarity;


  uint16_t TIM_ICSelection;


  uint16_t TIM_ICPrescaler;


  uint16_t TIM_ICFilter;

} TIM_ICInitTypeDef;






typedef struct
{

  uint16_t TIM_OSSRState;


  uint16_t TIM_OSSIState;


  uint16_t TIM_LOCKLevel;


  uint16_t TIM_DeadTime;



  uint16_t TIM_Break;


  uint16_t TIM_BreakPolarity;


  uint16_t TIM_AutomaticOutput;

} TIM_BDTRInitTypeDef;
/* # 1023 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h"*/
void TIM_DeInit(TIM_TypeDef* TIMx);
void TIM_TimeBaseInit(TIM_TypeDef* TIMx, TIM_TimeBaseInitTypeDef* TIM_TimeBaseInitStruct);
void TIM_OC1Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct);
void TIM_OC2Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct);
void TIM_OC3Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct);
void TIM_OC4Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct);
void TIM_ICInit(TIM_TypeDef* TIMx, TIM_ICInitTypeDef* TIM_ICInitStruct);
void TIM_PWMIConfig(TIM_TypeDef* TIMx, TIM_ICInitTypeDef* TIM_ICInitStruct);
void TIM_BDTRConfig(TIM_TypeDef* TIMx, TIM_BDTRInitTypeDef *TIM_BDTRInitStruct);
void TIM_TimeBaseStructInit(TIM_TimeBaseInitTypeDef* TIM_TimeBaseInitStruct);
void TIM_OCStructInit(TIM_OCInitTypeDef* TIM_OCInitStruct);
void TIM_ICStructInit(TIM_ICInitTypeDef* TIM_ICInitStruct);
void TIM_BDTRStructInit(TIM_BDTRInitTypeDef* TIM_BDTRInitStruct);
void TIM_Cmd(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_CtrlPWMOutputs(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_ITConfig(TIM_TypeDef* TIMx, uint16_t TIM_IT, FunctionalState NewState);
void TIM_GenerateEvent(TIM_TypeDef* TIMx, uint16_t TIM_EventSource);
void TIM_DMAConfig(TIM_TypeDef* TIMx, uint16_t TIM_DMABase, uint16_t TIM_DMABurstLength);
void TIM_DMACmd(TIM_TypeDef* TIMx, uint16_t TIM_DMASource, FunctionalState NewState);
void TIM_InternalClockConfig(TIM_TypeDef* TIMx);
void TIM_ITRxExternalClockConfig(TIM_TypeDef* TIMx, uint16_t TIM_InputTriggerSource);
void TIM_TIxExternalClockConfig(TIM_TypeDef* TIMx, uint16_t TIM_TIxExternalCLKSource,
                                uint16_t TIM_ICPolarity, uint16_t ICFilter);
void TIM_ETRClockMode1Config(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler, uint16_t TIM_ExtTRGPolarity,
                             uint16_t ExtTRGFilter);
void TIM_ETRClockMode2Config(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler,
                             uint16_t TIM_ExtTRGPolarity, uint16_t ExtTRGFilter);
void TIM_ETRConfig(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler, uint16_t TIM_ExtTRGPolarity,
                   uint16_t ExtTRGFilter);
void TIM_PrescalerConfig(TIM_TypeDef* TIMx, uint16_t Prescaler, uint16_t TIM_PSCReloadMode);
void TIM_CounterModeConfig(TIM_TypeDef* TIMx, uint16_t TIM_CounterMode);
void TIM_SelectInputTrigger(TIM_TypeDef* TIMx, uint16_t TIM_InputTriggerSource);
void TIM_EncoderInterfaceConfig(TIM_TypeDef* TIMx, uint16_t TIM_EncoderMode,
                                uint16_t TIM_IC1Polarity, uint16_t TIM_IC2Polarity);
void TIM_ForcedOC1Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction);
void TIM_ForcedOC2Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction);
void TIM_ForcedOC3Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction);
void TIM_ForcedOC4Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction);
void TIM_ARRPreloadConfig(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_SelectCOM(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_SelectCCDMA(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_CCPreloadControl(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_OC1PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload);
void TIM_OC2PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload);
void TIM_OC3PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload);
void TIM_OC4PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload);
void TIM_OC1FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast);
void TIM_OC2FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast);
void TIM_OC3FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast);
void TIM_OC4FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast);
void TIM_ClearOC1Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear);
void TIM_ClearOC2Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear);
void TIM_ClearOC3Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear);
void TIM_ClearOC4Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear);
void TIM_OC1PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity);
void TIM_OC1NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity);
void TIM_OC2PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity);
void TIM_OC2NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity);
void TIM_OC3PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity);
void TIM_OC3NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity);
void TIM_OC4PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity);
void TIM_CCxCmd(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_CCx);
void TIM_CCxNCmd(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_CCxN);
void TIM_SelectOCxM(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_OCMode);
void TIM_UpdateDisableConfig(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_UpdateRequestConfig(TIM_TypeDef* TIMx, uint16_t TIM_UpdateSource);
void TIM_SelectHallSensor(TIM_TypeDef* TIMx, FunctionalState NewState);
void TIM_SelectOnePulseMode(TIM_TypeDef* TIMx, uint16_t TIM_OPMode);
void TIM_SelectOutputTrigger(TIM_TypeDef* TIMx, uint16_t TIM_TRGOSource);
void TIM_SelectSlaveMode(TIM_TypeDef* TIMx, uint16_t TIM_SlaveMode);
void TIM_SelectMasterSlaveMode(TIM_TypeDef* TIMx, uint16_t TIM_MasterSlaveMode);
void TIM_SetCounter(TIM_TypeDef* TIMx, uint16_t Counter);
void TIM_SetAutoreload(TIM_TypeDef* TIMx, uint16_t Autoreload);
void TIM_SetCompare1(TIM_TypeDef* TIMx, uint16_t Compare1);
void TIM_SetCompare2(TIM_TypeDef* TIMx, uint16_t Compare2);
void TIM_SetCompare3(TIM_TypeDef* TIMx, uint16_t Compare3);
void TIM_SetCompare4(TIM_TypeDef* TIMx, uint16_t Compare4);
void TIM_SetIC1Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC);
void TIM_SetIC2Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC);
void TIM_SetIC3Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC);
void TIM_SetIC4Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC);
void TIM_SetClockDivision(TIM_TypeDef* TIMx, uint16_t TIM_CKD);
uint16_t TIM_GetCapture1(TIM_TypeDef* TIMx);
uint16_t TIM_GetCapture2(TIM_TypeDef* TIMx);
uint16_t TIM_GetCapture3(TIM_TypeDef* TIMx);
uint16_t TIM_GetCapture4(TIM_TypeDef* TIMx);
uint16_t TIM_GetCounter(TIM_TypeDef* TIMx);
uint16_t TIM_GetPrescaler(TIM_TypeDef* TIMx);
FlagStatus TIM_GetFlagStatus(TIM_TypeDef* TIMx, uint16_t TIM_FLAG);
void TIM_ClearFlag(TIM_TypeDef* TIMx, uint16_t TIM_FLAG);
ITStatus TIM_GetITStatus(TIM_TypeDef* TIMx, uint16_t TIM_IT);
void TIM_ClearITPendingBit(TIM_TypeDef* TIMx, uint16_t TIM_IT);
# 47 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h" 1
# 48 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_wwdg.h" 1
/* # 87 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_wwdg.h"*/
void WWDG_DeInit(void);
void WWDG_SetPrescaler(uint32_t WWDG_Prescaler);
void WWDG_SetWindowValue(uint8_t WindowValue);
void WWDG_EnableIT(void);
void WWDG_SetCounter(uint8_t Counter);
void WWDG_Enable(uint8_t Counter);
FlagStatus WWDG_GetFlagStatus(void);
void WWDG_ClearFlag(void);
# 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/misc.h" 1
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/misc.h"*/
typedef struct
{
  uint8_t NVIC_IRQChannel;




  uint8_t NVIC_IRQChannelPreemptionPriority;



  uint8_t NVIC_IRQChannelSubPriority;



  FunctionalState NVIC_IRQChannelCmd;


} NVIC_InitTypeDef;
/* # 195 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/misc.h"*/
void NVIC_PriorityGroupConfig(uint32_t NVIC_PriorityGroup);
void NVIC_Init(NVIC_InitTypeDef* NVIC_InitStruct);
void NVIC_SetVectorTable(uint32_t NVIC_VectTab, uint32_t Offset);
void NVIC_SystemLPConfig(uint8_t LowPowerMode, FunctionalState NewState);
void SysTick_CLKSourceConfig(uint32_t SysTick_CLKSource);
# 50 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 8186 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\CMSIS\\CM3\\DeviceSupport\\ST\\STM32F10x/stm32f10x.h" 2
# 32 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h" 2
/* # 49 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h"*/
typedef struct
{
  uint32_t USART_BaudRate;




  uint16_t USART_WordLength;


  uint16_t USART_StopBits;


  uint16_t USART_Parity;






  uint16_t USART_Mode;


  uint16_t USART_HardwareFlowControl;


} USART_InitTypeDef;





typedef struct
{

  uint16_t USART_Clock;


  uint16_t USART_CPOL;


  uint16_t USART_CPHA;


  uint16_t USART_LastBit;


} USART_ClockInitTypeDef;
/* # 364 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h"*/
void USART_DeInit(USART_TypeDef* USARTx);
void USART_Init(USART_TypeDef* USARTx, USART_InitTypeDef* USART_InitStruct);
void USART_StructInit(USART_InitTypeDef* USART_InitStruct);
void USART_ClockInit(USART_TypeDef* USARTx, USART_ClockInitTypeDef* USART_ClockInitStruct);
void USART_ClockStructInit(USART_ClockInitTypeDef* USART_ClockInitStruct);
void USART_Cmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_ITConfig(USART_TypeDef* USARTx, uint16_t USART_IT, FunctionalState NewState);
void USART_DMACmd(USART_TypeDef* USARTx, uint16_t USART_DMAReq, FunctionalState NewState);
void USART_SetAddress(USART_TypeDef* USARTx, uint8_t USART_Address);
void USART_WakeUpConfig(USART_TypeDef* USARTx, uint16_t USART_WakeUp);
void USART_ReceiverWakeUpCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_LINBreakDetectLengthConfig(USART_TypeDef* USARTx, uint16_t USART_LINBreakDetectLength);
void USART_LINCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_SendData(USART_TypeDef* USARTx, uint16_t Data);
uint16_t USART_ReceiveData(USART_TypeDef* USARTx);
void USART_SendBreak(USART_TypeDef* USARTx);
void USART_SetGuardTime(USART_TypeDef* USARTx, uint8_t USART_GuardTime);
void USART_SetPrescaler(USART_TypeDef* USARTx, uint8_t USART_Prescaler);
void USART_SmartCardCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_SmartCardNACKCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_HalfDuplexCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_OverSampling8Cmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_OneBitMethodCmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_IrDAConfig(USART_TypeDef* USARTx, uint16_t USART_IrDAMode);
void USART_IrDACmd(USART_TypeDef* USARTx, FunctionalState NewState);
FlagStatus USART_GetFlagStatus(USART_TypeDef* USARTx, uint16_t USART_FLAG);
void USART_ClearFlag(USART_TypeDef* USARTx, uint16_t USART_FLAG);
ITStatus USART_GetITStatus(USART_TypeDef* USARTx, uint16_t USART_IT);
void USART_ClearITPendingBit(USART_TypeDef* USARTx, uint16_t USART_IT);
# 23 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c" 2
/* # 128 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_DeInit(USART_TypeDef* USARTx)
{ CODESCROLL_FUNC_BEGIN(437, (437, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1073,978) 

  
  CS_CMM_PROBE_NODE_STMT(222,2,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(222,1,1) if (USARTx == ((USART_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3800)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1074,979) 
    
    CS_CMM_PROBE_NODE_STMT(222,0,2) RCC_APB2PeriphResetCmd(((uint32_t)0x00004000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00004000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(223,7,3) if (USARTx == ((USART_TypeDef *) (((uint32_t)0x40000000) + 0x4400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1075,980) 
    
    CS_CMM_PROBE_NODE_STMT(223,6,4) RCC_APB1PeriphResetCmd(((uint32_t)0x00020000), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00020000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(223,5,5) if (USARTx == ((USART_TypeDef *) (((uint32_t)0x40000000) + 0x4800)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1076,981) 
    
    CS_CMM_PROBE_NODE_STMT(223,4,6) RCC_APB1PeriphResetCmd(((uint32_t)0x00040000), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00040000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(223,3,7) if (USARTx == ((USART_TypeDef *) (((uint32_t)0x40000000) + 0x4C00)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1077,982) 
    
    CS_CMM_PROBE_NODE_STMT(223,2,8) RCC_APB1PeriphResetCmd(((uint32_t)0x00080000), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00080000), DISABLE);
  }
  else
  {
    
    CS_CMM_PROBE_NODE_STMT(223,1,9) if (USARTx == ((USART_TypeDef *) (((uint32_t)0x40000000) + 0x5000)))
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1078,983) 
      
      CS_CMM_PROBE_NODE_STMT(223,0,10) RCC_APB1PeriphResetCmd(((uint32_t)0x00100000), ENABLE);
      RCC_APB1PeriphResetCmd(((uint32_t)0x00100000), DISABLE);
    } CS_CMM_ELSE_PROBE_C1(984) 
  }
  }
  }
  }

CS_CMM_PROBE_NODE_STMT(224,7,11) 
 CODESCROLL_FUNC_END(437, 23, 161) } CODESCROLL_FUNC_END_RBRACE 
/* # 173 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_Init(USART_TypeDef* USARTx, USART_InitTypeDef* USART_InitStruct)
{ CODESCROLL_FUNC_BEGIN(438, (438, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1079,985) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1080,224,6,0)

  uint32_t tmpreg = 0x00, apbclock = 0x00;
  uint32_t integerdivider = 0x00;
  uint32_t fractionaldivider = 0x00;
  uint32_t usartxbase = 0;
  RCC_ClocksTypeDef RCC_ClocksStatus;

  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(224,5,1) if (USART_InitStruct->USART_HardwareFlowControl != ((uint16_t)0x0000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1081,986) 
    
    CS_CMM_PROBE_NODE_STMT(224,4,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(987) 

  
  CS_CMM_PROBE_NODE_STMT(224,3,3) usartxbase = (uint32_t)USARTx;


  tmpreg = USARTx->CR2;

  tmpreg &= ((uint16_t)0xCFFF);


  tmpreg |= (uint32_t)USART_InitStruct->USART_StopBits;


  USARTx->CR2 = (uint16_t)tmpreg;


  tmpreg = USARTx->CR1;

  tmpreg &= ((uint16_t)0xE9F3);




  tmpreg |= (uint32_t)USART_InitStruct->USART_WordLength | USART_InitStruct->USART_Parity |
            USART_InitStruct->USART_Mode;

  USARTx->CR1 = (uint16_t)tmpreg;


  tmpreg = USARTx->CR3;

  tmpreg &= ((uint16_t)0xFCFF);


  tmpreg |= USART_InitStruct->USART_HardwareFlowControl;

  USARTx->CR3 = (uint16_t)tmpreg;



  RCC_GetClocksFreq(&RCC_ClocksStatus);
  
  CS_CMM_PROBE_NODE_STMT(224,2,4) if (usartxbase == ((((uint32_t)0x40000000) + 0x10000) + 0x3800))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1082,988) 
    
    CS_CMM_PROBE_NODE_STMT(224,1,5) apbclock = RCC_ClocksStatus.PCLK2_Frequency;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1083,989) 
    
    CS_CMM_PROBE_NODE_STMT(224,0,6) apbclock = RCC_ClocksStatus.PCLK1_Frequency;
  }


  
  CS_CMM_PROBE_NODE_STMT(225,7,7) if ((USARTx->CR1 & ((u16)0x8000)) != 0)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1084,990) 

    
    CS_CMM_PROBE_NODE_STMT(225,6,8) integerdivider = ((25 * apbclock) / (2 * (USART_InitStruct->USART_BaudRate)));
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1085,991) 

    
    CS_CMM_PROBE_NODE_STMT(225,5,9) integerdivider = ((25 * apbclock) / (4 * (USART_InitStruct->USART_BaudRate)));
  }
  
  CS_CMM_PROBE_NODE_STMT(225,4,10) tmpreg = (integerdivider / 100) << 4;


  fractionaldivider = integerdivider - (100 * (tmpreg >> 4));


  
  CS_CMM_PROBE_NODE_STMT(225,3,11) if ((USARTx->CR1 & ((u16)0x8000)) != 0)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1086,992) 
    
    CS_CMM_PROBE_NODE_STMT(225,2,12) tmpreg |= ((((fractionaldivider * 8) + 50) / 100)) & ((uint8_t)0x07);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1087,993) 
    
    CS_CMM_PROBE_NODE_STMT(225,1,13) tmpreg |= ((((fractionaldivider * 16) + 50) / 100)) & ((uint8_t)0x0F);
  }


  
  CS_CMM_PROBE_NODE_STMT(225,0,14) USARTx->BRR = (uint16_t)tmpreg;

CS_CMM_PROBE_NODE_STMT(226,7,15) 
 CODESCROLL_FUNC_END(438, 23, 270) } CODESCROLL_FUNC_END_RBRACE 







void USART_StructInit(USART_InitTypeDef* USART_InitStruct)
{ CODESCROLL_FUNC_BEGIN(439, (439, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1088,994) 

  
  CS_CMM_PROBE_NODE_STMT(226,6,0) USART_InitStruct->USART_BaudRate = 9600;
  USART_InitStruct->USART_WordLength = ((uint16_t)0x0000);
  USART_InitStruct->USART_StopBits = ((uint16_t)0x0000);
  USART_InitStruct->USART_Parity = ((uint16_t)0x0000) ;
  USART_InitStruct->USART_Mode = ((uint16_t)0x0004) | ((uint16_t)0x0008);
  USART_InitStruct->USART_HardwareFlowControl = ((uint16_t)0x0000);

CS_CMM_PROBE_NODE_STMT(226,5,1) 
 CODESCROLL_FUNC_END(439, 23, 287) } CODESCROLL_FUNC_END_RBRACE 
/* # 299 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_ClockInit(USART_TypeDef* USARTx, USART_ClockInitTypeDef* USART_ClockInitStruct)
{ CODESCROLL_FUNC_BEGIN(440, (440, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1089,995) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1090,226,4,0)

  uint32_t tmpreg = 0x00;

  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);


  tmpreg = USARTx->CR2;

  tmpreg &= ((uint16_t)0xF0FF);





  tmpreg |= (uint32_t)USART_ClockInitStruct->USART_Clock | USART_ClockInitStruct->USART_CPOL |
                 USART_ClockInitStruct->USART_CPHA | USART_ClockInitStruct->USART_LastBit;

  USARTx->CR2 = (uint16_t)tmpreg;

CS_CMM_PROBE_NODE_STMT(226,3,1) 
 CODESCROLL_FUNC_END(440, 23, 322) } CODESCROLL_FUNC_END_RBRACE 







void USART_ClockStructInit(USART_ClockInitTypeDef* USART_ClockInitStruct)
{ CODESCROLL_FUNC_BEGIN(441, (441, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1091,996) 

  
  CS_CMM_PROBE_NODE_STMT(226,2,0) USART_ClockInitStruct->USART_Clock = ((uint16_t)0x0000);
  USART_ClockInitStruct->USART_CPOL = ((uint16_t)0x0000);
  USART_ClockInitStruct->USART_CPHA = ((uint16_t)0x0000);
  USART_ClockInitStruct->USART_LastBit = ((uint16_t)0x0000);

CS_CMM_PROBE_NODE_STMT(226,1,1) 
 CODESCROLL_FUNC_END(441, 23, 337) } CODESCROLL_FUNC_END_RBRACE 
/* # 348 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_Cmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(442, (442, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1092,997) 

  
  CS_CMM_PROBE_NODE_STMT(226,0,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(227,7,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1093,998) 

    
    CS_CMM_PROBE_NODE_STMT(227,6,2) USARTx->CR1 |= ((uint16_t)0x2000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1094,999) 

    
    CS_CMM_PROBE_NODE_STMT(227,5,3) USARTx->CR1 &= ((uint16_t)0xDFFF);
  }

CS_CMM_PROBE_NODE_STMT(227,4,4) 
 CODESCROLL_FUNC_END(442, 23, 364) } CODESCROLL_FUNC_END_RBRACE 
/* # 385 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_ITConfig(USART_TypeDef* USARTx, uint16_t USART_IT, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(443, (443, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1095,1000) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1096,227,3,0)

  uint32_t usartreg = 0x00, itpos = 0x00, itmask = 0x00;
  uint32_t usartxbase = 0x00;

  ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(227,2,1) if (USART_IT == ((uint16_t)0x096A))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1097,1001) 
    
    CS_CMM_PROBE_NODE_STMT(227,1,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(1002) 

  
  CS_CMM_PROBE_NODE_STMT(227,0,3) usartxbase = (uint32_t)USARTx;


  usartreg = (((uint8_t)USART_IT) >> 0x05);


  itpos = USART_IT & ((uint16_t)0x001F);
  itmask = (((uint32_t)0x01) << itpos);

  
  CS_CMM_PROBE_NODE_STMT(228,7,4) if (usartreg == 0x01)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1098,1003) 
    
    CS_CMM_PROBE_NODE_STMT(228,6,5) usartxbase += 0x0C;
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(228,5,6) if (usartreg == 0x02)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1099,1004) 
    
    CS_CMM_PROBE_NODE_STMT(228,4,7) usartxbase += 0x10;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1100,1005) 
    
    CS_CMM_PROBE_NODE_STMT(228,3,8) usartxbase += 0x14;
  }
  }
  
  CS_CMM_PROBE_NODE_STMT(228,2,9) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1101,1006) 
    
    CS_CMM_PROBE_NODE_STMT(228,1,10) *(volatile uint32_t*)usartxbase |= itmask;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1102,1007) 
    
    CS_CMM_PROBE_NODE_STMT(228,0,11) *(volatile uint32_t*)usartxbase &= ~itmask;
  }

CS_CMM_PROBE_NODE_STMT(229,7,12) 
 CODESCROLL_FUNC_END(443, 23, 428) } CODESCROLL_FUNC_END_RBRACE 
/* # 444 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_DMACmd(USART_TypeDef* USARTx, uint16_t USART_DMAReq, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(444, (444, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1103,1008) 

  
  CS_CMM_PROBE_NODE_STMT(229,6,0) ((void)0);
  ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(229,5,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1104,1009) 


    
    CS_CMM_PROBE_NODE_STMT(229,4,2) USARTx->CR3 |= USART_DMAReq;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1105,1010) 


    
    CS_CMM_PROBE_NODE_STMT(229,3,3) USARTx->CR3 &= (uint16_t)~USART_DMAReq;
  }

CS_CMM_PROBE_NODE_STMT(229,2,4) 
 CODESCROLL_FUNC_END(444, 23, 462) } CODESCROLL_FUNC_END_RBRACE 
/* # 472 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SetAddress(USART_TypeDef* USARTx, uint8_t USART_Address)
{ CODESCROLL_FUNC_BEGIN(445, (445, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1106,1011) 

  
  CS_CMM_PROBE_NODE_STMT(229,1,0) ((void)0);
  ((void)0);


  USARTx->CR2 &= ((uint16_t)0xFFF0);

  USARTx->CR2 |= USART_Address;

CS_CMM_PROBE_NODE_STMT(229,0,1) 
 CODESCROLL_FUNC_END(445, 23, 482) } CODESCROLL_FUNC_END_RBRACE 
/* # 495 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_WakeUpConfig(USART_TypeDef* USARTx, uint16_t USART_WakeUp)
{ CODESCROLL_FUNC_BEGIN(446, (446, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1107,1012) 

  
  CS_CMM_PROBE_NODE_STMT(230,7,0) ((void)0);
  ((void)0);

  USARTx->CR1 &= ((uint16_t)0xF7FF);
  USARTx->CR1 |= USART_WakeUp;

CS_CMM_PROBE_NODE_STMT(230,6,1) 
 CODESCROLL_FUNC_END(446, 23, 503) } CODESCROLL_FUNC_END_RBRACE 
/* # 514 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_ReceiverWakeUpCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(447, (447, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1108,1013) 

  
  CS_CMM_PROBE_NODE_STMT(230,5,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(230,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1109,1014) 

    
    CS_CMM_PROBE_NODE_STMT(230,3,2) USARTx->CR1 |= ((uint16_t)0x0002);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1110,1015) 

    
    CS_CMM_PROBE_NODE_STMT(230,2,3) USARTx->CR1 &= ((uint16_t)0xFFFD);
  }

CS_CMM_PROBE_NODE_STMT(230,1,4) 
 CODESCROLL_FUNC_END(447, 23, 530) } CODESCROLL_FUNC_END_RBRACE 
/* # 543 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_LINBreakDetectLengthConfig(USART_TypeDef* USARTx, uint16_t USART_LINBreakDetectLength)
{ CODESCROLL_FUNC_BEGIN(448, (448, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1111,1016) 

  
  CS_CMM_PROBE_NODE_STMT(230,0,0) ((void)0);
  ((void)0);

  USARTx->CR2 &= ((uint16_t)0xFFDF);
  USARTx->CR2 |= USART_LINBreakDetectLength;

CS_CMM_PROBE_NODE_STMT(231,7,1) 
 CODESCROLL_FUNC_END(448, 23, 551) } CODESCROLL_FUNC_END_RBRACE 
/* # 562 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_LINCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(449, (449, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1112,1017) 

  
  CS_CMM_PROBE_NODE_STMT(231,6,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(231,5,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1113,1018) 

    
    CS_CMM_PROBE_NODE_STMT(231,4,2) USARTx->CR2 |= ((uint16_t)0x4000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1114,1019) 

    
    CS_CMM_PROBE_NODE_STMT(231,3,3) USARTx->CR2 &= ((uint16_t)0xBFFF);
  }

CS_CMM_PROBE_NODE_STMT(231,2,4) 
 CODESCROLL_FUNC_END(449, 23, 578) } CODESCROLL_FUNC_END_RBRACE 
/* # 588 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SendData(USART_TypeDef* USARTx, uint16_t Data)
{ CODESCROLL_FUNC_BEGIN(450, (450, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1115,1020) 

  
  CS_CMM_PROBE_NODE_STMT(231,1,0) ((void)0);
  ((void)0);


  USARTx->DR = (Data & (uint16_t)0x01FF);

CS_CMM_PROBE_NODE_STMT(231,0,1) 
 CODESCROLL_FUNC_END(450, 23, 596) } CODESCROLL_FUNC_END_RBRACE 
/* # 605 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
uint16_t USART_ReceiveData(USART_TypeDef* USARTx)
{ CODESCROLL_FUNC_BEGIN(451, (451, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1116,1021) 

  
  CS_CMM_PROBE_NODE_STMT(232,7,0) ((void)0);


  
  CS_CMM_PROBE_NODE_STMT(232,6,1) 
   CODESCROLL_FUNC_END(451, 23, 611) return (uint16_t)(USARTx->DR & (uint16_t)0x01FF);
} CODESCROLL_FUNC_END_RBRACE 
/* # 621 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SendBreak(USART_TypeDef* USARTx)
{ CODESCROLL_FUNC_BEGIN(452, (452, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1117,1022) 

  
  CS_CMM_PROBE_NODE_STMT(232,5,0) ((void)0);


  USARTx->CR1 |= ((uint16_t)0x0001);

CS_CMM_PROBE_NODE_STMT(232,4,1) 
 CODESCROLL_FUNC_END(452, 23, 628) } CODESCROLL_FUNC_END_RBRACE 
/* # 637 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SetGuardTime(USART_TypeDef* USARTx, uint8_t USART_GuardTime)
{ CODESCROLL_FUNC_BEGIN(453, (453, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1118,1023) 

  
  CS_CMM_PROBE_NODE_STMT(232,3,0) ((void)0);


  USARTx->GTPR &= ((uint16_t)0x00FF);

  USARTx->GTPR |= (uint16_t)((uint16_t)USART_GuardTime << 0x08);

CS_CMM_PROBE_NODE_STMT(232,2,1) 
 CODESCROLL_FUNC_END(453, 23, 646) } CODESCROLL_FUNC_END_RBRACE 
/* # 657 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SetPrescaler(USART_TypeDef* USARTx, uint8_t USART_Prescaler)
{ CODESCROLL_FUNC_BEGIN(454, (454, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1119,1024) 

  
  CS_CMM_PROBE_NODE_STMT(232,1,0) ((void)0);


  USARTx->GTPR &= ((uint16_t)0xFF00);

  USARTx->GTPR |= USART_Prescaler;

CS_CMM_PROBE_NODE_STMT(232,0,1) 
 CODESCROLL_FUNC_END(454, 23, 666) } CODESCROLL_FUNC_END_RBRACE 
/* # 676 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SmartCardCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(455, (455, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1120,1025) 

  
  CS_CMM_PROBE_NODE_STMT(233,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(233,6,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1121,1026) 

    
    CS_CMM_PROBE_NODE_STMT(233,5,2) USARTx->CR3 |= ((uint16_t)0x0020);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1122,1027) 

    
    CS_CMM_PROBE_NODE_STMT(233,4,3) USARTx->CR3 &= ((uint16_t)0xFFDF);
  }

CS_CMM_PROBE_NODE_STMT(233,3,4) 
 CODESCROLL_FUNC_END(455, 23, 691) } CODESCROLL_FUNC_END_RBRACE 
/* # 701 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_SmartCardNACKCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(456, (456, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1123,1028) 

  
  CS_CMM_PROBE_NODE_STMT(233,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(233,1,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1124,1029) 

    
    CS_CMM_PROBE_NODE_STMT(233,0,2) USARTx->CR3 |= ((uint16_t)0x0010);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1125,1030) 

    
    CS_CMM_PROBE_NODE_STMT(234,7,3) USARTx->CR3 &= ((uint16_t)0xFFEF);
  }

CS_CMM_PROBE_NODE_STMT(234,6,4) 
 CODESCROLL_FUNC_END(456, 23, 716) } CODESCROLL_FUNC_END_RBRACE 
/* # 727 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_HalfDuplexCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(457, (457, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1126,1031) 

  
  CS_CMM_PROBE_NODE_STMT(234,5,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(234,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1127,1032) 

    
    CS_CMM_PROBE_NODE_STMT(234,3,2) USARTx->CR3 |= ((uint16_t)0x0008);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1128,1033) 

    
    CS_CMM_PROBE_NODE_STMT(234,2,3) USARTx->CR3 &= ((uint16_t)0xFFF7);
  }

CS_CMM_PROBE_NODE_STMT(234,1,4) 
 CODESCROLL_FUNC_END(457, 23, 743) } CODESCROLL_FUNC_END_RBRACE 
/* # 758 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_OverSampling8Cmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(458, (458, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1129,1034) 

  
  CS_CMM_PROBE_NODE_STMT(234,0,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(235,7,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1130,1035) 

    
    CS_CMM_PROBE_NODE_STMT(235,6,2) USARTx->CR1 |= ((u16)0x8000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1131,1036) 

    
    CS_CMM_PROBE_NODE_STMT(235,5,3) USARTx->CR1 &= ((u16)0x7FFF);
  }

CS_CMM_PROBE_NODE_STMT(235,4,4) 
 CODESCROLL_FUNC_END(458, 23, 774) } CODESCROLL_FUNC_END_RBRACE 
/* # 785 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_OneBitMethodCmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(459, (459, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1132,1037) 

  
  CS_CMM_PROBE_NODE_STMT(235,3,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(235,2,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1133,1038) 

    
    CS_CMM_PROBE_NODE_STMT(235,1,2) USARTx->CR3 |= ((u16)0x0800);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1134,1039) 

    
    CS_CMM_PROBE_NODE_STMT(235,0,3) USARTx->CR3 &= ((u16)0xF7FF);
  }

CS_CMM_PROBE_NODE_STMT(236,7,4) 
 CODESCROLL_FUNC_END(459, 23, 801) } CODESCROLL_FUNC_END_RBRACE 
/* # 814 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_IrDAConfig(USART_TypeDef* USARTx, uint16_t USART_IrDAMode)
{ CODESCROLL_FUNC_BEGIN(460, (460, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1135,1040) 

  
  CS_CMM_PROBE_NODE_STMT(236,6,0) ((void)0);
  ((void)0);

  USARTx->CR3 &= ((uint16_t)0xFFFB);
  USARTx->CR3 |= USART_IrDAMode;

CS_CMM_PROBE_NODE_STMT(236,5,1) 
 CODESCROLL_FUNC_END(460, 23, 822) } CODESCROLL_FUNC_END_RBRACE 
/* # 833 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_IrDACmd(USART_TypeDef* USARTx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(461, (461, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1136,1041) 

  
  CS_CMM_PROBE_NODE_STMT(236,4,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(236,3,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1137,1042) 

    
    CS_CMM_PROBE_NODE_STMT(236,2,2) USARTx->CR3 |= ((uint16_t)0x0002);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1138,1043) 

    
    CS_CMM_PROBE_NODE_STMT(236,1,3) USARTx->CR3 &= ((uint16_t)0xFFFD);
  }

CS_CMM_PROBE_NODE_STMT(236,0,4) 
 CODESCROLL_FUNC_END(461, 23, 849) } CODESCROLL_FUNC_END_RBRACE 
/* # 870 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
FlagStatus USART_GetFlagStatus(USART_TypeDef* USARTx, uint16_t USART_FLAG)
{ CODESCROLL_FUNC_BEGIN(462, (462, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1139,1044) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1140,237,7,0)

  FlagStatus bitstatus = RESET;

  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(237,6,1) if (USART_FLAG == ((uint16_t)0x0200))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1141,1045) 
    
    CS_CMM_PROBE_NODE_STMT(237,5,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(1046) 

  
  CS_CMM_PROBE_NODE_STMT(237,4,3) if ((USARTx->SR & USART_FLAG) != (uint16_t)RESET)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1142,1047) 
    
    CS_CMM_PROBE_NODE_STMT(237,3,4) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1143,1048) 
    
    CS_CMM_PROBE_NODE_STMT(237,2,5) bitstatus = RESET;
  }
  
  CS_CMM_PROBE_NODE_STMT(237,1,6) 
   CODESCROLL_FUNC_END(462, 23, 890) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 919 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_ClearFlag(USART_TypeDef* USARTx, uint16_t USART_FLAG)
{ CODESCROLL_FUNC_BEGIN(463, (463, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1144,1049) 

  
  CS_CMM_PROBE_NODE_STMT(237,0,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(238,7,1) if ((USART_FLAG & ((uint16_t)0x0200)) == ((uint16_t)0x0200))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1145,1050) 
    
    CS_CMM_PROBE_NODE_STMT(238,6,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(1051) 

  
  CS_CMM_PROBE_NODE_STMT(238,5,3) USARTx->SR = (uint16_t)~USART_FLAG;

CS_CMM_PROBE_NODE_STMT(238,4,4) 
 CODESCROLL_FUNC_END(463, 23, 931) } CODESCROLL_FUNC_END_RBRACE 
/* # 952 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
ITStatus USART_GetITStatus(USART_TypeDef* USARTx, uint16_t USART_IT)
{ CODESCROLL_FUNC_BEGIN(464, (464, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1146,1052) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1147,238,3,0)

  uint32_t bitpos = 0x00, itmask = 0x00, usartreg = 0x00;
  ITStatus bitstatus = RESET;

  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(238,2,1) if (USART_IT == ((uint16_t)0x096A))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1148,1053) 
    
    CS_CMM_PROBE_NODE_STMT(238,1,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(1054) 


  
  CS_CMM_PROBE_NODE_STMT(238,0,3) usartreg = (((uint8_t)USART_IT) >> 0x05);

  itmask = USART_IT & ((uint16_t)0x001F);
  itmask = (uint32_t)0x01 << itmask;

  
  CS_CMM_PROBE_NODE_STMT(239,7,4) if (usartreg == 0x01)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1149,1055) 
    
    CS_CMM_PROBE_NODE_STMT(239,6,5) itmask &= USARTx->CR1;
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(239,5,6) if (usartreg == 0x02)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1150,1056) 
    
    CS_CMM_PROBE_NODE_STMT(239,4,7) itmask &= USARTx->CR2;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1151,1057) 
    
    CS_CMM_PROBE_NODE_STMT(239,3,8) itmask &= USARTx->CR3;
  }
  }

  
  CS_CMM_PROBE_NODE_STMT(239,2,9) bitpos = USART_IT >> 0x08;
  bitpos = (uint32_t)0x01 << bitpos;
  bitpos &= USARTx->SR;
  
  CS_CMM_PROBE_NODE_STMT(239,1,10) if (CS_MCDC_464_3((itmask != (uint16_t)RESET), (bitpos != (uint16_t)RESET), 91))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1152,53) 
    
    CS_CMM_PROBE_NODE_STMT(239,0,11) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1153,54) 
    
    CS_CMM_PROBE_NODE_STMT(240,7,12) bitstatus = RESET;
  }

  
  CS_CMM_PROBE_NODE_STMT(240,6,13) 
   CODESCROLL_FUNC_END(464, 23, 996) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 1026 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_usart.c"*/
void USART_ClearITPendingBit(USART_TypeDef* USARTx, uint16_t USART_IT)
{ CODESCROLL_FUNC_BEGIN(465, (465, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1154,1058) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1155,240,5,0)

  uint16_t bitpos = 0x00, itmask = 0x00;

  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(240,4,1) if (USART_IT == ((uint16_t)0x096A))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1156,1059) 
    
    CS_CMM_PROBE_NODE_STMT(240,3,2) ((void)0);
  } CS_CMM_ELSE_PROBE_C1(1060) 

  
  CS_CMM_PROBE_NODE_STMT(240,2,3) bitpos = USART_IT >> 0x08;
  itmask = ((uint16_t)0x01 << (uint16_t)bitpos);
  USARTx->SR = (uint16_t)~itmask;

CS_CMM_PROBE_NODE_STMT(240,1,4) 
 CODESCROLL_FUNC_END(465, 23, 1041) } CODESCROLL_FUNC_END_RBRACE 
