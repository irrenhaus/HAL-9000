EESchema Schematic File Version 2  date So 17 Jul 2011 02:24:16 CEST
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
LIBS:mcu-cache
EELAYER 25  0
EELAYER END
$Descr A4 11700 8267
encoding utf-8
Sheet 2 9
Title ""
Date "16 jul 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 3100 2250 0    60   Input ~ 0
LED3
Text HLabel 3900 2250 2    60   Input ~ 0
LED4
Text HLabel 3900 2150 2    60   Input ~ 0
LED2
Text HLabel 3100 2150 0    60   Input ~ 0
LED1
Text HLabel 3900 2050 2    60   Output ~ 0
BTN1
Text HLabel 3100 2050 0    60   Output ~ 0
BTN2
Text HLabel 3900 1950 2    60   Output ~ 0
BTN3
Text HLabel 3100 1950 0    60   Output ~ 0
BTN4
Wire Wire Line
	3100 3050 2200 3050
Wire Wire Line
	3100 2950 2200 2950
Wire Wire Line
	3100 2850 2200 2850
Wire Wire Line
	3100 2750 2200 2750
Wire Wire Line
	3100 2650 2200 2650
Wire Wire Line
	3100 2550 2200 2550
Wire Wire Line
	3100 2450 2200 2450
Wire Wire Line
	3100 2350 2200 2350
Wire Bus Line
	4800 2450 4800 3450
Wire Bus Line
	4800 3450 2100 3450
Wire Bus Line
	2100 3450 2100 2050
Wire Bus Line
	2100 2050 1950 2050
Wire Bus Line
	2000 1450 1950 1450
Wire Bus Line
	1950 1450 1950 1350
Wire Wire Line
	3000 1850 3100 1850
Wire Wire Line
	3100 1250 3000 1250
Wire Wire Line
	4000 1250 3900 1250
Wire Wire Line
	3900 1150 4000 1150
Wire Wire Line
	4000 1150 4000 1050
Wire Wire Line
	3100 1150 3000 1150
Wire Wire Line
	3000 1150 3000 1050
Wire Wire Line
	2100 1550 3100 1550
Wire Wire Line
	4700 2350 3900 2350
Wire Wire Line
	4700 2450 3900 2450
Wire Wire Line
	4700 2550 3900 2550
Wire Wire Line
	4700 2650 3900 2650
Wire Wire Line
	4700 2750 3900 2750
Wire Wire Line
	4700 2850 3900 2850
Wire Wire Line
	4700 2950 3900 2950
Wire Wire Line
	4700 3050 3900 3050
Entry Wire Line
	4700 3050 4800 3150
Entry Wire Line
	4700 2950 4800 3050
Entry Wire Line
	4700 2850 4800 2950
Entry Wire Line
	4700 2750 4800 2850
Entry Wire Line
	4700 2650 4800 2750
Entry Wire Line
	4700 2550 4800 2650
Entry Wire Line
	4700 2450 4800 2550
Entry Wire Line
	4700 2350 4800 2450
Entry Wire Line
	2100 2950 2200 3050
Entry Wire Line
	2100 2850 2200 2950
Entry Wire Line
	2100 2750 2200 2850
Entry Wire Line
	2100 2650 2200 2750
Entry Wire Line
	2100 2550 2200 2650
Entry Wire Line
	2100 2450 2200 2550
Entry Wire Line
	2100 2350 2200 2450
Entry Wire Line
	2100 2250 2200 2350
Text Label 3900 2850 0    60   ~ 0
FSMC_D11
Text Label 3900 2750 0    60   ~ 0
FSMC_D9
Entry Wire Line
	2000 1450 2100 1550
$Comp
L GND #PWR01
U 1 1 4E221E8E
P 3000 1850
F 0 "#PWR01" H 3000 1850 30  0001 C CNN
F 1 "GND" H 3000 1780 30  0001 C CNN
	1    3000 1850
	0    1    1    0   
$EndComp
$Comp
L GND #PWR02
U 1 1 4E221E1A
P 4000 1250
F 0 "#PWR02" H 4000 1250 30  0001 C CNN
F 1 "GND" H 4000 1180 30  0001 C CNN
	1    4000 1250
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR03
U 1 1 4E221E16
P 3000 1250
F 0 "#PWR03" H 3000 1250 30  0001 C CNN
F 1 "GND" H 3000 1180 30  0001 C CNN
	1    3000 1250
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR04
U 1 1 4E221E12
P 3000 1050
F 0 "#PWR04" H 3000 1010 30  0001 C CNN
F 1 "+3.3V" H 3000 1160 30  0000 C CNN
	1    3000 1050
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR05
U 1 1 4E221E10
P 4000 1050
F 0 "#PWR05" H 4000 1010 30  0001 C CNN
F 1 "+3.3V" H 4000 1160 30  0000 C CNN
	1    4000 1050
	1    0    0    -1  
$EndComp
$Comp
L CONN_20X2 P5
U 1 1 4E221CB1
P 3500 2100
F 0 "P5" H 3500 3150 60  0000 C CNN
F 1 "Display_with_io" V 3500 2100 50  0000 C CNN
	1    3500 2100
	1    0    0    -1  
$EndComp
Text HLabel 3900 1450 2    60   Input ~ 0
SPI_CLK
Text HLabel 3100 1650 0    60   Output ~ 0
SPI_MISO
Text HLabel 3900 1650 2    60   Input ~ 0
SPI_MOSI
Text HLabel 3900 1850 2    60   Output ~ 0
~TOUCH_PENIRQ
Text HLabel 3900 1750 2    60   Output ~ 0
TOUCH_BUSY
Text HLabel 3100 1750 0    60   Input ~ 0
~TOUCH_CS
Text HLabel 3100 1350 0    60   Input ~ 0
LCD_BKLIT_EN
Text HLabel 1950 1350 0    60   Input ~ 0
FSMC_A[0..22]
Text HLabel 1950 2050 0    60   BiDi ~ 0
FSMC_D[0..15]
Text Label 3100 2350 2    60   ~ 0
FSMC_D0
Text Label 3900 2350 0    60   ~ 0
FSMC_D1
Text Label 3100 2450 2    60   ~ 0
FSMC_D2
Text Label 3900 2450 0    60   ~ 0
FSMC_D3
Text Label 3100 2550 2    60   ~ 0
FSMC_D4
Text Label 3900 2550 0    60   ~ 0
FSMC_D5
Text Label 3100 2650 2    60   ~ 0
FSMC_D6
Text Label 3900 2650 0    60   ~ 0
FSMC_D7
Text Label 3100 2750 2    60   ~ 0
FSMC_D8
Text Label 3100 2850 2    60   ~ 0
FSMC_D10
Text Label 3100 2950 2    60   ~ 0
FSMC_D12
Text Label 3900 2950 0    60   ~ 0
FSMC_D13
Text Label 3100 3050 2    60   ~ 0
FSMC_D14
Text Label 3900 3050 0    60   ~ 0
FSMC_D15
Text HLabel 3900 1350 2    60   Input ~ 0
~LCD_RESET
Text HLabel 4350 1450 2    60   Input ~ 0
~FSMC_NWE
Text HLabel 3100 1450 0    60   Input ~ 0
~FSMC_NOE
Text Label 2500 1550 2    60   ~ 0
FSMC_A0
Text HLabel 3900 1550 2    60   Input ~ 0
~LCD_CS
Text HLabel 4350 1550 2    60   Input ~ 0
~FSMC_NE4
$EndSCHEMATC
