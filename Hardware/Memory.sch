EESchema Schematic File Version 2  date 20.09.2010 21:14:13
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
LIBS:STM32F10xZx
LIBS:farnell
LIBS:welectronic
LIBS:LM75CIM
LIBS:AS7C34098A
LIBS:mainboard-cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 4 4
Title ""
Date "20 sep 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Notes Line
	2800 550  550  550 
Wire Notes Line
	2800 550  2800 2550
Wire Notes Line
	2800 2550 550  2550
Wire Notes Line
	550  2550 550  550 
Wire Wire Line
	1700 1700 2350 1700
Wire Wire Line
	1700 1500 2350 1500
Wire Wire Line
	1700 1300 2350 1300
Wire Wire Line
	1700 1100 2350 1100
Wire Wire Line
	1700 900  2350 900 
Wire Wire Line
	3600 1300 4300 1300
Wire Wire Line
	6500 1200 5800 1200
Wire Wire Line
	3850 1900 4300 1900
Wire Wire Line
	5800 1900 6250 1900
Wire Wire Line
	6600 3200 6750 3200
Wire Wire Line
	5800 3200 5900 3200
Wire Wire Line
	6500 800  5800 800 
Wire Wire Line
	6500 1000 5800 1000
Wire Wire Line
	6500 1500 5800 1500
Wire Wire Line
	6500 1700 5800 1700
Wire Wire Line
	6500 2100 5800 2100
Wire Wire Line
	6500 2300 5800 2300
Wire Wire Line
	6500 2600 5800 2600
Wire Wire Line
	6500 2800 5800 2800
Wire Wire Line
	4300 2900 3600 2900
Wire Wire Line
	4300 2700 3600 2700
Wire Wire Line
	4300 2500 3600 2500
Wire Wire Line
	4300 2200 3600 2200
Wire Wire Line
	4300 2000 3600 2000
Wire Wire Line
	4300 1600 3600 1600
Wire Wire Line
	4300 1400 3600 1400
Wire Wire Line
	4300 1100 3600 1100
Wire Wire Line
	4300 900  3600 900 
Wire Notes Line
	7150 550  2900 550 
Wire Notes Line
	7150 550  7150 3500
Wire Notes Line
	7150 3500 2900 3500
Wire Notes Line
	2900 3500 2900 550 
Wire Wire Line
	3600 800  4300 800 
Wire Wire Line
	3600 1000 4300 1000
Wire Wire Line
	3600 1200 4300 1200
Wire Wire Line
	3600 1500 4300 1500
Wire Wire Line
	3600 1700 4300 1700
Wire Wire Line
	3600 2100 4300 2100
Wire Wire Line
	3600 2300 4300 2300
Wire Wire Line
	3600 2600 4300 2600
Wire Wire Line
	3600 2800 4300 2800
Wire Wire Line
	5800 2900 6500 2900
Wire Wire Line
	5800 2700 6500 2700
Wire Wire Line
	5800 2500 6500 2500
Wire Wire Line
	5800 2200 6500 2200
Wire Wire Line
	5800 2000 6500 2000
Wire Wire Line
	5800 1600 6500 1600
Wire Wire Line
	5800 1400 6500 1400
Wire Wire Line
	5800 900  6500 900 
Wire Wire Line
	5300 3200 5400 3200
Wire Wire Line
	6100 3200 6200 3200
Wire Wire Line
	5800 1800 6250 1800
Wire Wire Line
	4300 1800 3850 1800
Wire Wire Line
	5800 1100 6500 1100
Wire Wire Line
	5800 1300 6500 1300
Wire Wire Line
	4300 2400 3600 2400
Wire Wire Line
	2350 1000 1700 1000
Wire Wire Line
	2350 1200 1700 1200
Wire Wire Line
	2350 1400 1700 1400
Wire Wire Line
	2350 1600 1700 1600
Wire Wire Line
	1700 1900 2350 1900
Text Notes 850  2500 0    90   ~ 0
SDCard Socket
Text GLabel 2350 1900 2    30   Output ~ 0
SDCARD_DETECT
$Comp
L GND #PWR070
U 1 1 4C979E3B
P 2350 1400
F 0 "#PWR070" H 2350 1400 30  0001 C CNN
F 1 "GND" H 2350 1330 30  0001 C CNN
	1    2350 1400
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR071
U 1 1 4C979E36
P 2350 1100
F 0 "#PWR071" H 2350 1100 30  0001 C CNN
F 1 "GND" H 2350 1030 30  0001 C CNN
	1    2350 1100
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR072
U 1 1 4C979E32
P 2350 1200
F 0 "#PWR072" H 2350 1160 30  0001 C CNN
F 1 "+3.3V" H 2350 1310 30  0000 C CNN
	1    2350 1200
	0    1    1    0   
$EndComp
Text GLabel 2350 1300 2    30   Input ~ 0
SDIO_CK
Text GLabel 2350 1000 2    30   Input ~ 0
SDIO_CMD
Text GLabel 2350 1700 2    30   BiDi ~ 0
SDIO_D2
Text GLabel 2350 1600 2    30   BiDi ~ 0
SDIO_D1
Text GLabel 2350 1500 2    30   BiDi ~ 0
SDIO_D0
Text GLabel 2350 900  2    30   BiDi ~ 0
SDIO_D3
Text GLabel 6500 1300 2    30   Input ~ 0
FSMC_NBL0
Text GLabel 6500 1200 2    30   Input ~ 0
FSMC_NBL1
Text GLabel 6500 1100 2    30   Input ~ 0
FSMC_NOE
Text GLabel 3600 2400 0    30   Input ~ 0
FSMC_NWE
Text GLabel 3600 1300 0    30   Input ~ 0
FSMC_NE3
$Comp
L +3.3V #PWR073
U 1 1 4C9784B2
P 6250 1900
F 0 "#PWR073" H 6250 1860 30  0001 C CNN
F 1 "+3.3V" H 6250 2010 30  0000 C CNN
	1    6250 1900
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR074
U 1 1 4C9784AF
P 3850 1800
F 0 "#PWR074" H 3850 1760 30  0001 C CNN
F 1 "+3.3V" H 3850 1910 30  0000 C CNN
	1    3850 1800
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR075
U 1 1 4C9784A8
P 3850 1900
F 0 "#PWR075" H 3850 1900 30  0001 C CNN
F 1 "GND" H 3850 1830 30  0001 C CNN
	1    3850 1900
	0    1    1    0   
$EndComp
$Comp
L GND #PWR076
U 1 1 4C9784A1
P 6250 1800
F 0 "#PWR076" H 6250 1800 30  0001 C CNN
F 1 "GND" H 6250 1730 30  0001 C CNN
	1    6250 1800
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR077
U 1 1 4C978488
P 6750 3200
F 0 "#PWR077" H 6750 3200 30  0001 C CNN
F 1 "GND" H 6750 3130 30  0001 C CNN
	1    6750 3200
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR078
U 1 1 4C978485
P 5900 3200
F 0 "#PWR078" H 5900 3200 30  0001 C CNN
F 1 "GND" H 5900 3130 30  0001 C CNN
	1    5900 3200
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR079
U 1 1 4C97847D
P 6100 3200
F 0 "#PWR079" H 6100 3160 30  0001 C CNN
F 1 "+3.3V" H 6100 3310 30  0000 C CNN
	1    6100 3200
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR080
U 1 1 4C978479
P 5300 3200
F 0 "#PWR080" H 5300 3160 30  0001 C CNN
F 1 "+3.3V" H 5300 3310 30  0000 C CNN
	1    5300 3200
	0    -1   -1   0   
$EndComp
$Comp
L C C18
U 1 1 4C97846E
P 6400 3200
F 0 "C18" H 6450 3300 50  0000 L CNN
F 1 "100nF" H 6450 3100 50  0000 L CNN
	1    6400 3200
	0    1    1    0   
$EndComp
$Comp
L C C17
U 1 1 4C978464
P 5600 3200
F 0 "C17" H 5650 3300 50  0000 L CNN
F 1 "100nF" H 5650 3100 50  0000 L CNN
	1    5600 3200
	0    1    1    0   
$EndComp
Text Notes 3000 3400 0    90   ~ 0
SRAM: AS7C34098A-12TIN
NoConn ~ 5800 2400
Text GLabel 6500 1400 2    30   Input ~ 0
FSMC_D15
Text GLabel 6500 1500 2    30   Input ~ 0
FSMC_D14
Text GLabel 6500 1600 2    30   Input ~ 0
FSMC_D13
Text GLabel 6500 1700 2    30   Input ~ 0
FSMC_D12
Text GLabel 6500 2000 2    30   Input ~ 0
FSMC_D11
Text GLabel 6500 2100 2    30   Input ~ 0
FSMC_D10
Text GLabel 6500 2200 2    30   Input ~ 0
FSMC_D9
Text GLabel 6500 2300 2    30   Input ~ 0
FSMC_D8
Text GLabel 3600 2300 0    30   Input ~ 0
FSMC_D7
Text GLabel 3600 2200 0    30   Input ~ 0
FSMC_D6
Text GLabel 3600 2100 0    30   Input ~ 0
FSMC_D5
Text GLabel 3600 2000 0    30   Input ~ 0
FSMC_D4
Text GLabel 3600 1700 0    30   Input ~ 0
FSMC_D3
Text GLabel 3600 1600 0    30   Input ~ 0
FSMC_D2
Text GLabel 3600 1500 0    30   Input ~ 0
FSMC_D1
Text GLabel 3600 1400 0    30   Input ~ 0
FSMC_D0
Text GLabel 6500 800  2    30   Input ~ 0
FSMC_A17
Text GLabel 6500 900  2    30   Input ~ 0
FSMC_A16
Text GLabel 6500 1000 2    30   Input ~ 0
FSMC_A15
Text GLabel 6500 2500 2    30   Input ~ 0
FSMC_A14
Text GLabel 6500 2600 2    30   Input ~ 0
FSMC_A13
Text GLabel 6500 2700 2    30   Input ~ 0
FSMC_A12
Text GLabel 6500 2800 2    30   Input ~ 0
FSMC_A11
Text GLabel 6500 2900 2    30   Input ~ 0
FSMC_A10
Text GLabel 3600 2900 0    30   Input ~ 0
FSMC_A9
Text GLabel 3600 2800 0    30   Input ~ 0
FSMC_A8
Text GLabel 3600 2700 0    30   Input ~ 0
FSMC_A7
Text GLabel 3600 2600 0    30   Input ~ 0
FSMC_A6
Text GLabel 3600 2500 0    30   Input ~ 0
FSMC_A5
Text GLabel 3600 1200 0    30   Input ~ 0
FSMC_A4
Text GLabel 3600 1100 0    30   Input ~ 0
FSMC_A3
Text GLabel 3600 1000 0    30   Input ~ 0
FSMC_A2
Text GLabel 3600 900  0    30   Input ~ 0
FSMC_A1
Text GLabel 3600 800  0    30   Input ~ 0
FSMC_A0
$Comp
L AS7C34098A U2
U 1 1 4C976D62
P 5050 1850
F 0 "U2" H 5050 1750 50  0000 C CNN
F 1 "AS7C34098A" H 5050 1950 50  0000 C CNN
	1    5050 1850
	1    0    0    -1  
$EndComp
$Comp
L SDBMF X3
U 1 1 4C969872
P 1500 1600
F 0 "X3" H 1000 2450 50  0000 L BNN
F 1 "SDBMF" H 1000 900 50  0000 L BNN
F 2 "farnell-SDBMF-009XXBXX2" H 1500 1750 50  0001 C CNN
	1    1500 1600
	1    0    0    -1  
$EndComp
$EndSCHEMATC
