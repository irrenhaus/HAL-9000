                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#ifndef CSTM_IUT_HEADER_PATH
#include "stm32f10x_i2c_3587_IUT.h"
#else
#include CSTM_IUT_HEADER_PATH
#endif

#ifndef CSTM_CVRG_IDX_HEADER_PATH
#include "codescroll_cvrg_idx.h"
#else
#include CSTM_CVRG_IDX_HEADER_PATH
#endif
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\.coverage\\data//"*/
/* # 1 "<built-in>"*/
/* # 1 "<command-line>"*/
/* # 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
/* # 22 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
# 1 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h" 1
/* # 31 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h"*/
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
# 32 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\inc/stm32f10x_i2c.h" 2
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
# 23 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c" 2
/* # 161 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_DeInit(I2C_TypeDef* I2Cx)
{ CODESCROLL_FUNC_BEGIN(191, (191, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable540,536) 

  
  CS_CMM_PROBE_NODE_STMT(117,7,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(117,6,1) if (I2Cx == ((I2C_TypeDef *) (((uint32_t)0x40000000) + 0x5400)))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable541,537) 

    
    CS_CMM_PROBE_NODE_STMT(117,5,2) RCC_APB1PeriphResetCmd(((uint32_t)0x00200000), ENABLE);

    RCC_APB1PeriphResetCmd(((uint32_t)0x00200000), DISABLE);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable542,538) 

    
    CS_CMM_PROBE_NODE_STMT(117,4,3) RCC_APB1PeriphResetCmd(((uint32_t)0x00400000), ENABLE);

    RCC_APB1PeriphResetCmd(((uint32_t)0x00400000), DISABLE);
  }

CS_CMM_PROBE_NODE_STMT(117,3,4) 
 CODESCROLL_FUNC_END(191, 14, 180) } CODESCROLL_FUNC_END_RBRACE 
/* # 190 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_Init(I2C_TypeDef* I2Cx, I2C_InitTypeDef* I2C_InitStruct)
{ CODESCROLL_FUNC_BEGIN(192, (192, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable543,539) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable544,117,2,0)

  uint16_t tmpreg = 0, freqrange = 0;
  uint16_t result = 0x04;
  uint32_t pclk1 = 8000000;
  RCC_ClocksTypeDef rcc_clocks;

  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);
  ((void)0);



  tmpreg = I2Cx->CR2;

  tmpreg &= ((uint16_t)0xFFC0);

  RCC_GetClocksFreq(&rcc_clocks);
  pclk1 = rcc_clocks.PCLK1_Frequency;

  freqrange = (uint16_t)(pclk1 / 1000000);
  tmpreg |= freqrange;

  I2Cx->CR2 = tmpreg;



  I2Cx->CR1 &= ((uint16_t)0xFFFE);


  tmpreg = 0;


  
  CS_CMM_PROBE_NODE_STMT(117,1,1) if (I2C_InitStruct->I2C_ClockSpeed <= 100000)
  {

    
    CS_CMM_PROBE_NODE_STMT(117,0,2) result = (uint16_t)(pclk1 / (I2C_InitStruct->I2C_ClockSpeed << 1));

    
    CS_CMM_PROBE_NODE_STMT(118,7,3) if (result < 0x04)
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable545,540) 

      
      CS_CMM_PROBE_NODE_STMT(118,6,4) result = 0x04;
    } CS_CMM_ELSE_PROBE_C1(541) 

    
    CS_CMM_PROBE_NODE_STMT(118,5,5) tmpreg |= result;

    I2Cx->TRISE = freqrange + 1;
  }

  else
  {
    
    CS_CMM_PROBE_NODE_STMT(118,4,6) if (I2C_InitStruct->I2C_DutyCycle == ((uint16_t)0xBFFF))
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable546,542) 

      
      CS_CMM_PROBE_NODE_STMT(118,3,7) result = (uint16_t)(pclk1 / (I2C_InitStruct->I2C_ClockSpeed * 3));
    }
    else
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable547,543) 

      
      CS_CMM_PROBE_NODE_STMT(118,2,8) result = (uint16_t)(pclk1 / (I2C_InitStruct->I2C_ClockSpeed * 25));

      result |= ((uint16_t)0x4000);
    }


    
    CS_CMM_PROBE_NODE_STMT(118,1,9) if ((result & ((uint16_t)0x0FFF)) == 0)
    { CS_CMM_PROBE_DECL_C1(CodeScrollVariable548,544) 

      
      CS_CMM_PROBE_NODE_STMT(118,0,10) result |= (uint16_t)0x0001;
    } CS_CMM_ELSE_PROBE_C1(545) 

    
    CS_CMM_PROBE_NODE_STMT(119,7,11) tmpreg |= (uint16_t)(result | ((uint16_t)0x8000));

    I2Cx->TRISE = (uint16_t)(((freqrange * (uint16_t)300) / (uint16_t)1000) + (uint16_t)1);
  }


  
  CS_CMM_PROBE_NODE_STMT(119,6,12) I2Cx->CCR = tmpreg;

  I2Cx->CR1 |= ((uint16_t)0x0001);



  tmpreg = I2Cx->CR1;

  tmpreg &= ((uint16_t)0xFBF5);



  tmpreg |= (uint16_t)((uint32_t)I2C_InitStruct->I2C_Mode | I2C_InitStruct->I2C_Ack);

  I2Cx->CR1 = tmpreg;



  I2Cx->OAR1 = (I2C_InitStruct->I2C_AcknowledgedAddress | I2C_InitStruct->I2C_OwnAddress1);

CS_CMM_PROBE_NODE_STMT(119,5,13) 
 CODESCROLL_FUNC_END(192, 14, 290) } CODESCROLL_FUNC_END_RBRACE 






void I2C_StructInit(I2C_InitTypeDef* I2C_InitStruct)
{ CODESCROLL_FUNC_BEGIN(193, (193, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable549,546) 


  
  CS_CMM_PROBE_NODE_STMT(119,4,0) I2C_InitStruct->I2C_ClockSpeed = 5000;

  I2C_InitStruct->I2C_Mode = ((uint16_t)0x0000);

  I2C_InitStruct->I2C_DutyCycle = ((uint16_t)0xBFFF);

  I2C_InitStruct->I2C_OwnAddress1 = 0;

  I2C_InitStruct->I2C_Ack = ((uint16_t)0x0000);

  I2C_InitStruct->I2C_AcknowledgedAddress = ((uint16_t)0x4000);

CS_CMM_PROBE_NODE_STMT(119,3,1) 
 CODESCROLL_FUNC_END(193, 14, 312) } CODESCROLL_FUNC_END_RBRACE 
/* # 321 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_Cmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(194, (194, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable550,547) 

  
  CS_CMM_PROBE_NODE_STMT(119,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(119,1,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable551,548) 

    
    CS_CMM_PROBE_NODE_STMT(119,0,2) I2Cx->CR1 |= ((uint16_t)0x0001);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable552,549) 

    
    CS_CMM_PROBE_NODE_STMT(120,7,3) I2Cx->CR1 &= ((uint16_t)0xFFFE);
  }

CS_CMM_PROBE_NODE_STMT(120,6,4) 
 CODESCROLL_FUNC_END(194, 14, 336) } CODESCROLL_FUNC_END_RBRACE 
/* # 345 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_DMACmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(195, (195, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable553,550) 

  
  CS_CMM_PROBE_NODE_STMT(120,5,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(120,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable554,551) 

    
    CS_CMM_PROBE_NODE_STMT(120,3,2) I2Cx->CR2 |= ((uint16_t)0x0800);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable555,552) 

    
    CS_CMM_PROBE_NODE_STMT(120,2,3) I2Cx->CR2 &= ((uint16_t)0xF7FF);
  }

CS_CMM_PROBE_NODE_STMT(120,1,4) 
 CODESCROLL_FUNC_END(195, 14, 360) } CODESCROLL_FUNC_END_RBRACE 
/* # 369 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_DMALastTransferCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(196, (196, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable556,553) 

  
  CS_CMM_PROBE_NODE_STMT(120,0,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(121,7,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable557,554) 

    
    CS_CMM_PROBE_NODE_STMT(121,6,2) I2Cx->CR2 |= ((uint16_t)0x1000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable558,555) 

    
    CS_CMM_PROBE_NODE_STMT(121,5,3) I2Cx->CR2 &= ((uint16_t)0xEFFF);
  }

CS_CMM_PROBE_NODE_STMT(121,4,4) 
 CODESCROLL_FUNC_END(196, 14, 384) } CODESCROLL_FUNC_END_RBRACE 
/* # 393 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_GenerateSTART(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(197, (197, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable559,556) 

  
  CS_CMM_PROBE_NODE_STMT(121,3,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(121,2,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable560,557) 

    
    CS_CMM_PROBE_NODE_STMT(121,1,2) I2Cx->CR1 |= ((uint16_t)0x0100);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable561,558) 

    
    CS_CMM_PROBE_NODE_STMT(121,0,3) I2Cx->CR1 &= ((uint16_t)0xFEFF);
  }

CS_CMM_PROBE_NODE_STMT(122,7,4) 
 CODESCROLL_FUNC_END(197, 14, 408) } CODESCROLL_FUNC_END_RBRACE 
/* # 417 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_GenerateSTOP(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(198, (198, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable562,559) 

  
  CS_CMM_PROBE_NODE_STMT(122,6,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(122,5,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable563,560) 

    
    CS_CMM_PROBE_NODE_STMT(122,4,2) I2Cx->CR1 |= ((uint16_t)0x0200);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable564,561) 

    
    CS_CMM_PROBE_NODE_STMT(122,3,3) I2Cx->CR1 &= ((uint16_t)0xFDFF);
  }

CS_CMM_PROBE_NODE_STMT(122,2,4) 
 CODESCROLL_FUNC_END(198, 14, 432) } CODESCROLL_FUNC_END_RBRACE 
/* # 441 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_AcknowledgeConfig(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(199, (199, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable565,562) 

  
  CS_CMM_PROBE_NODE_STMT(122,1,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(122,0,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable566,563) 

    
    CS_CMM_PROBE_NODE_STMT(123,7,2) I2Cx->CR1 |= ((uint16_t)0x0400);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable567,564) 

    
    CS_CMM_PROBE_NODE_STMT(123,6,3) I2Cx->CR1 &= ((uint16_t)0xFBFF);
  }

CS_CMM_PROBE_NODE_STMT(123,5,4) 
 CODESCROLL_FUNC_END(199, 14, 456) } CODESCROLL_FUNC_END_RBRACE 







void I2C_OwnAddress2Config(I2C_TypeDef* I2Cx, uint8_t Address)
{ CODESCROLL_FUNC_BEGIN(200, (200, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable568,565) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable569,123,4,0)

  uint16_t tmpreg = 0;


  ((void)0);


  tmpreg = I2Cx->OAR2;


  tmpreg &= ((uint16_t)0xFF01);


  tmpreg |= (uint16_t)((uint16_t)Address & (uint16_t)0x00FE);


  I2Cx->OAR2 = tmpreg;

CS_CMM_PROBE_NODE_STMT(123,3,1) 
 CODESCROLL_FUNC_END(200, 14, 482) } CODESCROLL_FUNC_END_RBRACE 
/* # 491 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_DualAddressCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(201, (201, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable570,566) 

  
  CS_CMM_PROBE_NODE_STMT(123,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(123,1,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable571,567) 

    
    CS_CMM_PROBE_NODE_STMT(123,0,2) I2Cx->OAR2 |= ((uint16_t)0x0001);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable572,568) 

    
    CS_CMM_PROBE_NODE_STMT(124,7,3) I2Cx->OAR2 &= ((uint16_t)0xFFFE);
  }

CS_CMM_PROBE_NODE_STMT(124,6,4) 
 CODESCROLL_FUNC_END(201, 14, 506) } CODESCROLL_FUNC_END_RBRACE 
/* # 515 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_GeneralCallCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(202, (202, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable573,569) 

  
  CS_CMM_PROBE_NODE_STMT(124,5,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(124,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable574,570) 

    
    CS_CMM_PROBE_NODE_STMT(124,3,2) I2Cx->CR1 |= ((uint16_t)0x0040);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable575,571) 

    
    CS_CMM_PROBE_NODE_STMT(124,2,3) I2Cx->CR1 &= ((uint16_t)0xFFBF);
  }

CS_CMM_PROBE_NODE_STMT(124,1,4) 
 CODESCROLL_FUNC_END(202, 14, 530) } CODESCROLL_FUNC_END_RBRACE 
/* # 544 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_ITConfig(I2C_TypeDef* I2Cx, uint16_t I2C_IT, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(203, (203, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable576,572) 

  
  CS_CMM_PROBE_NODE_STMT(124,0,0) ((void)0);
  ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(125,7,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable577,573) 

    
    CS_CMM_PROBE_NODE_STMT(125,6,2) I2Cx->CR2 |= I2C_IT;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable578,574) 

    
    CS_CMM_PROBE_NODE_STMT(125,5,3) I2Cx->CR2 &= (uint16_t)~I2C_IT;
  }

CS_CMM_PROBE_NODE_STMT(125,4,4) 
 CODESCROLL_FUNC_END(203, 14, 561) } CODESCROLL_FUNC_END_RBRACE 







void I2C_SendData(I2C_TypeDef* I2Cx, uint8_t Data)
{ CODESCROLL_FUNC_BEGIN(204, (204, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable579,575) 

  
  CS_CMM_PROBE_NODE_STMT(125,3,0) ((void)0);

  I2Cx->DR = Data;

CS_CMM_PROBE_NODE_STMT(125,2,1) 
 CODESCROLL_FUNC_END(204, 14, 575) } CODESCROLL_FUNC_END_RBRACE 






uint8_t I2C_ReceiveData(I2C_TypeDef* I2Cx)
{ CODESCROLL_FUNC_BEGIN(205, (205, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable580,576) 

  
  CS_CMM_PROBE_NODE_STMT(125,1,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(125,0,1) 
   CODESCROLL_FUNC_END(205, 14, 587) return (uint8_t)I2Cx->DR;
} CODESCROLL_FUNC_END_RBRACE 
/* # 600 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_Send7bitAddress(I2C_TypeDef* I2Cx, uint8_t Address, uint8_t I2C_Direction)
{ CODESCROLL_FUNC_BEGIN(206, (206, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable581,577) 

  
  CS_CMM_PROBE_NODE_STMT(126,7,0) ((void)0);
  ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(126,6,1) if (I2C_Direction != ((uint8_t)0x00))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable582,578) 

    
    CS_CMM_PROBE_NODE_STMT(126,5,2) Address |= ((uint16_t)0x0001);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable583,579) 

    
    CS_CMM_PROBE_NODE_STMT(126,4,3) Address &= ((uint16_t)0xFFFE);
  }

  
  CS_CMM_PROBE_NODE_STMT(126,3,4) I2Cx->DR = Address;

CS_CMM_PROBE_NODE_STMT(126,2,5) 
 CODESCROLL_FUNC_END(206, 14, 618) } CODESCROLL_FUNC_END_RBRACE 
/* # 635 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
uint16_t I2C_ReadRegister(I2C_TypeDef* I2Cx, uint8_t I2C_Register)
{ CODESCROLL_FUNC_BEGIN(207, (207, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable584,580) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable585,126,1,0)

  volatile uint32_t tmp = 0;


  ((void)0);
  ((void)0);

  tmp = (uint32_t) I2Cx;
  tmp += I2C_Register;


  
  CS_CMM_PROBE_NODE_STMT(126,0,1) 
   CODESCROLL_FUNC_END(207, 14, 647) return (*(volatile uint16_t *) tmp);
} CODESCROLL_FUNC_END_RBRACE 
/* # 657 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_SoftwareResetCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(208, (208, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable586,581) 

  
  CS_CMM_PROBE_NODE_STMT(127,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(127,6,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable587,582) 

    
    CS_CMM_PROBE_NODE_STMT(127,5,2) I2Cx->CR1 |= ((uint16_t)0x8000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable588,583) 

    
    CS_CMM_PROBE_NODE_STMT(127,4,3) I2Cx->CR1 &= ((uint16_t)0x7FFF);
  }

CS_CMM_PROBE_NODE_STMT(127,3,4) 
 CODESCROLL_FUNC_END(208, 14, 672) } CODESCROLL_FUNC_END_RBRACE 
/* # 683 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_SMBusAlertConfig(I2C_TypeDef* I2Cx, uint16_t I2C_SMBusAlert)
{ CODESCROLL_FUNC_BEGIN(209, (209, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable589,584) 

  
  CS_CMM_PROBE_NODE_STMT(127,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(127,1,1) if (I2C_SMBusAlert == ((uint16_t)0x2000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable590,585) 

    
    CS_CMM_PROBE_NODE_STMT(127,0,2) I2Cx->CR1 |= ((uint16_t)0x2000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable591,586) 

    
    CS_CMM_PROBE_NODE_STMT(128,7,3) I2Cx->CR1 &= ((uint16_t)0xDFFF);
  }

CS_CMM_PROBE_NODE_STMT(128,6,4) 
 CODESCROLL_FUNC_END(209, 14, 698) } CODESCROLL_FUNC_END_RBRACE 
/* # 707 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_TransmitPEC(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(210, (210, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable592,587) 

  
  CS_CMM_PROBE_NODE_STMT(128,5,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(128,4,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable593,588) 

    
    CS_CMM_PROBE_NODE_STMT(128,3,2) I2Cx->CR1 |= ((uint16_t)0x1000);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable594,589) 

    
    CS_CMM_PROBE_NODE_STMT(128,2,3) I2Cx->CR1 &= ((uint16_t)0xEFFF);
  }

CS_CMM_PROBE_NODE_STMT(128,1,4) 
 CODESCROLL_FUNC_END(210, 14, 722) } CODESCROLL_FUNC_END_RBRACE 
/* # 733 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_PECPositionConfig(I2C_TypeDef* I2Cx, uint16_t I2C_PECPosition)
{ CODESCROLL_FUNC_BEGIN(211, (211, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable595,590) 

  
  CS_CMM_PROBE_NODE_STMT(128,0,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(129,7,1) if (I2C_PECPosition == ((uint16_t)0x0800))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable596,591) 

    
    CS_CMM_PROBE_NODE_STMT(129,6,2) I2Cx->CR1 |= ((uint16_t)0x0800);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable597,592) 

    
    CS_CMM_PROBE_NODE_STMT(129,5,3) I2Cx->CR1 &= ((uint16_t)0xF7FF);
  }

CS_CMM_PROBE_NODE_STMT(129,4,4) 
 CODESCROLL_FUNC_END(211, 14, 748) } CODESCROLL_FUNC_END_RBRACE 
/* # 757 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_CalculatePEC(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(212, (212, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable598,593) 

  
  CS_CMM_PROBE_NODE_STMT(129,3,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(129,2,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable599,594) 

    
    CS_CMM_PROBE_NODE_STMT(129,1,2) I2Cx->CR1 |= ((uint16_t)0x0020);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable600,595) 

    
    CS_CMM_PROBE_NODE_STMT(129,0,3) I2Cx->CR1 &= ((uint16_t)0xFFDF);
  }

CS_CMM_PROBE_NODE_STMT(130,7,4) 
 CODESCROLL_FUNC_END(212, 14, 772) } CODESCROLL_FUNC_END_RBRACE 






uint8_t I2C_GetPEC(I2C_TypeDef* I2Cx)
{ CODESCROLL_FUNC_BEGIN(213, (213, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable601,596) 

  
  CS_CMM_PROBE_NODE_STMT(130,6,0) ((void)0);

  
  CS_CMM_PROBE_NODE_STMT(130,5,1) 
   CODESCROLL_FUNC_END(213, 14, 784) return ((I2Cx->SR2) >> 8);
} CODESCROLL_FUNC_END_RBRACE 
/* # 794 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_ARPCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(214, (214, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable602,597) 

  
  CS_CMM_PROBE_NODE_STMT(130,4,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(130,3,1) if (NewState != DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable603,598) 

    
    CS_CMM_PROBE_NODE_STMT(130,2,2) I2Cx->CR1 |= ((uint16_t)0x0010);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable604,599) 

    
    CS_CMM_PROBE_NODE_STMT(130,1,3) I2Cx->CR1 &= ((uint16_t)0xFFEF);
  }

CS_CMM_PROBE_NODE_STMT(130,0,4) 
 CODESCROLL_FUNC_END(214, 14, 809) } CODESCROLL_FUNC_END_RBRACE 
/* # 818 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_StretchClockCmd(I2C_TypeDef* I2Cx, FunctionalState NewState)
{ CODESCROLL_FUNC_BEGIN(215, (215, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable605,600) 

  
  CS_CMM_PROBE_NODE_STMT(131,7,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(131,6,1) if (NewState == DISABLE)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable606,601) 

    
    CS_CMM_PROBE_NODE_STMT(131,5,2) I2Cx->CR1 |= ((uint16_t)0x0080);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable607,602) 

    
    CS_CMM_PROBE_NODE_STMT(131,4,3) I2Cx->CR1 &= ((uint16_t)0xFF7F);
  }

CS_CMM_PROBE_NODE_STMT(131,3,4) 
 CODESCROLL_FUNC_END(215, 14, 833) } CODESCROLL_FUNC_END_RBRACE 
/* # 844 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_FastModeDutyCycleConfig(I2C_TypeDef* I2Cx, uint16_t I2C_DutyCycle)
{ CODESCROLL_FUNC_BEGIN(216, (216, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable608,603) 

  
  CS_CMM_PROBE_NODE_STMT(131,2,0) ((void)0);
  ((void)0);
  
  CS_CMM_PROBE_NODE_STMT(131,1,1) if (I2C_DutyCycle != ((uint16_t)0x4000))
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable609,604) 

    
    CS_CMM_PROBE_NODE_STMT(131,0,2) I2Cx->CCR &= ((uint16_t)0xBFFF);
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable610,605) 

    
    CS_CMM_PROBE_NODE_STMT(132,7,3) I2Cx->CCR |= ((uint16_t)0x4000);
  }

CS_CMM_PROBE_NODE_STMT(132,6,4) 
 CODESCROLL_FUNC_END(216, 14, 859) } CODESCROLL_FUNC_END_RBRACE 
/* # 984 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
ErrorStatus I2C_CheckEvent(I2C_TypeDef* I2Cx, uint32_t I2C_EVENT)
{ CODESCROLL_FUNC_BEGIN(217, (217, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable611,606) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable612,132,5,0)

  uint32_t lastevent = 0;
  uint32_t flag1 = 0, flag2 = 0;
  ErrorStatus status = ERROR;


  ((void)0);
  ((void)0);


  flag1 = I2Cx->SR1;
  flag2 = I2Cx->SR2;
  flag2 = flag2 << 16;


  lastevent = (flag1 | flag2) & ((uint32_t)0x00FFFFFF);


  
  CS_CMM_PROBE_NODE_STMT(132,4,1) if ((lastevent & I2C_EVENT) == I2C_EVENT)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable613,607) 

    
    CS_CMM_PROBE_NODE_STMT(132,3,2) status = SUCCESS;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable614,608) 

    
    CS_CMM_PROBE_NODE_STMT(132,2,3) status = ERROR;
  }

  
  CS_CMM_PROBE_NODE_STMT(132,1,4) 
   CODESCROLL_FUNC_END(217, 14, 1014) return status;
} CODESCROLL_FUNC_END_RBRACE 
/* # 1032 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
uint32_t I2C_GetLastEvent(I2C_TypeDef* I2Cx)
{ CODESCROLL_FUNC_BEGIN(218, (218, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable615,609) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable616,132,0,0)

  uint32_t lastevent = 0;
  uint32_t flag1 = 0, flag2 = 0;


  ((void)0);


  flag1 = I2Cx->SR1;
  flag2 = I2Cx->SR2;
  flag2 = flag2 << 16;


  lastevent = (flag1 | flag2) & ((uint32_t)0x00FFFFFF);


  
  CS_CMM_PROBE_NODE_STMT(133,7,1) 
   CODESCROLL_FUNC_END(218, 14, 1049) return lastevent;
} CODESCROLL_FUNC_END_RBRACE 
/* # 1087 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
FlagStatus I2C_GetFlagStatus(I2C_TypeDef* I2Cx, uint32_t I2C_FLAG)
{ CODESCROLL_FUNC_BEGIN(219, (219, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable617,610) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable618,133,6,0)

  FlagStatus bitstatus = RESET;
  volatile uint32_t i2creg = 0, i2cxbase = 0;


  ((void)0);
  ((void)0);


  i2cxbase = (uint32_t)I2Cx;


  i2creg = I2C_FLAG >> 28;


  I2C_FLAG &= ((uint32_t)0x00FFFFFF);

  
  CS_CMM_PROBE_NODE_STMT(133,5,1) if(i2creg != 0)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable619,611) 

    
    CS_CMM_PROBE_NODE_STMT(133,4,2) i2cxbase += 0x14;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable620,612) 

    
    CS_CMM_PROBE_NODE_STMT(133,3,3) I2C_FLAG = (uint32_t)(I2C_FLAG >> 16);

    i2cxbase += 0x18;
  }

  
  CS_CMM_PROBE_NODE_STMT(133,2,4) if(((*(volatile uint32_t *)i2cxbase) & I2C_FLAG) != (uint32_t)RESET)
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable621,613) 

    
    CS_CMM_PROBE_NODE_STMT(133,1,5) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_C1(CodeScrollVariable622,614) 

    
    CS_CMM_PROBE_NODE_STMT(133,0,6) bitstatus = RESET;
  }


  
  CS_CMM_PROBE_NODE_STMT(134,7,7) 
   CODESCROLL_FUNC_END(219, 14, 1130) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 1166 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_ClearFlag(I2C_TypeDef* I2Cx, uint32_t I2C_FLAG)
{ CODESCROLL_FUNC_BEGIN(220, (220, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable623,615) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable624,134,6,0)

  uint32_t flagpos = 0;

  ((void)0);
  ((void)0);

  flagpos = I2C_FLAG & ((uint32_t)0x00FFFFFF);

  I2Cx->SR1 = (uint16_t)~flagpos;

CS_CMM_PROBE_NODE_STMT(134,5,1) 
 CODESCROLL_FUNC_END(220, 14, 1176) } CODESCROLL_FUNC_END_RBRACE 
/* # 1200 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
ITStatus I2C_GetITStatus(I2C_TypeDef* I2Cx, uint32_t I2C_IT)
{ CODESCROLL_FUNC_BEGIN(221, (221, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable625,616) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable626,134,4,0)

  ITStatus bitstatus = RESET;
  uint32_t enablestatus = 0;


  ((void)0);
  ((void)0);


  enablestatus = (uint32_t)(((I2C_IT & ((uint32_t)0x07000000)) >> 16) & (I2Cx->CR2)) ;


  I2C_IT &= ((uint32_t)0x00FFFFFF);


  
  CS_CMM_PROBE_NODE_STMT(134,3,1) if (CS_MCDC_221_0(((I2Cx->SR1 & I2C_IT) != (uint32_t)RESET), enablestatus, 36))
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable627,24) 

    
    CS_CMM_PROBE_NODE_STMT(134,2,2) bitstatus = SET;
  }
  else
  { CS_CMM_PROBE_DECL_CX(CodeScrollVariable628,25) 

    
    CS_CMM_PROBE_NODE_STMT(134,1,3) bitstatus = RESET;
  }

  
  CS_CMM_PROBE_NODE_STMT(134,0,4) 
   CODESCROLL_FUNC_END(221, 14, 1227) return bitstatus;
} CODESCROLL_FUNC_END_RBRACE 
/* # 1261 "C:\\Users\\irrenhaus\\Atollic\\TrueSTUDIO\\STM32_workspace\\Bordcomputer\\firmware\\STM32F10x_StdPeriph_Driver\\src\\stm32f10x_i2c.c"*/
void I2C_ClearITPendingBit(I2C_TypeDef* I2Cx, uint32_t I2C_IT)
{ CODESCROLL_FUNC_BEGIN(222, (222, CODESCROLL_BASIS_ADDR, 0)) CODESCROLL_FUNC_END_LBRACE  CS_CMM_PROBE_DECL_C1(CodeScrollVariable629,617) 
  CS_CMM_PROBE_NODE_DECL(CodeScrollVariable630,135,7,0)

  uint32_t flagpos = 0;

  ((void)0);
  ((void)0);

  flagpos = I2C_IT & ((uint32_t)0x00FFFFFF);

  I2Cx->SR1 = (uint16_t)~flagpos;

CS_CMM_PROBE_NODE_STMT(135,6,1) 
 CODESCROLL_FUNC_END(222, 14, 1271) } CODESCROLL_FUNC_END_RBRACE 
