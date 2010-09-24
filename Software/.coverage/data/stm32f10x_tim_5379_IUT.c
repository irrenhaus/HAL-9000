                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#ifndef CSTM_IUT_HEADER_PATH
#include "stm32f10x_tim_5379_IUT.h"
#else
#include CSTM_IUT_HEADER_PATH
#endif

#ifndef CSTM_CVRG_IDX_HEADER_PATH
#include "codescroll_cvrg_idx.h"
#else
#include CSTM_CVRG_IDX_HEADER_PATH
#endif
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\.coverage\\data//"*/
/* # 1 "<built-in>"*/
/* # 1 "<command-line>"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
/* # 22 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h" 1
/* # 31 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h"*/
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
# 47 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\src/stm32f10x_conf.h" 2
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_usart.h" 1
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
# 32 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_tim.h" 2
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
# 23 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c" 2
/* # 76 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
static void TI1_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter);
static void TI2_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter);
static void TI3_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter);
static void TI4_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter);
/* # 121 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_DeInit(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(346, (346, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable875,833) 

  
  CS_CMM_PROBE_NODE_STMT(185,4,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(185,3,1) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable876,834) 
    
    CS_CMM_PROBE_NODE_STMT(185,2,2) RCC_APB2PeriphResetCmd(((uint32_t)0x00000800), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00000800), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(185,1,3) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0000)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable877,835) 
    
    CS_CMM_PROBE_NODE_STMT(185,0,4) RCC_APB1PeriphResetCmd(((uint32_t)0x00000001), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000001), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(186,7,5) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable878,836) 
    
    CS_CMM_PROBE_NODE_STMT(186,6,6) RCC_APB1PeriphResetCmd(((uint32_t)0x00000002), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000002), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(186,5,7) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0800)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable879,837) 
    
    CS_CMM_PROBE_NODE_STMT(186,4,8) RCC_APB1PeriphResetCmd(((uint32_t)0x00000004), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000004), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(186,3,9) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0C00)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable880,838) 
    
    CS_CMM_PROBE_NODE_STMT(186,2,10) RCC_APB1PeriphResetCmd(((uint32_t)0x00000008), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000008), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(186,1,11) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1000)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable881,839) 
    
    CS_CMM_PROBE_NODE_STMT(186,0,12) RCC_APB1PeriphResetCmd(((uint32_t)0x00000010), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000010), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(187,7,13) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable882,840) 
    
    CS_CMM_PROBE_NODE_STMT(187,6,14) RCC_APB1PeriphResetCmd(((uint32_t)0x00000020), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000020), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(187,5,15) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable883,841) 
    
    CS_CMM_PROBE_NODE_STMT(187,4,16) RCC_APB2PeriphResetCmd(((uint32_t)0x00002000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00002000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(187,3,17) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4C00)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable884,842) 
    
    CS_CMM_PROBE_NODE_STMT(187,2,18) RCC_APB2PeriphResetCmd(((uint32_t)0x00080000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00080000), DISABLE);
   }
  else { 
  CS_CMM_PROBE_NODE_STMT(187,1,19) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x5000)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable885,843) 
    
    CS_CMM_PROBE_NODE_STMT(187,0,20) RCC_APB2PeriphResetCmd(((uint32_t)0x00100000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00100000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(188,7,21) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x5400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable886,844) 
    
    CS_CMM_PROBE_NODE_STMT(188,6,22) RCC_APB2PeriphResetCmd(((uint32_t)0x00200000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00200000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(188,5,23) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1800)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable887,845) 
    
    CS_CMM_PROBE_NODE_STMT(188,4,24) RCC_APB1PeriphResetCmd(((uint32_t)0x00000040), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000040), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(188,3,25) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1C00)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable888,846) 
    
    CS_CMM_PROBE_NODE_STMT(188,2,26) RCC_APB1PeriphResetCmd(((uint32_t)0x00000080), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000080), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(188,1,27) if (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x2000)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable889,847) 
    
    CS_CMM_PROBE_NODE_STMT(188,0,28) RCC_APB1PeriphResetCmd(((uint32_t)0x00000100), ENABLE);
    RCC_APB1PeriphResetCmd(((uint32_t)0x00000100), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(189,7,29) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4000)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable890,848) 
    
    CS_CMM_PROBE_NODE_STMT(189,6,30) RCC_APB2PeriphResetCmd(((uint32_t)0x00010000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00010000), DISABLE);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(189,5,31) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable891,849) 
    
    CS_CMM_PROBE_NODE_STMT(189,4,32) RCC_APB2PeriphResetCmd(((uint32_t)0x00020000), ENABLE);
    RCC_APB2PeriphResetCmd(((uint32_t)0x00020000), DISABLE);
  }
  else
  {
    
    CS_CMM_PROBE_NODE_STMT(189,3,33) if (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4800)))
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable892,850) 
      
      CS_CMM_PROBE_NODE_STMT(189,2,34) RCC_APB2PeriphResetCmd(((uint32_t)0x00040000), ENABLE);
      RCC_APB2PeriphResetCmd(((uint32_t)0x00040000), DISABLE);
    } CS_CMM_ELSE_PROBE_C1(851) 
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }
  }

CS_CMM_PROBE_NODE_STMT(189,1,35) 
 CODESCROLL_FUNC_END(346, 22, 214) } CODESCROLL_FUNC_END_RBRACE 
/* # 224 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_TimeBaseInit(TIM_TypeDef* TIMx, TIM_TimeBaseInitTypeDef* TIM_TimeBaseInitStruct)
{ CODESCROLL_FUNC_BEGIN(347, (347, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable893,852) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable894,189,0,0)

  uint16_t tmpcr1 = 0;


  ((void)0);
  ((void)0);
  ((void)0);

  tmpcr1 = TIMx->CR1;

  
  CS_CMM_PROBE_NODE_STMT(190,7,1) if(CS_MCDC_347_0((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0000))), (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0400))), (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0800))), (TIMx == ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x0C00))), 54))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable895,35) 

    
    CS_CMM_PROBE_NODE_STMT(190,6,2) tmpcr1 &= (uint16_t)(~((uint16_t)(((uint16_t)0x0010) | ((uint16_t)0x0060))));
    tmpcr1 |= (uint32_t)TIM_TimeBaseInitStruct->TIM_CounterMode;
  } CS_CMM_ELSE_PROBE_CX(36) 

  
  CS_CMM_PROBE_NODE_STMT(190,5,3) if(CS_MCDC_347_1((TIMx != ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1000))), (TIMx != ((TIM_TypeDef *) (((uint32_t)0x40000000) + 0x1400))), 61))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable896,37) 

    
    CS_CMM_PROBE_NODE_STMT(190,4,4) tmpcr1 &= (uint16_t)(~((uint16_t)((uint16_t)0x0300)));
    tmpcr1 |= (uint32_t)TIM_TimeBaseInitStruct->TIM_ClockDivision;
  } CS_CMM_ELSE_PROBE_CX(38) 

  
  CS_CMM_PROBE_NODE_STMT(190,3,5) TIMx->CR1 = tmpcr1;


  TIMx->ARR = TIM_TimeBaseInitStruct->TIM_Period ;


  TIMx->PSC = TIM_TimeBaseInitStruct->TIM_Prescaler;

  
  CS_CMM_PROBE_NODE_STMT(190,2,6) if (CS_MCDC_347_2((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4000))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4400))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4800))), 64))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable897,39) 

    
    CS_CMM_PROBE_NODE_STMT(190,1,7) TIMx->RCR = TIM_TimeBaseInitStruct->TIM_RepetitionCounter;
  } CS_CMM_ELSE_PROBE_CX(40) 



  
  CS_CMM_PROBE_NODE_STMT(190,0,8) TIMx->EGR = ((uint16_t)0x0001);

CS_CMM_PROBE_NODE_STMT(191,7,9) 
 CODESCROLL_FUNC_END(347, 22, 267) } CODESCROLL_FUNC_END_RBRACE 
/* # 277 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC1Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct)
{ CODESCROLL_FUNC_BEGIN(348, (348, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable898,853) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable899,191,6,0)

  uint16_t tmpccmrx = 0, tmpccer = 0, tmpcr2 = 0;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIMx->CCER &= (uint16_t)(~(uint16_t)((uint16_t)0x0001));

  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR1;


  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0070)));
  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0003)));


  tmpccmrx |= TIM_OCInitStruct->TIM_OCMode;


  tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0002)));

  tmpccer |= TIM_OCInitStruct->TIM_OCPolarity;


  tmpccer |= TIM_OCInitStruct->TIM_OutputState;

  
  CS_CMM_PROBE_NODE_STMT(191,5,1) if(CS_MCDC_348_0((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4000))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4400))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x4800))), 70))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable900,41) 
    
    CS_CMM_PROBE_NODE_STMT(191,4,2) ((void)0);
    ((void)0);
    ((void)0);
    ((void)0);


    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0008)));

    tmpccer |= TIM_OCInitStruct->TIM_OCNPolarity;


    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0004)));

    tmpccer |= TIM_OCInitStruct->TIM_OutputNState;


    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x0100)));
    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x0200)));


    tmpcr2 |= TIM_OCInitStruct->TIM_OCIdleState;

    tmpcr2 |= TIM_OCInitStruct->TIM_OCNIdleState;
  } CS_CMM_ELSE_PROBE_CX(42) 

  
  CS_CMM_PROBE_NODE_STMT(191,3,3) TIMx->CR2 = tmpcr2;


  TIMx->CCMR1 = tmpccmrx;


  TIMx->CCR1 = TIM_OCInitStruct->TIM_Pulse;


  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(191,2,4) 
 CODESCROLL_FUNC_END(348, 22, 349) } CODESCROLL_FUNC_END_RBRACE 
/* # 360 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC2Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct)
{ CODESCROLL_FUNC_BEGIN(349, (349, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable901,854) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable902,191,1,0)

  uint16_t tmpccmrx = 0, tmpccer = 0, tmpcr2 = 0;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIMx->CCER &= (uint16_t)(~((uint16_t)((uint16_t)0x0010)));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR1;


  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x7000)));
  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0300)));


  tmpccmrx |= (uint16_t)(TIM_OCInitStruct->TIM_OCMode << 8);


  tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0020)));

  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OCPolarity << 4);


  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OutputState << 4);

  
  CS_CMM_PROBE_NODE_STMT(191,0,1) if(CS_MCDC_349_0((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), 76))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable903,43) 
    
    CS_CMM_PROBE_NODE_STMT(192,7,2) ((void)0);
    ((void)0);
    ((void)0);
    ((void)0);


    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0080)));

    tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OCNPolarity << 4);


    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0040)));

    tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OutputNState << 4);


    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x0400)));
    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x0800)));


    tmpcr2 |= (uint16_t)(TIM_OCInitStruct->TIM_OCIdleState << 2);

    tmpcr2 |= (uint16_t)(TIM_OCInitStruct->TIM_OCNIdleState << 2);
  } CS_CMM_ELSE_PROBE_CX(44) 

  
  CS_CMM_PROBE_NODE_STMT(192,6,3) TIMx->CR2 = tmpcr2;


  TIMx->CCMR1 = tmpccmrx;


  TIMx->CCR2 = TIM_OCInitStruct->TIM_Pulse;


  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(192,5,4) 
 CODESCROLL_FUNC_END(349, 22, 432) } CODESCROLL_FUNC_END_RBRACE 
/* # 442 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC3Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct)
{ CODESCROLL_FUNC_BEGIN(350, (350, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable904,855) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable905,192,4,0)

  uint16_t tmpccmrx = 0, tmpccer = 0, tmpcr2 = 0;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIMx->CCER &= (uint16_t)(~((uint16_t)((uint16_t)0x0100)));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR2;


  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0070)));
  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0003)));

  tmpccmrx |= TIM_OCInitStruct->TIM_OCMode;


  tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0200)));

  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OCPolarity << 8);


  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OutputState << 8);

  
  CS_CMM_PROBE_NODE_STMT(192,3,1) if(CS_MCDC_350_0((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), 79))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable906,45) 
    
    CS_CMM_PROBE_NODE_STMT(192,2,2) ((void)0);
    ((void)0);
    ((void)0);
    ((void)0);


    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0800)));

    tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OCNPolarity << 8);

    tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x0400)));


    tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OutputNState << 8);

    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x1000)));
    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x2000)));

    tmpcr2 |= (uint16_t)(TIM_OCInitStruct->TIM_OCIdleState << 4);

    tmpcr2 |= (uint16_t)(TIM_OCInitStruct->TIM_OCNIdleState << 4);
  } CS_CMM_ELSE_PROBE_CX(46) 

  
  CS_CMM_PROBE_NODE_STMT(192,1,3) TIMx->CR2 = tmpcr2;


  TIMx->CCMR2 = tmpccmrx;


  TIMx->CCR3 = TIM_OCInitStruct->TIM_Pulse;


  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(192,0,4) 
 CODESCROLL_FUNC_END(350, 22, 511) } CODESCROLL_FUNC_END_RBRACE 
/* # 521 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC4Init(TIM_TypeDef* TIMx, TIM_OCInitTypeDef* TIM_OCInitStruct)
{ CODESCROLL_FUNC_BEGIN(351, (351, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable907,856) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable908,193,7,0)

  uint16_t tmpccmrx = 0, tmpccer = 0, tmpcr2 = 0;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIMx->CCER &= (uint16_t)(~((uint16_t)((uint16_t)0x1000)));


  tmpccer = TIMx->CCER;

  tmpcr2 = TIMx->CR2;


  tmpccmrx = TIMx->CCMR2;


  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x7000)));
  tmpccmrx &= (uint16_t)(~((uint16_t)((uint16_t)0x0300)));


  tmpccmrx |= (uint16_t)(TIM_OCInitStruct->TIM_OCMode << 8);


  tmpccer &= (uint16_t)(~((uint16_t)((uint16_t)0x2000)));

  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OCPolarity << 12);


  tmpccer |= (uint16_t)(TIM_OCInitStruct->TIM_OutputState << 12);

  
  CS_CMM_PROBE_NODE_STMT(193,6,1) if(CS_MCDC_351_0((TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x2C00))), (TIMx == ((TIM_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x3400))), 82))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable909,47) 
    
    CS_CMM_PROBE_NODE_STMT(193,5,2) ((void)0);

    tmpcr2 &= (uint16_t)(~((uint16_t)((uint16_t)0x4000)));

    tmpcr2 |= (uint16_t)(TIM_OCInitStruct->TIM_OCIdleState << 6);
  } CS_CMM_ELSE_PROBE_CX(48) 

  
  CS_CMM_PROBE_NODE_STMT(193,4,3) TIMx->CR2 = tmpcr2;


  TIMx->CCMR2 = tmpccmrx;


  TIMx->CCR4 = TIM_OCInitStruct->TIM_Pulse;


  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(193,3,4) 
 CODESCROLL_FUNC_END(351, 22, 575) } CODESCROLL_FUNC_END_RBRACE 
/* # 585 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ICInit(TIM_TypeDef* TIMx, TIM_ICInitTypeDef* TIM_ICInitStruct)
{ CODESCROLL_FUNC_BEGIN(352, (352, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable910,857) 

  
  CS_CMM_PROBE_NODE_STMT(193,2,0) ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(193,1,1) if (TIM_ICInitStruct->TIM_Channel == ((uint16_t)0x0000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable911,858) 
    
    CS_CMM_PROBE_NODE_STMT(193,0,2) ((void)0);

    TI1_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity,
               TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC1Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(194,7,3) if (TIM_ICInitStruct->TIM_Channel == ((uint16_t)0x0004))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable912,859) 
    
    CS_CMM_PROBE_NODE_STMT(194,6,4) ((void)0);

    TI2_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity,
               TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC2Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }
  else { 
  CS_CMM_PROBE_NODE_STMT(194,5,5) if (TIM_ICInitStruct->TIM_Channel == ((uint16_t)0x0008))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable913,860) 
    
    CS_CMM_PROBE_NODE_STMT(194,4,6) ((void)0);

    TI3_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity,
               TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC3Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable914,861) 
    
    CS_CMM_PROBE_NODE_STMT(194,3,7) ((void)0);

    TI4_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity,
               TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC4Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }
  }
  }

CS_CMM_PROBE_NODE_STMT(194,2,8) 
 CODESCROLL_FUNC_END(352, 22, 634) } CODESCROLL_FUNC_END_RBRACE 
/* # 644 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_PWMIConfig(TIM_TypeDef* TIMx, TIM_ICInitTypeDef* TIM_ICInitStruct)
{ CODESCROLL_FUNC_BEGIN(353, (353, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable915,862) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable916,194,1,0)

  uint16_t icoppositepolarity = ((uint16_t)0x0000);
  uint16_t icoppositeselection = ((uint16_t)0x0001);

  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(194,0,1) if (TIM_ICInitStruct->TIM_ICPolarity == ((uint16_t)0x0000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable917,863) 
    
    CS_CMM_PROBE_NODE_STMT(195,7,2) icoppositepolarity = ((uint16_t)0x0002);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable918,864) 
    
    CS_CMM_PROBE_NODE_STMT(195,6,3) icoppositepolarity = ((uint16_t)0x0000);
  }

  
  CS_CMM_PROBE_NODE_STMT(195,5,4) if (TIM_ICInitStruct->TIM_ICSelection == ((uint16_t)0x0001))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable919,865) 
    
    CS_CMM_PROBE_NODE_STMT(195,4,5) icoppositeselection = ((uint16_t)0x0002);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable920,866) 
    
    CS_CMM_PROBE_NODE_STMT(195,3,6) icoppositeselection = ((uint16_t)0x0001);
  }
  
  CS_CMM_PROBE_NODE_STMT(195,2,7) if (TIM_ICInitStruct->TIM_Channel == ((uint16_t)0x0000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable921,867) 

    
    CS_CMM_PROBE_NODE_STMT(195,1,8) TI1_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity, TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC1Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);

    TI2_Config(TIMx, icoppositepolarity, icoppositeselection, TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC2Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable922,868) 

    
    CS_CMM_PROBE_NODE_STMT(195,0,9) TI2_Config(TIMx, TIM_ICInitStruct->TIM_ICPolarity, TIM_ICInitStruct->TIM_ICSelection,
               TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC2Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);

    TI1_Config(TIMx, icoppositepolarity, icoppositeselection, TIM_ICInitStruct->TIM_ICFilter);

    TIM_SetIC1Prescaler(TIMx, TIM_ICInitStruct->TIM_ICPrescaler);
  }

CS_CMM_PROBE_NODE_STMT(196,7,10) 
 CODESCROLL_FUNC_END(353, 22, 692) } CODESCROLL_FUNC_END_RBRACE 
/* # 702 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_BDTRConfig(TIM_TypeDef* TIMx, TIM_BDTRInitTypeDef *TIM_BDTRInitStruct)
{ CODESCROLL_FUNC_BEGIN(354, (354, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable923,869) 

  
  CS_CMM_PROBE_NODE_STMT(196,6,0) ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);


  TIMx->BDTR = (uint32_t)TIM_BDTRInitStruct->TIM_OSSRState | TIM_BDTRInitStruct->TIM_OSSIState |
             TIM_BDTRInitStruct->TIM_LOCKLevel | TIM_BDTRInitStruct->TIM_DeadTime |
             TIM_BDTRInitStruct->TIM_Break | TIM_BDTRInitStruct->TIM_BreakPolarity |
             TIM_BDTRInitStruct->TIM_AutomaticOutput;

CS_CMM_PROBE_NODE_STMT(196,5,1) 
 CODESCROLL_FUNC_END(354, 22, 718) } CODESCROLL_FUNC_END_RBRACE 







void TIM_TimeBaseStructInit(TIM_TimeBaseInitTypeDef* TIM_TimeBaseInitStruct)
{ CODESCROLL_FUNC_BEGIN(355, (355, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable924,870) 

  
  CS_CMM_PROBE_NODE_STMT(196,4,0) TIM_TimeBaseInitStruct->TIM_Period = 0xFFFF;
  TIM_TimeBaseInitStruct->TIM_Prescaler = 0x0000;
  TIM_TimeBaseInitStruct->TIM_ClockDivision = ((uint16_t)0x0000);
  TIM_TimeBaseInitStruct->TIM_CounterMode = ((uint16_t)0x0000);
  TIM_TimeBaseInitStruct->TIM_RepetitionCounter = 0x0000;

CS_CMM_PROBE_NODE_STMT(196,3,1) 
 CODESCROLL_FUNC_END(355, 22, 734) } CODESCROLL_FUNC_END_RBRACE 







void TIM_OCStructInit(TIM_OCInitTypeDef* TIM_OCInitStruct)
{ CODESCROLL_FUNC_BEGIN(356, (356, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable925,871) 

  
  CS_CMM_PROBE_NODE_STMT(196,2,0) TIM_OCInitStruct->TIM_OCMode = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_OutputState = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_OutputNState = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_Pulse = 0x0000;
  TIM_OCInitStruct->TIM_OCPolarity = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_OCNPolarity = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_OCIdleState = ((uint16_t)0x0000);
  TIM_OCInitStruct->TIM_OCNIdleState = ((uint16_t)0x0000);

CS_CMM_PROBE_NODE_STMT(196,1,1) 
 CODESCROLL_FUNC_END(356, 22, 753) } CODESCROLL_FUNC_END_RBRACE 







void TIM_ICStructInit(TIM_ICInitTypeDef* TIM_ICInitStruct)
{ CODESCROLL_FUNC_BEGIN(357, (357, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable926,872) 

  
  CS_CMM_PROBE_NODE_STMT(196,0,0) TIM_ICInitStruct->TIM_Channel = ((uint16_t)0x0000);
  TIM_ICInitStruct->TIM_ICPolarity = ((uint16_t)0x0000);
  TIM_ICInitStruct->TIM_ICSelection = ((uint16_t)0x0001);
  TIM_ICInitStruct->TIM_ICPrescaler = ((uint16_t)0x0000);
  TIM_ICInitStruct->TIM_ICFilter = 0x00;

CS_CMM_PROBE_NODE_STMT(197,7,1) 
 CODESCROLL_FUNC_END(357, 22, 769) } CODESCROLL_FUNC_END_RBRACE 







void TIM_BDTRStructInit(TIM_BDTRInitTypeDef* TIM_BDTRInitStruct)
{ CODESCROLL_FUNC_BEGIN(358, (358, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable927,873) 

  
  CS_CMM_PROBE_NODE_STMT(197,6,0) TIM_BDTRInitStruct->TIM_OSSRState = ((uint16_t)0x0000);
  TIM_BDTRInitStruct->TIM_OSSIState = ((uint16_t)0x0000);
  TIM_BDTRInitStruct->TIM_LOCKLevel = ((uint16_t)0x0000);
  TIM_BDTRInitStruct->TIM_DeadTime = 0x00;
  TIM_BDTRInitStruct->TIM_Break = ((uint16_t)0x0000);
  TIM_BDTRInitStruct->TIM_BreakPolarity = ((uint16_t)0x0000);
  TIM_BDTRInitStruct->TIM_AutomaticOutput = ((uint16_t)0x0000);

CS_CMM_PROBE_NODE_STMT(197,5,1) 
 CODESCROLL_FUNC_END(358, 22, 787) } CODESCROLL_FUNC_END_RBRACE 
/* # 796 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_Cmd(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(359, (359, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable928,874) 

  
  CS_CMM_PROBE_NODE_STMT(197,4,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(197,3,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable929,875) 

    
    CS_CMM_PROBE_NODE_STMT(197,2,2) TIMx->CR1 |= ((uint16_t)0x0001);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable930,876) 

    
    CS_CMM_PROBE_NODE_STMT(197,1,3) TIMx->CR1 &= (uint16_t)(~((uint16_t)((uint16_t)0x0001)));
  }

CS_CMM_PROBE_NODE_STMT(197,0,4) 
 CODESCROLL_FUNC_END(359, 22, 812) } CODESCROLL_FUNC_END_RBRACE 
/* # 821 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_CtrlPWMOutputs(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(360, (360, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable931,877) 

  
  CS_CMM_PROBE_NODE_STMT(198,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(198,6,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable932,878) 

    
    CS_CMM_PROBE_NODE_STMT(198,5,2) TIMx->BDTR |= ((uint16_t)0x8000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable933,879) 

    
    CS_CMM_PROBE_NODE_STMT(198,4,3) TIMx->BDTR &= (uint16_t)(~((uint16_t)((uint16_t)0x8000)));
  }

CS_CMM_PROBE_NODE_STMT(198,3,4) 
 CODESCROLL_FUNC_END(360, 22, 836) } CODESCROLL_FUNC_END_RBRACE 
/* # 862 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ITConfig(TIM_TypeDef* TIMx, uint16_t TIM_IT, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(361, (361, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable934,880) 

  
  CS_CMM_PROBE_NODE_STMT(198,2,0) ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(198,1,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable935,881) 

    
    CS_CMM_PROBE_NODE_STMT(198,0,2) TIMx->DIER |= TIM_IT;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable936,882) 

    
    CS_CMM_PROBE_NODE_STMT(199,7,3) TIMx->DIER &= (uint16_t)~TIM_IT;
  }

CS_CMM_PROBE_NODE_STMT(199,6,4) 
 CODESCROLL_FUNC_END(361, 22, 879) } CODESCROLL_FUNC_END_RBRACE 
/* # 899 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_GenerateEvent(TIM_TypeDef* TIMx, uint16_t TIM_EventSource)
{ CODESCROLL_FUNC_BEGIN(362, (362, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable937,883) 

  
  CS_CMM_PROBE_NODE_STMT(199,5,0) ((void)0);
  ((void)0);


  TIMx->EGR = TIM_EventSource;

CS_CMM_PROBE_NODE_STMT(199,4,1) 
 CODESCROLL_FUNC_END(362, 22, 907) } CODESCROLL_FUNC_END_RBRACE 
/* # 927 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_DMAConfig(TIM_TypeDef* TIMx, uint16_t TIM_DMABase, uint16_t TIM_DMABurstLength)
{ CODESCROLL_FUNC_BEGIN(363, (363, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable938,884) 

  
  CS_CMM_PROBE_NODE_STMT(199,3,0) ((void)0);
  ((void)0);
  ((void)0);

  TIMx->DCR = TIM_DMABase | TIM_DMABurstLength;

CS_CMM_PROBE_NODE_STMT(199,2,1) 
 CODESCROLL_FUNC_END(363, 22, 935) } CODESCROLL_FUNC_END_RBRACE 
/* # 954 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_DMACmd(TIM_TypeDef* TIMx, uint16_t TIM_DMASource, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(364, (364, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable939,885) 

  
  CS_CMM_PROBE_NODE_STMT(199,1,0) ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(199,0,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable940,886) 

    
    CS_CMM_PROBE_NODE_STMT(200,7,2) TIMx->DIER |= TIM_DMASource;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable941,887) 

    
    CS_CMM_PROBE_NODE_STMT(200,6,3) TIMx->DIER &= (uint16_t)~TIM_DMASource;
  }

CS_CMM_PROBE_NODE_STMT(200,5,4) 
 CODESCROLL_FUNC_END(364, 22, 971) } CODESCROLL_FUNC_END_RBRACE 







void TIM_InternalClockConfig(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(365, (365, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable942,888) 

  
  CS_CMM_PROBE_NODE_STMT(200,4,0) ((void)0);

  TIMx->SMCR &= (uint16_t)(~((uint16_t)((uint16_t)0x0007)));

CS_CMM_PROBE_NODE_STMT(200,3,1) 
 CODESCROLL_FUNC_END(365, 22, 985) } CODESCROLL_FUNC_END_RBRACE 
/* # 998 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ITRxExternalClockConfig(TIM_TypeDef* TIMx, uint16_t TIM_InputTriggerSource)
{ CODESCROLL_FUNC_BEGIN(366, (366, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable943,889) 

  
  CS_CMM_PROBE_NODE_STMT(200,2,0) ((void)0);
  ((void)0);

  TIM_SelectInputTrigger(TIMx, TIM_InputTriggerSource);

  TIMx->SMCR |= ((uint16_t)0x0007);

CS_CMM_PROBE_NODE_STMT(200,1,1) 
 CODESCROLL_FUNC_END(366, 22, 1007) } CODESCROLL_FUNC_END_RBRACE 
/* # 1025 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_TIxExternalClockConfig(TIM_TypeDef* TIMx, uint16_t TIM_TIxExternalCLKSource,
                                uint16_t TIM_ICPolarity, uint16_t ICFilter)
{ CODESCROLL_FUNC_BEGIN(367, (367, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable944,890) 

  
  CS_CMM_PROBE_NODE_STMT(200,0,0) ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(201,7,1) if (TIM_TIxExternalCLKSource == ((uint16_t)0x0060))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable945,891) 
    
    CS_CMM_PROBE_NODE_STMT(201,6,2) TI2_Config(TIMx, TIM_ICPolarity, ((uint16_t)0x0001), ICFilter);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable946,892) 
    
    CS_CMM_PROBE_NODE_STMT(201,5,3) TI1_Config(TIMx, TIM_ICPolarity, ((uint16_t)0x0001), ICFilter);
  }

  
  CS_CMM_PROBE_NODE_STMT(201,4,4) TIM_SelectInputTrigger(TIMx, TIM_TIxExternalCLKSource);

  TIMx->SMCR |= ((uint16_t)0x0007);

CS_CMM_PROBE_NODE_STMT(201,3,5) 
 CODESCROLL_FUNC_END(367, 22, 1046) } CODESCROLL_FUNC_END_RBRACE 
/* # 1065 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ETRClockMode1Config(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler, uint16_t TIM_ExtTRGPolarity,
                             uint16_t ExtTRGFilter)
{ CODESCROLL_FUNC_BEGIN(368, (368, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable947,893) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable948,201,2,0)

  uint16_t tmpsmcr = 0;

  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIM_ETRConfig(TIMx, TIM_ExtTRGPrescaler, TIM_ExtTRGPolarity, ExtTRGFilter);


  tmpsmcr = TIMx->SMCR;

  tmpsmcr &= (uint16_t)(~((uint16_t)((uint16_t)0x0007)));

  tmpsmcr |= ((uint16_t)0x0007);

  tmpsmcr &= (uint16_t)(~((uint16_t)((uint16_t)0x0070)));
  tmpsmcr |= ((uint16_t)0x0070);

  TIMx->SMCR = tmpsmcr;

CS_CMM_PROBE_NODE_STMT(201,1,1) 
 CODESCROLL_FUNC_END(368, 22, 1088) } CODESCROLL_FUNC_END_RBRACE 
/* # 1107 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ETRClockMode2Config(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler,
                             uint16_t TIM_ExtTRGPolarity, uint16_t ExtTRGFilter)
{ CODESCROLL_FUNC_BEGIN(369, (369, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable949,894) 

  
  CS_CMM_PROBE_NODE_STMT(201,0,0) ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);

  TIM_ETRConfig(TIMx, TIM_ExtTRGPrescaler, TIM_ExtTRGPolarity, ExtTRGFilter);

  TIMx->SMCR |= ((uint16_t)0x4000);

CS_CMM_PROBE_NODE_STMT(202,7,1) 
 CODESCROLL_FUNC_END(369, 22, 1119) } CODESCROLL_FUNC_END_RBRACE 
/* # 1138 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ETRConfig(TIM_TypeDef* TIMx, uint16_t TIM_ExtTRGPrescaler, uint16_t TIM_ExtTRGPolarity,
                   uint16_t ExtTRGFilter)
{ CODESCROLL_FUNC_BEGIN(370, (370, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable950,895) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable951,202,6,0)

  uint16_t tmpsmcr = 0;

  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  tmpsmcr = TIMx->SMCR;

  tmpsmcr &= ((uint16_t)0x00FF);

  tmpsmcr |= (uint16_t)(TIM_ExtTRGPrescaler | (uint16_t)(TIM_ExtTRGPolarity | (uint16_t)(ExtTRGFilter << (uint16_t)8)));

  TIMx->SMCR = tmpsmcr;

CS_CMM_PROBE_NODE_STMT(202,5,1) 
 CODESCROLL_FUNC_END(370, 22, 1154) } CODESCROLL_FUNC_END_RBRACE 
/* # 1166 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_PrescalerConfig(TIM_TypeDef* TIMx, uint16_t Prescaler, uint16_t TIM_PSCReloadMode)
{ CODESCROLL_FUNC_BEGIN(371, (371, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable952,896) 

  
  CS_CMM_PROBE_NODE_STMT(202,4,0) ((void)0);
  ((void)0);

  TIMx->PSC = Prescaler;

  TIMx->EGR = TIM_PSCReloadMode;

CS_CMM_PROBE_NODE_STMT(202,3,1) 
 CODESCROLL_FUNC_END(371, 22, 1175) } CODESCROLL_FUNC_END_RBRACE 
/* # 1189 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_CounterModeConfig(TIM_TypeDef* TIMx, uint16_t TIM_CounterMode)
{ CODESCROLL_FUNC_BEGIN(372, (372, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable953,897) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable954,202,2,0)

  uint16_t tmpcr1 = 0;

  ((void)0);
  ((void)0);
  tmpcr1 = TIMx->CR1;

  tmpcr1 &= (uint16_t)(~((uint16_t)(((uint16_t)0x0010) | ((uint16_t)0x0060))));

  tmpcr1 |= TIM_CounterMode;

  TIMx->CR1 = tmpcr1;

CS_CMM_PROBE_NODE_STMT(202,1,1) 
 CODESCROLL_FUNC_END(372, 22, 1202) } CODESCROLL_FUNC_END_RBRACE 
/* # 1219 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectInputTrigger(TIM_TypeDef* TIMx, uint16_t TIM_InputTriggerSource)
{ CODESCROLL_FUNC_BEGIN(373, (373, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable955,898) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable956,202,0,0)

  uint16_t tmpsmcr = 0;

  ((void)0);
  ((void)0);

  tmpsmcr = TIMx->SMCR;

  tmpsmcr &= (uint16_t)(~((uint16_t)((uint16_t)0x0070)));

  tmpsmcr |= TIM_InputTriggerSource;

  TIMx->SMCR = tmpsmcr;

CS_CMM_PROBE_NODE_STMT(203,7,1) 
 CODESCROLL_FUNC_END(373, 22, 1233) } CODESCROLL_FUNC_END_RBRACE 
/* # 1254 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_EncoderInterfaceConfig(TIM_TypeDef* TIMx, uint16_t TIM_EncoderMode,
                                uint16_t TIM_IC1Polarity, uint16_t TIM_IC2Polarity)
{ CODESCROLL_FUNC_BEGIN(374, (374, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable957,899) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable958,203,6,0)

  uint16_t tmpsmcr = 0;
  uint16_t tmpccmr1 = 0;
  uint16_t tmpccer = 0;


  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);


  tmpsmcr = TIMx->SMCR;


  tmpccmr1 = TIMx->CCMR1;


  tmpccer = TIMx->CCER;


  tmpsmcr &= (uint16_t)(~((uint16_t)((uint16_t)0x0007)));
  tmpsmcr |= TIM_EncoderMode;


  tmpccmr1 &= (uint16_t)(((uint16_t)~((uint16_t)((uint16_t)0x0003))) & (uint16_t)(~((uint16_t)((uint16_t)0x0300))));
  tmpccmr1 |= ((uint16_t)0x0001) | ((uint16_t)0x0100);


  tmpccer &= (uint16_t)(((uint16_t)~((uint16_t)((uint16_t)0x0002))) & ((uint16_t)~((uint16_t)((uint16_t)0x0020))));
  tmpccer |= (uint16_t)(TIM_IC1Polarity | (uint16_t)(TIM_IC2Polarity << (uint16_t)4));


  TIMx->SMCR = tmpsmcr;

  TIMx->CCMR1 = tmpccmr1;

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(203,5,1) 
 CODESCROLL_FUNC_END(374, 22, 1294) } CODESCROLL_FUNC_END_RBRACE 
/* # 1305 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ForcedOC1Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction)
{ CODESCROLL_FUNC_BEGIN(375, (375, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable959,900) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable960,203,4,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);
  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0070));

  tmpccmr1 |= TIM_ForcedAction;

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(203,3,1) 
 CODESCROLL_FUNC_END(375, 22, 1318) } CODESCROLL_FUNC_END_RBRACE 
/* # 1329 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ForcedOC2Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction)
{ CODESCROLL_FUNC_BEGIN(376, (376, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable961,901) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable962,203,2,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);
  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x7000));

  tmpccmr1 |= (uint16_t)(TIM_ForcedAction << 8);

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(203,1,1) 
 CODESCROLL_FUNC_END(376, 22, 1342) } CODESCROLL_FUNC_END_RBRACE 
/* # 1353 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ForcedOC3Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction)
{ CODESCROLL_FUNC_BEGIN(377, (377, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable963,902) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable964,203,0,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0070));

  tmpccmr2 |= TIM_ForcedAction;

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(204,7,1) 
 CODESCROLL_FUNC_END(377, 22, 1366) } CODESCROLL_FUNC_END_RBRACE 
/* # 1377 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ForcedOC4Config(TIM_TypeDef* TIMx, uint16_t TIM_ForcedAction)
{ CODESCROLL_FUNC_BEGIN(378, (378, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable965,903) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable966,204,6,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x7000));

  tmpccmr2 |= (uint16_t)(TIM_ForcedAction << 8);

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(204,5,1) 
 CODESCROLL_FUNC_END(378, 22, 1390) } CODESCROLL_FUNC_END_RBRACE 
/* # 1399 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ARRPreloadConfig(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(379, (379, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable967,904) 

  
  CS_CMM_PROBE_NODE_STMT(204,4,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(204,3,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable968,905) 

    
    CS_CMM_PROBE_NODE_STMT(204,2,2) TIMx->CR1 |= ((uint16_t)0x0080);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable969,906) 

    
    CS_CMM_PROBE_NODE_STMT(204,1,3) TIMx->CR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0080));
  }

CS_CMM_PROBE_NODE_STMT(204,0,4) 
 CODESCROLL_FUNC_END(379, 22, 1414) } CODESCROLL_FUNC_END_RBRACE 
/* # 1423 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectCOM(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(380, (380, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable970,907) 

  
  CS_CMM_PROBE_NODE_STMT(205,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(205,6,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable971,908) 

    
    CS_CMM_PROBE_NODE_STMT(205,5,2) TIMx->CR2 |= ((uint16_t)0x0004);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable972,909) 

    
    CS_CMM_PROBE_NODE_STMT(205,4,3) TIMx->CR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0004));
  }

CS_CMM_PROBE_NODE_STMT(205,3,4) 
 CODESCROLL_FUNC_END(380, 22, 1438) } CODESCROLL_FUNC_END_RBRACE 
/* # 1448 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectCCDMA(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(381, (381, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable973,910) 

  
  CS_CMM_PROBE_NODE_STMT(205,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(205,1,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable974,911) 

    
    CS_CMM_PROBE_NODE_STMT(205,0,2) TIMx->CR2 |= ((uint16_t)0x0008);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable975,912) 

    
    CS_CMM_PROBE_NODE_STMT(206,7,3) TIMx->CR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0008));
  }

CS_CMM_PROBE_NODE_STMT(206,6,4) 
 CODESCROLL_FUNC_END(381, 22, 1463) } CODESCROLL_FUNC_END_RBRACE 
/* # 1473 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_CCPreloadControl(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(382, (382, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable976,913) 

  
  CS_CMM_PROBE_NODE_STMT(206,5,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(206,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable977,914) 

    
    CS_CMM_PROBE_NODE_STMT(206,3,2) TIMx->CR2 |= ((uint16_t)0x0001);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable978,915) 

    
    CS_CMM_PROBE_NODE_STMT(206,2,3) TIMx->CR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0001));
  }

CS_CMM_PROBE_NODE_STMT(206,1,4) 
 CODESCROLL_FUNC_END(382, 22, 1488) } CODESCROLL_FUNC_END_RBRACE 
/* # 1499 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC1PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload)
{ CODESCROLL_FUNC_BEGIN(383, (383, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable979,916) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable980,206,0,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);
  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0008));

  tmpccmr1 |= TIM_OCPreload;

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(207,7,1) 
 CODESCROLL_FUNC_END(383, 22, 1512) } CODESCROLL_FUNC_END_RBRACE 
/* # 1524 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC2PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload)
{ CODESCROLL_FUNC_BEGIN(384, (384, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable981,917) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable982,207,6,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);
  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0800));

  tmpccmr1 |= (uint16_t)(TIM_OCPreload << 8);

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(207,5,1) 
 CODESCROLL_FUNC_END(384, 22, 1537) } CODESCROLL_FUNC_END_RBRACE 
/* # 1548 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC3PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload)
{ CODESCROLL_FUNC_BEGIN(385, (385, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable983,918) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable984,207,4,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0008));

  tmpccmr2 |= TIM_OCPreload;

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(207,3,1) 
 CODESCROLL_FUNC_END(385, 22, 1561) } CODESCROLL_FUNC_END_RBRACE 
/* # 1572 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC4PreloadConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPreload)
{ CODESCROLL_FUNC_BEGIN(386, (386, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable985,919) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable986,207,2,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0800));

  tmpccmr2 |= (uint16_t)(TIM_OCPreload << 8);

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(207,1,1) 
 CODESCROLL_FUNC_END(386, 22, 1585) } CODESCROLL_FUNC_END_RBRACE 
/* # 1596 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC1FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast)
{ CODESCROLL_FUNC_BEGIN(387, (387, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable987,920) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable988,207,0,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);

  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0004));

  tmpccmr1 |= TIM_OCFast;

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(208,7,1) 
 CODESCROLL_FUNC_END(387, 22, 1610) } CODESCROLL_FUNC_END_RBRACE 
/* # 1622 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC2FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast)
{ CODESCROLL_FUNC_BEGIN(388, (388, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable989,921) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable990,208,6,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);

  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0400));

  tmpccmr1 |= (uint16_t)(TIM_OCFast << 8);

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(208,5,1) 
 CODESCROLL_FUNC_END(388, 22, 1636) } CODESCROLL_FUNC_END_RBRACE 
/* # 1647 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC3FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast)
{ CODESCROLL_FUNC_BEGIN(389, (389, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable991,922) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable992,208,4,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);

  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0004));

  tmpccmr2 |= TIM_OCFast;

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(208,3,1) 
 CODESCROLL_FUNC_END(389, 22, 1661) } CODESCROLL_FUNC_END_RBRACE 
/* # 1672 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC4FastConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCFast)
{ CODESCROLL_FUNC_BEGIN(390, (390, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable993,923) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable994,208,2,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);

  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0400));

  tmpccmr2 |= (uint16_t)(TIM_OCFast << 8);

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(208,1,1) 
 CODESCROLL_FUNC_END(390, 22, 1686) } CODESCROLL_FUNC_END_RBRACE 
/* # 1697 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearOC1Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear)
{ CODESCROLL_FUNC_BEGIN(391, (391, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable995,924) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable996,208,0,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);

  tmpccmr1 = TIMx->CCMR1;


  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x0080));

  tmpccmr1 |= TIM_OCClear;

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(209,7,1) 
 CODESCROLL_FUNC_END(391, 22, 1712) } CODESCROLL_FUNC_END_RBRACE 
/* # 1723 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearOC2Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear)
{ CODESCROLL_FUNC_BEGIN(392, (392, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable997,925) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable998,209,6,0)

  uint16_t tmpccmr1 = 0;

  ((void)0);
  ((void)0);
  tmpccmr1 = TIMx->CCMR1;

  tmpccmr1 &= (uint16_t)~((uint16_t)((uint16_t)0x8000));

  tmpccmr1 |= (uint16_t)(TIM_OCClear << 8);

  TIMx->CCMR1 = tmpccmr1;

CS_CMM_PROBE_NODE_STMT(209,5,1) 
 CODESCROLL_FUNC_END(392, 22, 1736) } CODESCROLL_FUNC_END_RBRACE 
/* # 1747 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearOC3Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear)
{ CODESCROLL_FUNC_BEGIN(393, (393, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable999,926) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1000,209,4,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x0080));

  tmpccmr2 |= TIM_OCClear;

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(209,3,1) 
 CODESCROLL_FUNC_END(393, 22, 1760) } CODESCROLL_FUNC_END_RBRACE 
/* # 1771 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearOC4Ref(TIM_TypeDef* TIMx, uint16_t TIM_OCClear)
{ CODESCROLL_FUNC_BEGIN(394, (394, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1001,927) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1002,209,2,0)

  uint16_t tmpccmr2 = 0;

  ((void)0);
  ((void)0);
  tmpccmr2 = TIMx->CCMR2;

  tmpccmr2 &= (uint16_t)~((uint16_t)((uint16_t)0x8000));

  tmpccmr2 |= (uint16_t)(TIM_OCClear << 8);

  TIMx->CCMR2 = tmpccmr2;

CS_CMM_PROBE_NODE_STMT(209,1,1) 
 CODESCROLL_FUNC_END(394, 22, 1784) } CODESCROLL_FUNC_END_RBRACE 
/* # 1795 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC1PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity)
{ CODESCROLL_FUNC_BEGIN(395, (395, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1003,928) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1004,209,0,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);
  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0002));
  tmpccer |= TIM_OCPolarity;

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(210,7,1) 
 CODESCROLL_FUNC_END(395, 22, 1807) } CODESCROLL_FUNC_END_RBRACE 
/* # 1818 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC1NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity)
{ CODESCROLL_FUNC_BEGIN(396, (396, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1005,929) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1006,210,6,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);

  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0008));
  tmpccer |= TIM_OCNPolarity;

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(210,5,1) 
 CODESCROLL_FUNC_END(396, 22, 1831) } CODESCROLL_FUNC_END_RBRACE 
/* # 1842 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC2PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity)
{ CODESCROLL_FUNC_BEGIN(397, (397, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1007,930) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1008,210,4,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);
  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0020));
  tmpccer |= (uint16_t)(TIM_OCPolarity << 4);

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(210,3,1) 
 CODESCROLL_FUNC_END(397, 22, 1854) } CODESCROLL_FUNC_END_RBRACE 
/* # 1865 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC2NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity)
{ CODESCROLL_FUNC_BEGIN(398, (398, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1009,931) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1010,210,2,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);

  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0080));
  tmpccer |= (uint16_t)(TIM_OCNPolarity << 4);

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(210,1,1) 
 CODESCROLL_FUNC_END(398, 22, 1878) } CODESCROLL_FUNC_END_RBRACE 
/* # 1889 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC3PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity)
{ CODESCROLL_FUNC_BEGIN(399, (399, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1011,932) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1012,210,0,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);
  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0200));
  tmpccer |= (uint16_t)(TIM_OCPolarity << 8);

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(211,7,1) 
 CODESCROLL_FUNC_END(399, 22, 1901) } CODESCROLL_FUNC_END_RBRACE 
/* # 1912 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC3NPolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCNPolarity)
{ CODESCROLL_FUNC_BEGIN(400, (400, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1013,933) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1014,211,6,0)

  uint16_t tmpccer = 0;


  ((void)0);
  ((void)0);

  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x0800));
  tmpccer |= (uint16_t)(TIM_OCNPolarity << 8);

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(211,5,1) 
 CODESCROLL_FUNC_END(400, 22, 1926) } CODESCROLL_FUNC_END_RBRACE 
/* # 1937 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_OC4PolarityConfig(TIM_TypeDef* TIMx, uint16_t TIM_OCPolarity)
{ CODESCROLL_FUNC_BEGIN(401, (401, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1015,934) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1016,211,4,0)

  uint16_t tmpccer = 0;

  ((void)0);
  ((void)0);
  tmpccer = TIMx->CCER;

  tmpccer &= (uint16_t)~((uint16_t)((uint16_t)0x2000));
  tmpccer |= (uint16_t)(TIM_OCPolarity << 12);

  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(211,3,1) 
 CODESCROLL_FUNC_END(401, 22, 1949) } CODESCROLL_FUNC_END_RBRACE 
/* # 1964 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_CCxCmd(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_CCx)
{ CODESCROLL_FUNC_BEGIN(402, (402, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1017,935) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1018,211,2,0)

  uint16_t tmp = 0;


  ((void)0);
  ((void)0);
  ((void)0);

  tmp = ((uint16_t)0x0001) << TIM_Channel;


  TIMx->CCER &= (uint16_t)~ tmp;


  TIMx->CCER |= (uint16_t)(TIM_CCx << TIM_Channel);

CS_CMM_PROBE_NODE_STMT(211,1,1) 
 CODESCROLL_FUNC_END(402, 22, 1980) } CODESCROLL_FUNC_END_RBRACE 
/* # 1994 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_CCxNCmd(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_CCxN)
{ CODESCROLL_FUNC_BEGIN(403, (403, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1019,936) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1020,211,0,0)

  uint16_t tmp = 0;


  ((void)0);
  ((void)0);
  ((void)0);

  tmp = ((uint16_t)0x0004) << TIM_Channel;


  TIMx->CCER &= (uint16_t) ~tmp;


  TIMx->CCER |= (uint16_t)(TIM_CCxN << TIM_Channel);

CS_CMM_PROBE_NODE_STMT(212,7,1) 
 CODESCROLL_FUNC_END(403, 22, 2010) } CODESCROLL_FUNC_END_RBRACE 
/* # 2035 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectOCxM(TIM_TypeDef* TIMx, uint16_t TIM_Channel, uint16_t TIM_OCMode)
{ CODESCROLL_FUNC_BEGIN(404, (404, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1021,937) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1022,212,6,0)

  uint32_t tmp = 0;
  uint16_t tmp1 = 0;


  ((void)0);
  ((void)0);
  ((void)0);

  tmp = (uint32_t) TIMx;
  tmp += ((uint16_t)0x0018);

  tmp1 = ((uint16_t)0x0001) << (uint16_t)TIM_Channel;


  TIMx->CCER &= (uint16_t) ~tmp1;

  
  CS_CMM_PROBE_NODE_STMT(212,5,1) if(CS_MCDC_404_0((TIM_Channel == ((uint16_t)0x0000)), (TIM_Channel == ((uint16_t)0x0008)), 85))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1023,49) 
    
    CS_CMM_PROBE_NODE_STMT(212,4,2) tmp += (TIM_Channel>>1);


    *(volatile uint32_t *) tmp &= (uint32_t)~((uint32_t)((uint16_t)0x0070));


    *(volatile uint32_t *) tmp |= TIM_OCMode;
  }
  else
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1024,50) 
    
    CS_CMM_PROBE_NODE_STMT(212,3,3) tmp += (uint16_t)(TIM_Channel - (uint16_t)4)>> (uint16_t)1;


    *(volatile uint32_t *) tmp &= (uint32_t)~((uint32_t)((uint16_t)0x7000));


    *(volatile uint32_t *) tmp |= (uint16_t)(TIM_OCMode << 8);
  }

CS_CMM_PROBE_NODE_STMT(212,2,4) 
 CODESCROLL_FUNC_END(404, 22, 2073) } CODESCROLL_FUNC_END_RBRACE 
/* # 2082 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_UpdateDisableConfig(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(405, (405, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1025,938) 

  
  CS_CMM_PROBE_NODE_STMT(212,1,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(212,0,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1026,939) 

    
    CS_CMM_PROBE_NODE_STMT(213,7,2) TIMx->CR1 |= ((uint16_t)0x0002);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1027,940) 

    
    CS_CMM_PROBE_NODE_STMT(213,6,3) TIMx->CR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0002));
  }

CS_CMM_PROBE_NODE_STMT(213,5,4) 
 CODESCROLL_FUNC_END(405, 22, 2097) } CODESCROLL_FUNC_END_RBRACE 
/* # 2110 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_UpdateRequestConfig(TIM_TypeDef* TIMx, uint16_t TIM_UpdateSource)
{ CODESCROLL_FUNC_BEGIN(406, (406, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1028,941) 

  
  CS_CMM_PROBE_NODE_STMT(213,4,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(213,3,1) if (TIM_UpdateSource != ((uint16_t)0x0000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1029,942) 

    
    CS_CMM_PROBE_NODE_STMT(213,2,2) TIMx->CR1 |= ((uint16_t)0x0004);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1030,943) 

    
    CS_CMM_PROBE_NODE_STMT(213,1,3) TIMx->CR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0004));
  }

CS_CMM_PROBE_NODE_STMT(213,0,4) 
 CODESCROLL_FUNC_END(406, 22, 2125) } CODESCROLL_FUNC_END_RBRACE 
/* # 2134 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectHallSensor(TIM_TypeDef* TIMx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(407, (407, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1031,944) 

  
  CS_CMM_PROBE_NODE_STMT(214,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(214,6,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1032,945) 

    
    CS_CMM_PROBE_NODE_STMT(214,5,2) TIMx->CR2 |= ((uint16_t)0x0080);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1033,946) 

    
    CS_CMM_PROBE_NODE_STMT(214,4,3) TIMx->CR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0080));
  }

CS_CMM_PROBE_NODE_STMT(214,3,4) 
 CODESCROLL_FUNC_END(407, 22, 2149) } CODESCROLL_FUNC_END_RBRACE 
/* # 2160 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectOnePulseMode(TIM_TypeDef* TIMx, uint16_t TIM_OPMode)
{ CODESCROLL_FUNC_BEGIN(408, (408, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1034,947) 

  
  CS_CMM_PROBE_NODE_STMT(214,2,0) ((void)0);
  ((void)0);

  TIMx->CR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0008));

  TIMx->CR1 |= TIM_OPMode;

CS_CMM_PROBE_NODE_STMT(214,1,1) 
 CODESCROLL_FUNC_END(408, 22, 2169) } CODESCROLL_FUNC_END_RBRACE 
/* # 2192 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectOutputTrigger(TIM_TypeDef* TIMx, uint16_t TIM_TRGOSource)
{ CODESCROLL_FUNC_BEGIN(409, (409, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1035,948) 

  
  CS_CMM_PROBE_NODE_STMT(214,0,0) ((void)0);
  ((void)0);

  TIMx->CR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0070));

  TIMx->CR2 |= TIM_TRGOSource;

CS_CMM_PROBE_NODE_STMT(215,7,1) 
 CODESCROLL_FUNC_END(409, 22, 2201) } CODESCROLL_FUNC_END_RBRACE 
/* # 2215 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectSlaveMode(TIM_TypeDef* TIMx, uint16_t TIM_SlaveMode)
{ CODESCROLL_FUNC_BEGIN(410, (410, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1036,949) 

  
  CS_CMM_PROBE_NODE_STMT(215,6,0) ((void)0);
  ((void)0);

  TIMx->SMCR &= (uint16_t)~((uint16_t)((uint16_t)0x0007));

  TIMx->SMCR |= TIM_SlaveMode;

CS_CMM_PROBE_NODE_STMT(215,5,1) 
 CODESCROLL_FUNC_END(410, 22, 2224) } CODESCROLL_FUNC_END_RBRACE 
/* # 2236 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SelectMasterSlaveMode(TIM_TypeDef* TIMx, uint16_t TIM_MasterSlaveMode)
{ CODESCROLL_FUNC_BEGIN(411, (411, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1037,950) 

  
  CS_CMM_PROBE_NODE_STMT(215,4,0) ((void)0);
  ((void)0);

  TIMx->SMCR &= (uint16_t)~((uint16_t)((uint16_t)0x0080));


  TIMx->SMCR |= TIM_MasterSlaveMode;

CS_CMM_PROBE_NODE_STMT(215,3,1) 
 CODESCROLL_FUNC_END(411, 22, 2246) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetCounter(TIM_TypeDef* TIMx, uint16_t Counter)
{ CODESCROLL_FUNC_BEGIN(412, (412, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1038,951) 

  
  CS_CMM_PROBE_NODE_STMT(215,2,0) ((void)0);

  TIMx->CNT = Counter;

CS_CMM_PROBE_NODE_STMT(215,1,1) 
 CODESCROLL_FUNC_END(412, 22, 2260) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetAutoreload(TIM_TypeDef* TIMx, uint16_t Autoreload)
{ CODESCROLL_FUNC_BEGIN(413, (413, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1039,952) 

  
  CS_CMM_PROBE_NODE_STMT(215,0,0) ((void)0);

  TIMx->ARR = Autoreload;

CS_CMM_PROBE_NODE_STMT(216,7,1) 
 CODESCROLL_FUNC_END(413, 22, 2274) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetCompare1(TIM_TypeDef* TIMx, uint16_t Compare1)
{ CODESCROLL_FUNC_BEGIN(414, (414, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1040,953) 

  
  CS_CMM_PROBE_NODE_STMT(216,6,0) ((void)0);

  TIMx->CCR1 = Compare1;

CS_CMM_PROBE_NODE_STMT(216,5,1) 
 CODESCROLL_FUNC_END(414, 22, 2288) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetCompare2(TIM_TypeDef* TIMx, uint16_t Compare2)
{ CODESCROLL_FUNC_BEGIN(415, (415, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1041,954) 

  
  CS_CMM_PROBE_NODE_STMT(216,4,0) ((void)0);

  TIMx->CCR2 = Compare2;

CS_CMM_PROBE_NODE_STMT(216,3,1) 
 CODESCROLL_FUNC_END(415, 22, 2302) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetCompare3(TIM_TypeDef* TIMx, uint16_t Compare3)
{ CODESCROLL_FUNC_BEGIN(416, (416, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1042,955) 

  
  CS_CMM_PROBE_NODE_STMT(216,2,0) ((void)0);

  TIMx->CCR3 = Compare3;

CS_CMM_PROBE_NODE_STMT(216,1,1) 
 CODESCROLL_FUNC_END(416, 22, 2316) } CODESCROLL_FUNC_END_RBRACE 







void TIM_SetCompare4(TIM_TypeDef* TIMx, uint16_t Compare4)
{ CODESCROLL_FUNC_BEGIN(417, (417, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1043,956) 

  
  CS_CMM_PROBE_NODE_STMT(216,0,0) ((void)0);

  TIMx->CCR4 = Compare4;

CS_CMM_PROBE_NODE_STMT(217,7,1) 
 CODESCROLL_FUNC_END(417, 22, 2330) } CODESCROLL_FUNC_END_RBRACE 
/* # 2343 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SetIC1Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC)
{ CODESCROLL_FUNC_BEGIN(418, (418, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1044,957) 

  
  CS_CMM_PROBE_NODE_STMT(217,6,0) ((void)0);
  ((void)0);

  TIMx->CCMR1 &= (uint16_t)~((uint16_t)((uint16_t)0x000C));

  TIMx->CCMR1 |= TIM_ICPSC;

CS_CMM_PROBE_NODE_STMT(217,5,1) 
 CODESCROLL_FUNC_END(418, 22, 2352) } CODESCROLL_FUNC_END_RBRACE 
/* # 2365 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SetIC2Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC)
{ CODESCROLL_FUNC_BEGIN(419, (419, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1045,958) 

  
  CS_CMM_PROBE_NODE_STMT(217,4,0) ((void)0);
  ((void)0);

  TIMx->CCMR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0C00));

  TIMx->CCMR1 |= (uint16_t)(TIM_ICPSC << 8);

CS_CMM_PROBE_NODE_STMT(217,3,1) 
 CODESCROLL_FUNC_END(419, 22, 2374) } CODESCROLL_FUNC_END_RBRACE 
/* # 2387 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SetIC3Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC)
{ CODESCROLL_FUNC_BEGIN(420, (420, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1046,959) 

  
  CS_CMM_PROBE_NODE_STMT(217,2,0) ((void)0);
  ((void)0);

  TIMx->CCMR2 &= (uint16_t)~((uint16_t)((uint16_t)0x000C));

  TIMx->CCMR2 |= TIM_ICPSC;

CS_CMM_PROBE_NODE_STMT(217,1,1) 
 CODESCROLL_FUNC_END(420, 22, 2396) } CODESCROLL_FUNC_END_RBRACE 
/* # 2409 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SetIC4Prescaler(TIM_TypeDef* TIMx, uint16_t TIM_ICPSC)
{ CODESCROLL_FUNC_BEGIN(421, (421, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1047,960) 

  
  CS_CMM_PROBE_NODE_STMT(217,0,0) ((void)0);
  ((void)0);

  TIMx->CCMR2 &= (uint16_t)~((uint16_t)((uint16_t)0x0C00));

  TIMx->CCMR2 |= (uint16_t)(TIM_ICPSC << 8);

CS_CMM_PROBE_NODE_STMT(218,7,1) 
 CODESCROLL_FUNC_END(421, 22, 2418) } CODESCROLL_FUNC_END_RBRACE 
/* # 2431 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_SetClockDivision(TIM_TypeDef* TIMx, uint16_t TIM_CKD)
{ CODESCROLL_FUNC_BEGIN(422, (422, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1048,961) 

  
  CS_CMM_PROBE_NODE_STMT(218,6,0) ((void)0);
  ((void)0);

  TIMx->CR1 &= (uint16_t)~((uint16_t)((uint16_t)0x0300));

  TIMx->CR1 |= TIM_CKD;

CS_CMM_PROBE_NODE_STMT(218,5,1) 
 CODESCROLL_FUNC_END(422, 22, 2440) } CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetCapture1(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(423, (423, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1049,962) 

  
  CS_CMM_PROBE_NODE_STMT(218,4,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(218,3,1) 
   CODESCROLL_FUNC_END(423, 22, 2452) return TIMx->CCR1;
} CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetCapture2(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(424, (424, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1050,963) 

  
  CS_CMM_PROBE_NODE_STMT(218,2,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(218,1,1) 
   CODESCROLL_FUNC_END(424, 22, 2465) return TIMx->CCR2;
} CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetCapture3(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(425, (425, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1051,964) 

  
  CS_CMM_PROBE_NODE_STMT(218,0,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(219,7,1) 
   CODESCROLL_FUNC_END(425, 22, 2478) return TIMx->CCR3;
} CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetCapture4(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(426, (426, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1052,965) 

  
  CS_CMM_PROBE_NODE_STMT(219,6,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(219,5,1) 
   CODESCROLL_FUNC_END(426, 22, 2491) return TIMx->CCR4;
} CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetCounter(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(427, (427, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1053,966) 

  
  CS_CMM_PROBE_NODE_STMT(219,4,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(219,3,1) 
   CODESCROLL_FUNC_END(427, 22, 2504) return TIMx->CNT;
} CODESCROLL_FUNC_END_RBRACE 






uint16_t TIM_GetPrescaler(TIM_TypeDef* TIMx)
{ CODESCROLL_FUNC_BEGIN(428, (428, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1054,967) 

  
  CS_CMM_PROBE_NODE_STMT(219,2,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(219,1,1) 
   CODESCROLL_FUNC_END(428, 22, 2517) return TIMx->PSC;
} CODESCROLL_FUNC_END_RBRACE 
/* # 2546 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
FlagStatus TIM_GetFlagStatus(TIM_TypeDef* TIMx, uint16_t TIM_FLAG)
{ CODESCROLL_FUNC_BEGIN(429, (429, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1055,968) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1056,219,0,0)

  ITStatus bitstatus = RESET;

  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(220,7,1) if ((TIMx->SR & TIM_FLAG) != (uint16_t)RESET)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1057,969) 
    
    CS_CMM_PROBE_NODE_STMT(220,6,2) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable1058,970) 
    
    CS_CMM_PROBE_NODE_STMT(220,5,3) bitstatus = RESET;
  }
  
  CS_CMM_PROBE_NODE_STMT(220,4,4) 
   CODESCROLL_FUNC_END(429, 22, 2561) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 2590 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearFlag(TIM_TypeDef* TIMx, uint16_t TIM_FLAG)
{ CODESCROLL_FUNC_BEGIN(430, (430, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1059,971) 

  
  CS_CMM_PROBE_NODE_STMT(220,3,0) ((void)0);
  ((void)0);


  TIMx->SR = (uint16_t)~TIM_FLAG;

CS_CMM_PROBE_NODE_STMT(220,2,1) 
 CODESCROLL_FUNC_END(430, 22, 2598) } CODESCROLL_FUNC_END_RBRACE 
/* # 2622 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
ITStatus TIM_GetITStatus(TIM_TypeDef* TIMx, uint16_t TIM_IT)
{ CODESCROLL_FUNC_BEGIN(431, (431, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1060,972) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1061,220,1,0)

  ITStatus bitstatus = RESET;
  uint16_t itstatus = 0x0, itenable = 0x0;

  ((void)0);
  ((void)0);

  itstatus = TIMx->SR & TIM_IT;

  itenable = TIMx->DIER & TIM_IT;
  
  CS_CMM_PROBE_NODE_STMT(220,0,1) if (CS_MCDC_431_0((itstatus != (uint16_t)RESET), (itenable != (uint16_t)RESET), 88))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1062,51) 
    
    CS_CMM_PROBE_NODE_STMT(221,7,2) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable1063,52) 
    
    CS_CMM_PROBE_NODE_STMT(221,6,3) bitstatus = RESET;
  }
  
  CS_CMM_PROBE_NODE_STMT(221,5,4) 
   CODESCROLL_FUNC_END(431, 22, 2641) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 2666 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
void TIM_ClearITPendingBit(TIM_TypeDef* TIMx, uint16_t TIM_IT)
{ CODESCROLL_FUNC_BEGIN(432, (432, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1064,973) 

  
  CS_CMM_PROBE_NODE_STMT(221,4,0) ((void)0);
  ((void)0);

  TIMx->SR = (uint16_t)~TIM_IT;

CS_CMM_PROBE_NODE_STMT(221,3,1) 
 CODESCROLL_FUNC_END(432, 22, 2673) } CODESCROLL_FUNC_END_RBRACE 
/* # 2691 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
static void TI1_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter)
{ CODESCROLL_FUNC_BEGIN(433, (433, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1065,974) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1066,221,2,0)

  uint16_t tmpccmr1 = 0, tmpccer = 0;

  TIMx->CCER &= (uint16_t)~((uint16_t)((uint16_t)0x0001));
  tmpccmr1 = TIMx->CCMR1;
  tmpccer = TIMx->CCER;

  tmpccmr1 &= (uint16_t)(((uint16_t)~((uint16_t)((uint16_t)0x0003))) & ((uint16_t)~((uint16_t)((uint16_t)0x00F0))));
  tmpccmr1 |= (uint16_t)(TIM_ICSelection | (uint16_t)(TIM_ICFilter << (uint16_t)4));

  tmpccer &= (uint16_t)~((uint16_t)(((uint16_t)0x0002)));
  tmpccer |= (uint16_t)(TIM_ICPolarity | (uint16_t)((uint16_t)0x0001));

  TIMx->CCMR1 = tmpccmr1;
  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(221,1,1) 
 CODESCROLL_FUNC_END(433, 22, 2708) } CODESCROLL_FUNC_END_RBRACE 
/* # 2726 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
static void TI2_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter)
{ CODESCROLL_FUNC_BEGIN(434, (434, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1067,975) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1068,221,0,0)

  uint16_t tmpccmr1 = 0, tmpccer = 0, tmp = 0;

  TIMx->CCER &= (uint16_t)~((uint16_t)((uint16_t)0x0010));
  tmpccmr1 = TIMx->CCMR1;
  tmpccer = TIMx->CCER;
  tmp = (uint16_t)(TIM_ICPolarity << 4);

  tmpccmr1 &= (uint16_t)(((uint16_t)~((uint16_t)((uint16_t)0x0300))) & ((uint16_t)~((uint16_t)((uint16_t)0xF000))));
  tmpccmr1 |= (uint16_t)(TIM_ICFilter << 12);
  tmpccmr1 |= (uint16_t)(TIM_ICSelection << 8);

   tmpccer &= (uint16_t)~((uint16_t)(((uint16_t)0x0020)));
  tmpccer |= (uint16_t)(tmp | (uint16_t)((uint16_t)0x0010));

  TIMx->CCMR1 = tmpccmr1 ;
  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(222,7,1) 
 CODESCROLL_FUNC_END(434, 22, 2745) } CODESCROLL_FUNC_END_RBRACE 
/* # 2763 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
static void TI3_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter)
{ CODESCROLL_FUNC_BEGIN(435, (435, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1069,976) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1070,222,6,0)

  uint16_t tmpccmr2 = 0, tmpccer = 0, tmp = 0;

  TIMx->CCER &= (uint16_t)~((uint16_t)((uint16_t)0x0100));
  tmpccmr2 = TIMx->CCMR2;
  tmpccer = TIMx->CCER;
  tmp = (uint16_t)(TIM_ICPolarity << 8);

  tmpccmr2 &= (uint16_t)(((uint16_t)~((uint16_t)((uint16_t)0x0003))) & ((uint16_t)~((uint16_t)((uint16_t)0x00F0))));
  tmpccmr2 |= (uint16_t)(TIM_ICSelection | (uint16_t)(TIM_ICFilter << (uint16_t)4));

  tmpccer &= (uint16_t)~((uint16_t)(((uint16_t)0x0200)));
  tmpccer |= (uint16_t)(tmp | (uint16_t)((uint16_t)0x0100));

  TIMx->CCMR2 = tmpccmr2;
  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(222,5,1) 
 CODESCROLL_FUNC_END(435, 22, 2781) } CODESCROLL_FUNC_END_RBRACE 
/* # 2799 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_tim.c"*/
static void TI4_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter)
{ CODESCROLL_FUNC_BEGIN(436, (436, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable1071,977) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable1072,222,4,0)

  uint16_t tmpccmr2 = 0, tmpccer = 0, tmp = 0;


  TIMx->CCER &= (uint16_t)~((uint16_t)((uint16_t)0x1000));
  tmpccmr2 = TIMx->CCMR2;
  tmpccer = TIMx->CCER;
  tmp = (uint16_t)(TIM_ICPolarity << 12);

  tmpccmr2 &= (uint16_t)((uint16_t)(~(uint16_t)((uint16_t)0x0300)) & ((uint16_t)~((uint16_t)((uint16_t)0xF000))));
  tmpccmr2 |= (uint16_t)(TIM_ICSelection << 8);
  tmpccmr2 |= (uint16_t)(TIM_ICFilter << 12);


  tmpccer &= (uint16_t)~((uint16_t)(((uint16_t)0x2000)));
  tmpccer |= (uint16_t)(tmp | (uint16_t)((uint16_t)0x1000));

  TIMx->CCMR2 = tmpccmr2;
  TIMx->CCER = tmpccer;

CS_CMM_PROBE_NODE_STMT(222,3,1) 
 CODESCROLL_FUNC_END(436, 22, 2820) } CODESCROLL_FUNC_END_RBRACE 
