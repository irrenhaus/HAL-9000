EESchema Schematic File Version 2  date Mi 01 Sep 2010 19:34:14 CEST
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
LIBS:farnell
LIBS:STM32F10xVx
LIBS:AD7843
LIBS:bordcomputer-cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 2 3
Title ""
Date "1 sep 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	1900 4550 2300 4550
Wire Wire Line
	2300 4550 2300 4300
Wire Wire Line
	2300 4300 2350 4300
Wire Wire Line
	1900 4350 2200 4350
Wire Wire Line
	2200 4350 2200 4100
Wire Wire Line
	2200 4100 2350 4100
Wire Wire Line
	1900 4150 2100 4150
Wire Wire Line
	2100 4150 2100 3900
Wire Wire Line
	2100 3900 2350 3900
Wire Wire Line
	1900 3850 2000 3850
Wire Wire Line
	2000 3850 2000 3700
Wire Wire Line
	2000 3700 2350 3700
Wire Wire Line
	1900 3550 1950 3550
Wire Wire Line
	1950 3550 1950 3500
Wire Wire Line
	1950 3500 2350 3500
Wire Wire Line
	3700 2950 3300 2950
Wire Wire Line
	3300 2950 3300 3400
Wire Wire Line
	3300 3400 3150 3400
Wire Wire Line
	3700 3250 3400 3250
Wire Wire Line
	3400 3250 3400 3600
Wire Wire Line
	3400 3600 3150 3600
Wire Wire Line
	3700 3550 3500 3550
Wire Wire Line
	3500 3550 3500 3800
Wire Wire Line
	3500 3800 3150 3800
Wire Wire Line
	3700 3850 3600 3850
Wire Wire Line
	3600 3850 3600 4000
Wire Wire Line
	3600 4000 3150 4000
Wire Wire Line
	3700 4150 3650 4150
Wire Wire Line
	3650 4150 3650 4200
Wire Wire Line
	3650 4200 3150 4200
Wire Wire Line
	3150 4850 3150 4900
Wire Wire Line
	3150 4900 3350 4900
Wire Wire Line
	2350 4850 2350 4900
Wire Wire Line
	2350 4900 2150 4900
Wire Wire Line
	850  2650 1250 2650
Wire Wire Line
	900  2300 1250 2300
Wire Wire Line
	900  2150 1250 2150
Wire Wire Line
	900  2450 1250 2450
Wire Wire Line
	850  2800 1250 2800
Wire Wire Line
	2150 4700 2350 4700
Wire Wire Line
	2350 4700 2350 4750
Wire Wire Line
	3350 4700 3150 4700
Wire Wire Line
	3150 4700 3150 4750
Wire Wire Line
	3150 4300 3700 4300
Wire Wire Line
	3150 4100 3650 4100
Wire Wire Line
	3650 4100 3650 4000
Wire Wire Line
	3650 4000 3700 4000
Wire Wire Line
	3150 3900 3550 3900
Wire Wire Line
	3550 3900 3550 3700
Wire Wire Line
	3550 3700 3700 3700
Wire Wire Line
	3150 3700 3450 3700
Wire Wire Line
	3450 3700 3450 3400
Wire Wire Line
	3450 3400 3700 3400
Wire Wire Line
	3150 3500 3350 3500
Wire Wire Line
	3350 3500 3350 3100
Wire Wire Line
	3350 3100 3700 3100
Wire Wire Line
	2350 3400 1900 3400
Wire Wire Line
	2350 3600 1950 3600
Wire Wire Line
	1950 3600 1950 3700
Wire Wire Line
	1950 3700 1900 3700
Wire Wire Line
	2350 3800 2050 3800
Wire Wire Line
	2050 3800 2050 4000
Wire Wire Line
	2050 4000 1900 4000
Wire Wire Line
	2350 4000 2150 4000
Wire Wire Line
	2150 4000 2150 4250
Wire Wire Line
	2150 4250 1900 4250
Wire Wire Line
	2350 4200 2250 4200
Wire Wire Line
	2250 4200 2250 4450
Wire Wire Line
	2250 4450 1900 4450
Text Label 1900 4550 2    60   ~ 0
LEDGND
$Comp
L CONN_2X2 P13
U 1 1 4C7B7383
P 2750 4800
F 0 "P13" H 2750 4950 50  0000 C CNN
F 1 "DISPLAY_LED" H 2760 4670 40  0000 C CNN
	1    2750 4800
	1    0    0    -1  
$EndComp
$Comp
L CONN_10X2 P12
U 1 1 4C7B737C
P 2750 3850
F 0 "P12" H 2750 4400 60  0000 C CNN
F 1 "DISPLAY_CTRL" V 2750 3750 50  0000 C CNN
	1    2750 3850
	1    0    0    -1  
$EndComp
Text GLabel 3350 4900 2    60   Input ~ 0
LED4PWM
Text GLabel 3350 4700 2    60   Input ~ 0
LED3PWM
Text GLabel 2150 4900 0    60   Input ~ 0
LED2PWM
Text GLabel 2150 4700 0    60   Input ~ 0
LED1PWM
Text Label 1250 2800 0    60   ~ 0
LEDGND
Text Label 1250 2650 0    60   ~ 0
GND
$Comp
L GND #PWR057
U 1 1 4C7B2898
P 850 2800
F 0 "#PWR057" H 850 2800 30  0001 C CNN
F 1 "GND" H 850 2730 30  0001 C CNN
	1    850  2800
	0    1    1    0   
$EndComp
$Comp
L GND #PWR058
U 1 1 4C7B2894
P 850 2650
F 0 "#PWR058" H 850 2650 30  0001 C CNN
F 1 "GND" H 850 2580 30  0001 C CNN
	1    850  2650
	0    1    1    0   
$EndComp
Text Label 1250 2450 0    60   ~ 0
VCI
Text Label 1250 2300 0    60   ~ 0
VCC
Text Label 1250 2150 0    60   ~ 0
IOVCC
$Comp
L +3.3V #PWR059
U 1 1 4C7B282B
P 900 2450
F 0 "#PWR059" H 900 2410 30  0001 C CNN
F 1 "+3.3V" H 900 2560 30  0000 C CNN
	1    900  2450
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR060
U 1 1 4C7B281D
P 900 2300
F 0 "#PWR060" H 900 2260 30  0001 C CNN
F 1 "+3.3V" H 900 2410 30  0000 C CNN
	1    900  2300
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR061
U 1 1 4C7B2819
P 900 2150
F 0 "#PWR061" H 900 2110 30  0001 C CNN
F 1 "+3.3V" H 900 2260 30  0000 C CNN
	1    900  2150
	0    -1   -1   0   
$EndComp
Text Label 1900 4450 2    60   ~ 0
GND
Text Label 1900 4350 2    60   ~ 0
VCI
Text Label 1900 4250 2    60   ~ 0
VCC
Text Label 1900 4150 2    60   ~ 0
IOVCC
Text GLabel 1900 3850 0    60   Output ~ 0
SPI1_MISO
Text GLabel 3700 4300 2    60   Output ~ 0
Y-
Text GLabel 3700 4000 2    60   Output ~ 0
Y+
Text GLabel 3700 4150 2    60   Output ~ 0
X-
Text GLabel 3700 3850 2    60   Output ~ 0
X+
Text GLabel 1900 4000 0    60   Input ~ 0
SPI1_SCK
Text GLabel 1900 3550 0    60   Input ~ 0
CS
Text GLabel 1900 3700 0    60   Input ~ 0
SPI1_MOSI
Text GLabel 1900 3400 0    60   Input ~ 0
RESET
Text GLabel 3700 2950 2    60   Input ~ 0
RS
Text GLabel 3700 3550 2    60   Input ~ 0
IM3
Text GLabel 3700 3400 2    60   Input ~ 0
IM2
Text GLabel 3700 3250 2    60   Input ~ 0
IM1
Text GLabel 3700 3100 2    60   Input ~ 0
IM0
Text GLabel 3700 3700 2    60   Input ~ 0
RD
$EndSCHEMATC
