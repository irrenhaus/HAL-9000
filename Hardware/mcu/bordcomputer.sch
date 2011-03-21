EESchema Schematic File Version 2  date Mo 21 Mär 2011 03:16:23 CET
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
encoding utf-8
Sheet 1 9
Title ""
Date "21 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Notes Line
	9850 6500 10550 6500
Wire Notes Line
	9850 6500 9850 6950
Wire Notes Line
	9850 6950 10550 6950
Wire Notes Line
	10550 6950 10550 6500
Connection ~ 10300 6700
Wire Wire Line
	10400 6600 10300 6600
Wire Wire Line
	2250 3450 2950 3450
Wire Wire Line
	2250 3350 2950 3350
Wire Wire Line
	2250 3250 2950 3250
Wire Wire Line
	2250 3150 2950 3150
Wire Wire Line
	2250 3650 2950 3650
Wire Wire Line
	7200 1950 8100 1950
Wire Wire Line
	7200 1850 8100 1850
Wire Wire Line
	7200 1750 8100 1750
Wire Bus Line
	8100 3450 7200 3450
Wire Bus Line
	7200 3450 7200 2950
Wire Wire Line
	7200 2350 8100 2350
Wire Wire Line
	7200 2250 8100 2250
Wire Wire Line
	8100 6150 7200 6150
Wire Wire Line
	8100 6050 7200 6050
Wire Wire Line
	8100 5950 7200 5950
Wire Wire Line
	8100 5850 7200 5850
Wire Wire Line
	8100 5750 7200 5750
Wire Wire Line
	8100 5650 7200 5650
Wire Wire Line
	8100 5550 7200 5550
Wire Wire Line
	2250 2150 2950 2150
Wire Bus Line
	8100 2850 7200 2850
Connection ~ 7900 2700
Wire Wire Line
	7200 2700 7900 2700
Wire Wire Line
	7200 2500 8100 2500
Wire Wire Line
	8100 3700 7950 3700
Wire Wire Line
	7950 3700 7950 2700
Wire Wire Line
	7950 2700 8100 2700
Wire Wire Line
	2250 1600 2350 1600
Wire Wire Line
	2350 1600 2350 2050
Wire Wire Line
	2350 2050 2250 2050
Wire Wire Line
	7900 2600 7900 3800
Wire Wire Line
	7900 3800 8100 3800
Wire Wire Line
	7200 2600 8100 2600
Connection ~ 7900 2600
Wire Wire Line
	7200 3900 8100 3900
Wire Wire Line
	2950 2300 2250 2300
Wire Wire Line
	2950 2400 2250 2400
Wire Wire Line
	2300 5950 2950 5950
Wire Wire Line
	2300 6050 2950 6050
Wire Wire Line
	2300 6150 2950 6150
Wire Wire Line
	2300 6250 2950 6250
Wire Wire Line
	2300 6350 2950 6350
Wire Wire Line
	2300 6450 2950 6450
Wire Wire Line
	2300 6550 2950 6550
Wire Wire Line
	2300 6650 2950 6650
Wire Wire Line
	7200 1300 8100 1300
Wire Wire Line
	7200 1400 8100 1400
Wire Wire Line
	7200 1500 8100 1500
Wire Bus Line
	8100 3350 7600 3350
Wire Bus Line
	7200 2950 8100 2950
Wire Bus Line
	7200 2850 7200 2900
Wire Bus Line
	7200 2900 7600 2900
Wire Bus Line
	7600 2900 7600 3350
Wire Wire Line
	1200 3000 1150 3000
Wire Wire Line
	1150 3000 1150 1500
Wire Wire Line
	1150 1500 1650 1500
Wire Wire Line
	2950 3750 2250 3750
Wire Wire Line
	8100 4350 7200 4350
Wire Wire Line
	10300 6600 10300 6900
Connection ~ 10300 6800
$Comp
L GND #PWR01
U 1 1 4D86B163
P 10400 6600
F 0 "#PWR01" H 10400 6600 30  0001 C CNN
F 1 "GND" H 10400 6530 30  0001 C CNN
	1    10400 6600
	0    -1   -1   0   
$EndComp
$Comp
L CONN_1 P104
U 1 1 4D86B15F
P 10150 6900
F 0 "P104" H 10230 6900 40  0000 L CNN
F 1 "CONN_1" H 10150 6955 30  0001 C CNN
	1    10150 6900
	-1   0    0    1   
$EndComp
$Comp
L CONN_1 P103
U 1 1 4D86B15C
P 10150 6800
F 0 "P103" H 10230 6800 40  0000 L CNN
F 1 "CONN_1" H 10150 6855 30  0001 C CNN
	1    10150 6800
	-1   0    0    1   
$EndComp
$Comp
L CONN_1 P102
U 1 1 4D86B15A
P 10150 6700
F 0 "P102" H 10230 6700 40  0000 L CNN
F 1 "CONN_1" H 10150 6755 30  0001 C CNN
	1    10150 6700
	-1   0    0    1   
$EndComp
$Comp
L CONN_1 P101
U 1 1 4D86B156
P 10150 6600
F 0 "P101" H 10230 6600 40  0000 L CNN
F 1 "CONN_1" H 10150 6655 30  0001 C CNN
	1    10150 6600
	-1   0    0    1   
$EndComp
Text Notes 9850 6500 0    60   ~ 0
Mounting holes
Text Label 8100 4250 2    60   ~ 0
SPI1_MISO
Text Label 8100 4150 2    60   ~ 0
SPI1_MOSI
Text Label 8100 4050 2    60   ~ 0
SPI1_SCK
Text Label 7200 1850 0    60   ~ 0
SPI1_SCK
Text Label 7200 1950 0    60   ~ 0
SPI1_MISO
Text Label 7200 1750 0    60   ~ 0
SPI1_MOSI
$Sheet
S 1200 2900 1050 1050
U 4D77DF86
F0 "Data Connectors" 60
F1 "connectors.sch" 60
F2 "EXTVCC" O L 1200 3000 60 
F3 "SPI_MISO" O R 2250 3150 60 
F4 "SPI_MOSI" I R 2250 3250 60 
F5 "SPI_SCK" I R 2250 3350 60 
F6 "CAN_RX" O R 2250 3650 60 
F7 "CAN_TX" I R 2250 3750 60 
F8 "~SPI_CS" B R 2250 3450 60 
$EndSheet
Text Label 2850 6650 2    60   ~ 0
UART_RX>
Text Label 2850 6550 2    60   ~ 0
UART_TX<
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
S 8100 3300 840  1200
U 4D74466C
F0 "Memory" 60
F1 "memory.sch" 60
F2 "~FSMC_OE" I L 8100 3700 60 
F3 "~FSMC_WE" I L 8100 3800 60 
F4 "~SRAM_CE" I L 8100 3900 60 
F5 "FSMC_D[0..15]" B L 8100 3450 60 
F6 "FSMC_A[0..19]" I L 8100 3350 60 
F7 "SPI_SCK" I L 8100 4050 60 
F8 "SPI_MOSI" I L 8100 4150 60 
F9 "SPI_MISO" O L 8100 4250 60 
F10 "~FLASH_CS" I L 8100 4350 60 
$EndSheet
$Sheet
S 1650 1200 600  450 
U 4D7436D3
F0 "Power" 60
F1 "power.sch" 60
F2 "VBUS" I R 2250 1600 60 
F3 "EXTVCC" I L 1650 1500 60 
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
F26 "SPI1_SCK" O R 7200 1850 60 
F27 "SPI1_MOSI" O R 7200 1750 60 
F28 "SPI1_MISO" I R 7200 1950 60 
F29 "~TOUCH_CS" O R 7200 1500 60 
F30 "TOUCH_BUSY" I R 7200 1400 60 
F31 "~TOUCH_PENIRQ" I R 7200 1300 60 
F32 "~LCD_RESET" O R 7200 2350 60 
F33 "LCD_BKLIT_EN" O R 7200 2250 60 
F34 "CAN_TX" O L 2950 3750 60 
F35 "CAN_RX" I L 2950 3650 60 
F36 "SPI2_MOSI" O L 2950 3250 60 
F37 "SPI_MISO" I L 2950 3150 60 
F38 "SPI2_SCK" O L 2950 3350 60 
F39 "~SPI2_CS" O L 2950 3450 60 
F40 "~FLASH_CS" O R 7200 4350 60 
$EndSheet
$EndSCHEMATC
