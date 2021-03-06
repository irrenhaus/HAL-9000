EESchema Schematic File Version 2  date Mi 18 Mai 2011 21:50:26 CEST
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
LIBS:sensorboard-cache
EELAYER 25  0
EELAYER END
$Descr A4 11700 8267
encoding utf-8
Sheet 4 8
Title ""
Date "18 may 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	3200 2550 3200 2650
Wire Wire Line
	3200 2650 3300 2650
Wire Wire Line
	3000 2550 3000 2800
Wire Wire Line
	3000 2800 3100 2800
Wire Wire Line
	3100 2800 3100 2850
Wire Wire Line
	3100 2850 3300 2850
Wire Wire Line
	1050 3650 1050 3600
Wire Wire Line
	1600 3350 1200 3350
Wire Wire Line
	1200 3350 1200 3200
Wire Wire Line
	1200 3200 1050 3200
Wire Wire Line
	2700 3350 2700 3200
Connection ~ 3000 3050
Wire Wire Line
	3000 3200 2800 3200
Wire Wire Line
	3000 3200 3000 2900
Wire Wire Line
	2700 2550 2700 2900
Wire Wire Line
	2700 2900 2500 2900
Wire Wire Line
	2550 2750 2600 2750
Wire Wire Line
	2600 2750 2600 2550
Wire Wire Line
	2800 2550 2800 2900
Wire Wire Line
	2800 2900 3000 2900
Wire Wire Line
	2700 3200 2500 3200
Wire Wire Line
	2500 3200 2500 2900
Connection ~ 2500 3050
Wire Wire Line
	2700 3450 2800 3450
Wire Wire Line
	2800 3450 2800 3200
Wire Wire Line
	1600 3450 1200 3450
Wire Wire Line
	1200 3450 1200 3600
Wire Wire Line
	1200 3600 1050 3600
Wire Wire Line
	1050 3200 1050 3150
Wire Wire Line
	2900 2550 2900 2850
Wire Wire Line
	2900 2850 3050 2850
Wire Wire Line
	3050 2850 3050 2950
Wire Wire Line
	3050 2950 3300 2950
Wire Wire Line
	3100 2550 3100 2750
Wire Wire Line
	3100 2750 3300 2750
Text HLabel 3300 2950 2    60   BiDi ~ 0
~SPI_CS
$Comp
L +3.3V #PWR39
U 1 1 4D77EA4B
P 1050 3650
F 0 "#PWR39" H 1050 3610 30  0001 C CNN
F 1 "+3.3V" H 1050 3760 30  0000 C CNN
	1    1050 3650
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR38
U 1 1 4D77EA44
P 1050 3150
F 0 "#PWR38" H 1050 3150 30  0001 C CNN
F 1 "GND" H 1050 3080 30  0001 C CNN
	1    1050 3150
	-1   0    0    1   
$EndComp
Text HLabel 3300 2650 2    60   Output ~ 0
SPI_MISO
Text HLabel 3300 2750 2    60   Input ~ 0
SPI_MOSI
Text HLabel 3300 2850 2    60   Input ~ 0
SPI_SCK
$Comp
L C C401
U 1 1 4D77E951
P 1050 3400
F 0 "C401" H 1100 3500 50  0000 L CNN
F 1 "100nF" H 1100 3300 50  0000 L CNN
	1    1050 3400
	-1   0    0    1   
$EndComp
Text HLabel 1600 3550 0    60   Output ~ 0
CAN_RX
Text HLabel 1600 3250 0    60   Input ~ 0
CAN_TX
$Comp
L SN65HVD232 U401
U 1 1 4D77E926
P 2150 3400
F 0 "U401" H 2150 3100 60  0000 C CNN
F 1 "SN65HVD232" H 2150 3700 60  0000 C CNN
	1    2150 3400
	1    0    0    -1  
$EndComp
$Comp
L R R401
U 1 1 4D77E587
P 2750 3050
F 0 "R401" V 2830 3050 50  0000 C CNN
F 1 "120" V 2750 3050 50  0000 C CNN
	1    2750 3050
	0    1    1    0   
$EndComp
Text HLabel 2550 2750 0    60   Output ~ 0
EXTVCC
$Comp
L GND #PWR40
U 1 1 4D77DFC0
P 2500 2550
F 0 "#PWR40" H 2500 2550 30  0001 C CNN
F 1 "GND" H 2500 2480 30  0001 C CNN
	1    2500 2550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR41
U 1 1 4D77DFB7
P 3400 1750
F 0 "#PWR41" H 3400 1750 30  0001 C CNN
F 1 "GND" H 3400 1680 30  0001 C CNN
	1    3400 1750
	0    -1   -1   0   
$EndComp
$Comp
L RJ45 J401
U 1 1 4D77DFB3
P 2850 2100
F 0 "J401" H 3050 2600 60  0000 C CNN
F 1 "RJ45" H 2700 2600 60  0000 C CNN
	1    2850 2100
	1    0    0    -1  
$EndComp
$EndSCHEMATC
