EESchema Schematic File Version 2  date Mi 09 Mär 2011 16:26:06 CET
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:nhesse
LIBS:bordcomputer-cache
EELAYER 25  0
EELAYER END
$Descr A4 11700 8267
Sheet 1 11
Title ""
Date "9 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Bus Line
	7600 2900 7600 3350
Wire Bus Line
	7600 2900 7200 2900
Wire Bus Line
	7200 2900 7200 2850
Wire Bus Line
	8100 2950 7200 2950
Wire Bus Line
	7600 3350 8100 3350
Wire Wire Line
	7200 5250 8100 5250
Wire Wire Line
	2950 4900 2250 4900
Wire Wire Line
	2950 4800 2250 4800
Wire Wire Line
	2950 4700 2250 4700
Wire Wire Line
	2250 3250 2950 3250
Wire Wire Line
	7200 5150 8100 5150
Wire Wire Line
	7200 5050 8100 5050
Wire Wire Line
	7200 4950 8100 4950
Wire Wire Line
	7200 4850 8100 4850
Wire Wire Line
	7200 1500 8100 1500
Wire Wire Line
	7200 1400 8100 1400
Wire Wire Line
	7200 1300 8100 1300
Wire Wire Line
	2950 4550 2250 4550
Wire Wire Line
	2300 6650 2950 6650
Wire Wire Line
	2300 6550 2950 6550
Wire Wire Line
	2300 6450 2950 6450
Wire Wire Line
	2300 6350 2950 6350
Wire Wire Line
	2300 6250 2950 6250
Wire Wire Line
	2300 6150 2950 6150
Wire Wire Line
	2300 6050 2950 6050
Wire Wire Line
	2300 5950 2950 5950
Wire Wire Line
	2950 2400 2250 2400
Wire Wire Line
	2950 2300 2250 2300
Wire Wire Line
	7200 3900 8100 3900
Connection ~ 7900 2600
Wire Wire Line
	7200 2600 8100 2600
Wire Wire Line
	8100 3800 7900 3800
Wire Wire Line
	7900 3800 7900 2600
Wire Wire Line
	2250 2050 2350 2050
Wire Wire Line
	2350 2050 2350 1600
Wire Wire Line
	2350 1600 2250 1600
Wire Wire Line
	8100 2700 7950 2700
Wire Wire Line
	7950 2700 7950 3700
Wire Wire Line
	7950 3700 8100 3700
Wire Wire Line
	7200 2500 8100 2500
Wire Wire Line
	7200 2700 7900 2700
Connection ~ 7900 2700
Wire Bus Line
	7200 2850 8100 2850
Wire Wire Line
	2250 2150 2950 2150
Wire Wire Line
	8100 5550 7200 5550
Wire Wire Line
	8100 5650 7200 5650
Wire Wire Line
	8100 5750 7200 5750
Wire Wire Line
	8100 5850 7200 5850
Wire Wire Line
	8100 5950 7200 5950
Wire Wire Line
	8100 6050 7200 6050
Wire Wire Line
	8100 6150 7200 6150
Wire Wire Line
	2250 4450 2950 4450
Wire Wire Line
	7200 4550 8100 4550
Wire Wire Line
	7200 4650 8100 4650
Wire Wire Line
	7200 4750 8100 4750
Wire Wire Line
	7200 2250 8100 2250
Wire Wire Line
	7200 2350 8100 2350
Wire Wire Line
	2250 2850 2950 2850
Wire Wire Line
	2250 2950 2950 2950
Wire Wire Line
	2250 3050 2950 3050
Wire Wire Line
	2950 3650 2250 3650
Wire Wire Line
	2250 5050 2950 5050
Wire Wire Line
	2250 5150 2950 5150
Wire Wire Line
	8100 4450 7200 4450
Wire Bus Line
	7200 2950 7200 3450
Wire Bus Line
	7200 3450 8100 3450
Text Notes 8800 4750 0    60   ~ 0
Analog
Text Notes 8800 4650 0    60   ~ 0
Analog
Text Notes 8800 4550 0    60   ~ 0
Analog
Text Label 2250 3500 0    60   ~ 0
UART_TX<
Text Label 2250 3400 0    60   ~ 0
UART_RX>
Text Label 2850 6650 2    60   ~ 0
UART_RX>
Text Label 2850 6550 2    60   ~ 0
UART_TX<
Text Label 8100 1950 2    60   ~ 0
SPI_MISO
Text Label 8100 1850 2    60   ~ 0
SPI_SCK
Text Label 8100 1750 2    60   ~ 0
SPI_MOSI
Text Label 2250 3750 0    60   ~ 0
SPI_SCK
Text Label 2250 3950 0    60   ~ 0
SPI_MOSI
Text Label 2250 3850 0    60   ~ 0
SPI_MISO
Text Label 2950 6950 2    60   ~ 0
SPI_MISO
Text Label 2950 7050 2    60   ~ 0
SPI_MOSI
Text Label 2950 7150 2    60   ~ 0
SPI_SCK
$Sheet
S 1450 5900 850  800 
U 4D74DE7F
F0 "JTAG" 60
F1 "jtag.sch" 60
F2 "nSRST" I R 2300 5950 60 
F3 "TDO" I R 2300 6050 60 
F4 "TCK" O R 2300 6150 60 
F5 "TMS" O R 2300 6250 60 
F6 "TDI" O R 2300 6350 60 
F7 "nTRST" O R 2300 6450 60 
F8 "UART_TX" I R 2300 6550 60 
F9 "UART_RX" O R 2300 6650 60 
$EndSheet
$Sheet
S 1000 4400 1250 800 
U 4D74DAC7
F0 "Gimmicks (Sensors)" 60
F1 "gimmicks.sch" 60
F2 "SDA" B R 2250 4450 60 
F3 "SCL" I R 2250 4550 60 
F4 "GYRO_ST" I R 2250 4700 60 
F5 "GYRO_PD" I R 2250 4800 60 
F6 "GYRO_OUT" O R 2250 4900 60 
F7 "PRESSURE_EOC" I R 2250 5050 60 
F8 "PRESSURE_XCLR" I R 2250 5150 60 
$EndSheet
$Sheet
S 1650 2800 600  1200
U 4D74594A
F0 "GPS" 60
F1 "gps.sch" 60
F2 "GPIO20" B R 2250 2850 60 
F3 "GPIO1" B R 2250 2950 60 
F4 "GPIO2" B R 2250 3050 60 
F5 "PPS" I R 2250 3250 60 
F6 "TX" O R 2250 3400 60 
F7 "RX" I R 2250 3500 60 
F8 "~GPS_CS" I R 2250 3650 60 
F9 "CLK" I R 2250 3750 60 
F10 "MISO" O R 2250 3850 60 
F11 "MOSI" I R 2250 3950 60 
$EndSheet
$Sheet
S 8100 3300 840  650 
U 4D74466C
F0 "Memory" 60
F1 "memory.sch" 60
F2 "~FSMC_OE" I L 8100 3700 60 
F3 "~FSMC_WE" I L 8100 3800 60 
F4 "~SRAM_CE" I L 8100 3900 60 
F5 "FSMC_D[0..15]" B L 8100 3450 60 
F6 "FSMC_A[0..19]" I L 8100 3350 60 
$EndSheet
$Sheet
S 1650 1200 600  450 
U 4D7436D3
F0 "Power" 60
F1 "power.sch" 60
F2 "VBUS" I R 2250 1600 60 
$EndSheet
$Sheet
S 8100 4400 1020 950 
U 4D741BB8
F0 "Sensoren" 60
F1 "sensors.sch" 60
F2 "CoolantTemp" O L 8100 4550 60 
F3 "FuelLevel" O L 8100 4650 60 
F4 "RPM" O L 8100 4750 60 
F5 "~FuelConsumption" O L 8100 4850 60 
F6 "~FuelPump" O L 8100 4950 60 
F7 "ReserveSensor" O L 8100 5050 60 
F8 "Speed-Reed" O L 8100 5150 60 
F9 "TEMP1" B L 8100 5250 60 
F10 "TEMP2" B L 8100 4450 60 
$EndSheet
$Sheet
S 8100 5500 750  700 
U 4D741259
F0 "SDCard" 60
F1 "sdcard.sch" 60
F2 "SDD2" B L 8100 5750 60 
F3 "SDD3" B L 8100 5850 60 
F4 "SDCMD" I L 8100 5950 60 
F5 "SDCLK" I L 8100 6050 60 
F6 "SDD0" B L 8100 5550 60 
F7 "SDD1" B L 8100 5650 60 
F8 "SDDETECT" O L 8100 6150 60 
$EndSheet
$Sheet
S 1650 2000 600  450 
U 4D741250
F0 "USB" 60
F1 "usb.sch" 60
F2 "USBEN" I R 2250 2150 60 
F3 "VBUS" O R 2250 2050 60 
F4 "USBDP" B R 2250 2300 60 
F5 "USBDM" B R 2250 2400 60 
$EndSheet
$Sheet
S 8100 1200 1950 1800
U 4D7410E7
F0 "LCD & Touch" 60
F1 "lcd.sch" 60
F2 "~TOUCH_PENIRQ" O L 8100 1300 60 
F3 "TOUCH_BUSY" O L 8100 1400 60 
F4 "~TOUCH_CS" I L 8100 1500 60 
F5 "~LCD_CS" I L 8100 2500 60 
F6 "~LCD_RST" I L 8100 2350 60 
F7 "LCD_BKLIT_EN" I L 8100 2250 60 
F8 "MOSI" I L 8100 1750 60 
F9 "SCK" I L 8100 1850 60 
F10 "MISO" O L 8100 1950 60 
F11 "FSMC_D[0..15]" B L 8100 2950 60 
F12 "~FSMC_WE" I L 8100 2600 60 
F13 "~FSMC_OE" I L 8100 2700 60 
F14 "FSMC_A[0..19]" I L 8100 2850 60 
$EndSheet
$Sheet
S 2950 1200 4250 6000
U 4D7410A2
F0 "STM32 MCU" 60
F1 "stm32.sch" 60
F2 "~LCD_CS" O R 7200 2500 60 
F3 "~FSMC_WE" O R 7200 2600 60 
F4 "~FSMC_OE" O R 7200 2700 60 
F5 "~SRAM_CE" O R 7200 3900 60 
F6 "FSMC_D[0..15]" B R 7200 2950 60 
F7 "FSMC_A[0..19]" O R 7200 2850 60 
F8 "SDCARD_DETECT" I R 7200 6150 60 
F9 "SDIO_CMD" O R 7200 5950 60 
F10 "SDIO_CK" O R 7200 6050 60 
F11 "SDIO_D3" B R 7200 5850 60 
F12 "SDIO_D2" B R 7200 5750 60 
F13 "SDIO_D1" B R 7200 5650 60 
F14 "SDIO_D0" B R 7200 5550 60 
F15 "USB_EN" O L 2950 2150 60 
F16 "USBDP" B L 2950 2300 60 
F17 "USBDM" B L 2950 2400 60 
F18 "~NRST" I L 2950 5950 60 
F19 "~NJTRST" I L 2950 6450 60 
F20 "JTMS" I L 2950 6250 60 
F21 "JTCK" I L 2950 6150 60 
F22 "JTDO" O L 2950 6050 60 
F23 "JTDI" I L 2950 6350 60 
F24 "USART2_RX" I L 2950 6650 60 
F25 "USART2_TX" O L 2950 6550 60 
F26 "SPI1_SCK" O L 2950 7150 60 
F27 "SPI1_MOSI" O L 2950 7050 60 
F28 "SPI1_MISO" I L 2950 6950 60 
F29 "I2C1_SDA" B L 2950 4450 60 
F30 "I2C1_SCL" O L 2950 4550 60 
F31 "ADC123_IN13" I R 7200 4750 60 
F32 "ADC123_IN12" I R 7200 4650 60 
F33 "ADC123_IN11" I R 7200 4550 60 
F34 "~TOUCH_CS" O R 7200 1500 60 
F35 "TOUCH_BUSY" I R 7200 1400 60 
F36 "~TOUCH_PENIRQ" I R 7200 1300 60 
F37 "~LCD_RESET" O R 7200 2350 60 
F38 "LCD_BKLIT_EN" O R 7200 2250 60 
F39 "Speed-Reed" I R 7200 5150 60 
F40 "ReserveSensor" I R 7200 5050 60 
F41 "~FuelPump" I R 7200 4950 60 
F42 "~FuelConsumption" I R 7200 4850 60 
F43 "GPS_GPIO20" O L 2950 2850 60 
F44 "GPS_GPIO02" O L 2950 3050 60 
F45 "GPS_GPIO01" O L 2950 2950 60 
F46 "GPS_PPS" O L 2950 3250 60 
F47 "~GPS_CS" O L 2950 3650 60 
F48 "ADC123_IN10" I L 2950 4900 60 
F49 "PRESSURE_XCLR" O L 2950 5150 60 
F50 "PRESSURE_EOC" O L 2950 5050 60 
F51 "GYRO_PD" O L 2950 4800 60 
F52 "GYRO_ST" O L 2950 4700 60 
F53 "TEMP2" B R 7200 4450 60 
F54 "TEMP1" B R 7200 5250 60 
$EndSheet
$EndSCHEMATC
