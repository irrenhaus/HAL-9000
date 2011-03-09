EESchema Schematic File Version 2  date Mo 07 Mär 2011 22:16:50 CET
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
Sheet 10 11
Title ""
Date "7 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 3100 1650 0    60   Output ~ 0
STATUS_LED
Text Notes 2450 750  2    60   ~ 0
FSMC_OE = LCD_RD\nFSMC_A19 = LCD_RS\nFSMC_WE = LCD_RW
Wire Wire Line
	2200 1350 3100 1350
Wire Wire Line
	4500 1100 4500 1250
Wire Bus Line
	5050 1750 5050 3050
Wire Bus Line
	5050 1650 5050 2950
Wire Bus Line
	5050 2950 1950 2950
Wire Bus Line
	1950 2950 1950 1650
Wire Wire Line
	4500 1250 3900 1250
Wire Wire Line
	3100 1750 2050 1750
Wire Wire Line
	3100 1850 2050 1850
Wire Wire Line
	3100 1950 2050 1950
Wire Wire Line
	2050 2050 3100 2050
Wire Wire Line
	2050 2150 3100 2150
Wire Wire Line
	2050 2250 3100 2250
Wire Wire Line
	2050 2350 3100 2350
Wire Wire Line
	2050 2450 3100 2450
Wire Wire Line
	3900 2450 4950 2450
Wire Wire Line
	3900 2350 4950 2350
Wire Wire Line
	3900 2250 4950 2250
Wire Wire Line
	3900 2150 4950 2150
Wire Wire Line
	3900 2050 4950 2050
Wire Wire Line
	4950 1950 3900 1950
Wire Wire Line
	4950 1850 3900 1850
Wire Wire Line
	4950 1750 3900 1750
Wire Bus Line
	1950 1650 1500 1650
Wire Bus Line
	1950 1250 2100 1250
Text Label 3100 1350 2    60   ~ 0
FSMC_A19
Entry Wire Line
	2100 1250 2200 1350
Text HLabel 1950 1250 0    60   Input ~ 0
FSMC_A[0..19]
Text HLabel 3900 1450 2    60   Input ~ 0
MOSI
$Comp
L GND #PWR061
U 1 1 4D446A40
P 3900 2550
F 0 "#PWR061" H 3900 2550 30  0001 C CNN
F 1 "GND" H 3900 2480 30  0001 C CNN
	1    3900 2550
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR062
U 1 1 4D446A3D
P 3100 2550
F 0 "#PWR062" H 3100 2550 30  0001 C CNN
F 1 "GND" H 3100 2480 30  0001 C CNN
	1    3100 2550
	0    1    1    0   
$EndComp
Text HLabel 3900 1650 2    60   Output ~ 0
~TOUCH_PENIRQ
Text HLabel 3900 1550 2    60   Output ~ 0
TOUCH_BUSY
Text HLabel 3100 1550 0    60   Input ~ 0
~TOUCH_CS
Text HLabel 4500 1100 2    60   Input ~ 0
SCK
Text HLabel 3100 1450 0    60   Output ~ 0
MISO
Text HLabel 3900 1350 2    60   Input ~ 0
~LCD_CS
Text HLabel 4500 1200 2    60   Input ~ 0
~FSMC_WE
Text HLabel 3100 1250 0    60   Input ~ 0
~FSMC_OE
Text HLabel 3900 1150 2    60   Input ~ 0
~LCD_RST
Text HLabel 3100 1150 0    60   Input ~ 0
LCD_BKLIT_EN
$Comp
L GND #PWR063
U 1 1 4D446819
P 3900 1050
F 0 "#PWR063" H 3900 1050 30  0001 C CNN
F 1 "GND" H 3900 980 30  0001 C CNN
	1    3900 1050
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR064
U 1 1 4D446815
P 3100 1050
F 0 "#PWR064" H 3100 1050 30  0001 C CNN
F 1 "GND" H 3100 980 30  0001 C CNN
	1    3100 1050
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR065
U 1 1 4D446807
P 3900 950
F 0 "#PWR065" H 3900 910 30  0001 C CNN
F 1 "+3.3V" H 3900 1060 30  0000 C CNN
	1    3900 950 
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR066
U 1 1 4D446804
P 3100 950
F 0 "#PWR066" H 3100 910 30  0001 C CNN
F 1 "+3.3V" H 3100 1060 30  0000 C CNN
	1    3100 950 
	1    0    0    -1  
$EndComp
$Comp
L CONN_2X17 U801
U 1 1 4D4467E8
P 3500 1750
F 0 "U801" H 3500 800 50  0000 C CNN
F 1 "DisplayCon" H 3500 2700 50  0000 C CNN
F 2 "PinArray_2x17_tub" H 3500 1750 60  0001 C CNN
	1    3500 1750
	1    0    0    -1  
$EndComp
Text Label 4356 2450 2    60   ~ 0
FSMC_D15
Text Label 3100 2450 2    60   ~ 0
FSMC_D14
Text Label 4356 2350 2    60   ~ 0
FSMC_D13
Text Label 3100 2350 2    60   ~ 0
FSMC_D12
Text Label 4356 2250 2    60   ~ 0
FSMC_D11
Text Label 3100 2250 2    60   ~ 0
FSMC_D10
Text Label 4300 2150 2    60   ~ 0
FSMC_D9
Text Label 3100 2150 2    60   ~ 0
FSMC_D8
Text Label 4300 2050 2    60   ~ 0
FSMC_D7
Text Label 3100 2050 2    60   ~ 0
FSMC_D6
Text Label 4300 1950 2    60   ~ 0
FSMC_D5
Text Label 3100 1950 2    60   ~ 0
FSMC_D4
Text Label 4300 1850 2    60   ~ 0
FSMC_D3
Text Label 3100 1850 2    60   ~ 0
FSMC_D2
Text Label 4300 1750 2    60   ~ 0
FSMC_D1
Text Label 3100 1750 2    60   ~ 0
FSMC_D0
Text HLabel 1500 1650 0    60   BiDi ~ 0
FSMC_D[0..15]
Entry Wire Line
	1950 1650 2050 1750
Entry Wire Line
	5050 1650 4950 1750
Entry Wire Line
	1950 1750 2050 1850
Entry Wire Line
	5050 1750 4950 1850
Entry Wire Line
	1950 1850 2050 1950
Entry Wire Line
	5050 1850 4950 1950
Entry Wire Line
	1950 1950 2050 2050
Entry Wire Line
	5050 1950 4950 2050
Entry Wire Line
	1950 2050 2050 2150
Entry Wire Line
	5050 2050 4950 2150
Entry Wire Line
	1950 2150 2050 2250
Entry Wire Line
	5050 2150 4950 2250
Entry Wire Line
	1950 2250 2050 2350
Entry Wire Line
	5050 2250 4950 2350
Entry Wire Line
	1950 2350 2050 2450
Entry Wire Line
	5050 2350 4950 2450
$EndSCHEMATC
