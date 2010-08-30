EESchema Schematic File Version 2  date Mo 30 Aug 2010 04:26:39 CEST
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
LIBS:bordcomputer-cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 2 3
Title ""
Date "30 aug 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CONN_13X2 P?
U 1 1 4C7B11F5
P 6250 1800
F 0 "P?" H 6250 2500 60  0000 C CNN
F 1 "CONN_13X2" V 6250 1800 50  0000 C CNN
	1    6250 1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 2200 2300 2050
Wire Wire Line
	3850 1800 4250 1800
Wire Wire Line
	3600 2200 3750 2200
Wire Wire Line
	3100 2450 3100 2600
Wire Wire Line
	3100 1200 3100 1350
Wire Wire Line
	3100 1750 3100 1850
Wire Wire Line
	3100 1800 3450 1800
Connection ~ 3100 1800
Wire Wire Line
	4150 2200 4250 2200
Wire Wire Line
	2300 1550 2800 1550
$Comp
L GND #PWR?
U 1 1 4C7B115E
P 3600 2200
F 0 "#PWR?" H 3600 2200 30  0001 C CNN
F 1 "GND" H 3600 2130 30  0001 C CNN
	1    3600 2200
	0    1    1    0   
$EndComp
$Comp
L GND #PWR?
U 1 1 4C7B1159
P 3100 1200
F 0 "#PWR?" H 3100 1200 30  0001 C CNN
F 1 "GND" H 3100 1130 30  0001 C CNN
	1    3100 1200
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR?
U 1 1 4C7B1157
P 2300 2200
F 0 "#PWR?" H 2300 2200 30  0001 C CNN
F 1 "GND" H 2300 2130 30  0001 C CNN
	1    2300 2200
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 4C7B1150
P 3100 2600
F 0 "#PWR?" H 3100 2690 20  0001 C CNN
F 1 "+5V" H 3100 2690 30  0000 C CNN
	1    3100 2600
	-1   0    0    1   
$EndComp
$Comp
L R R?
U 1 1 4C7B1107
P 2300 1800
F 0 "R?" V 2380 1800 50  0000 C CNN
F 1 "470k" V 2300 1800 50  0000 C CNN
	1    2300 1800
	1    0    0    -1  
$EndComp
$Comp
L DIODE D?
U 1 1 4C7B1103
P 4250 2000
F 0 "D?" H 4250 2100 40  0000 C CNN
F 1 "6.2V" H 4250 1900 40  0000 C CNN
	1    4250 2000
	0    -1   -1   0   
$EndComp
$Comp
L DIODE D?
U 1 1 4C7B1101
P 3950 2200
F 0 "D?" H 3950 2300 40  0000 C CNN
F 1 "6.2V" H 3950 2100 40  0000 C CNN
	1    3950 2200
	1    0    0    -1  
$EndComp
$Comp
L ZENER D?
U 1 1 4C7B10FE
P 3650 1800
F 0 "D?" H 3650 1900 50  0000 C CNN
F 1 "BAT54" H 3650 1700 40  0000 C CNN
	1    3650 1800
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L?
U 1 1 4C7B10FB
P 3100 2150
F 0 "L?" V 3050 2150 40  0000 C CNN
F 1 "820uH" V 3200 2150 40  0000 C CNN
	1    3100 2150
	1    0    0    -1  
$EndComp
$Comp
L MOSFET_N Q?
U 1 1 4C7B10E7
P 3000 1550
F 0 "Q?" H 3010 1720 60  0000 R CNN
F 1 "BSS123" H 3010 1400 60  0000 R CNN
	1    3000 1550
	1    0    0    -1  
$EndComp
$EndSCHEMATC
