EESchema Schematic File Version 2  date Mi 01 Sep 2010 20:35:21 CEST
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
LIBS:netzteil-cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 1 1
Title "noname.sch"
Date "1 sep 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	4100 2950 4100 4400
Wire Wire Line
	1350 3150 1600 3150
Connection ~ 4100 2950
Wire Wire Line
	5100 2950 3950 2950
Wire Wire Line
	3400 2950 3550 2950
Wire Wire Line
	2600 2950 2600 3000
Connection ~ 1350 3150
Connection ~ 6250 3800
Wire Wire Line
	6250 3800 6250 3500
Wire Wire Line
	6250 3500 6550 3500
Connection ~ 6900 3500
Connection ~ 6300 3750
Wire Wire Line
	6900 3750 6300 3750
Wire Wire Line
	6900 3750 6900 3500
Wire Wire Line
	5900 4400 7800 4400
Wire Wire Line
	6100 4850 4900 4850
Connection ~ 4900 4400
Wire Wire Line
	4900 4400 4900 4450
Wire Wire Line
	5250 3800 5250 3950
Wire Wire Line
	5250 3800 4550 3800
Connection ~ 4700 2950
Connection ~ 6550 3500
Wire Wire Line
	7800 3400 7800 3500
Wire Wire Line
	7800 4700 7800 4800
Connection ~ 6300 3800
Wire Wire Line
	4700 2950 4700 3000
Wire Wire Line
	4700 3800 4700 3400
Wire Wire Line
	6200 2950 6200 3050
Connection ~ 6200 2950
Wire Wire Line
	5500 4700 5500 5000
Wire Wire Line
	6550 2800 6550 3100
Connection ~ 6550 2950
Wire Wire Line
	7800 4400 7800 4500
Wire Wire Line
	5900 2950 7800 2950
Wire Wire Line
	7800 2950 7800 3200
Wire Wire Line
	1350 2950 1350 2750
Connection ~ 4700 3800
Wire Wire Line
	5250 3950 5750 3950
Wire Wire Line
	5750 3950 5750 3800
Connection ~ 5500 3950
Wire Wire Line
	5750 3800 6400 3800
Connection ~ 5500 4850
Wire Wire Line
	6100 4250 6100 4450
Connection ~ 6100 4400
Wire Wire Line
	7800 4800 6150 4800
Wire Wire Line
	6150 4800 6150 4950
Wire Wire Line
	6150 4950 5500 4950
Connection ~ 5500 4950
Wire Wire Line
	7800 3500 6900 3500
Wire Wire Line
	6300 3750 6300 3800
Wire Wire Line
	1600 2950 1900 2950
Wire Wire Line
	1900 3450 2600 3450
Wire Wire Line
	2600 3450 2600 3400
Wire Wire Line
	2800 2950 2400 2950
Connection ~ 2600 2950
Wire Wire Line
	4100 4400 5100 4400
Wire Wire Line
	1600 3150 1600 2750
Connection ~ 1600 2950
Wire Wire Line
	6200 3550 5600 3550
Wire Wire Line
	5600 3550 5600 3450
Wire Wire Line
	5600 3450 5500 3450
$Comp
L +12V #PWR01
U 1 1 4C6D54E5
P 1600 2750
F 0 "#PWR01" H 1600 2700 20  0001 C CNN
F 1 "+12V" H 1600 2850 30  0000 C CNN
	1    1600 2750
	1    0    0    -1  
$EndComp
$Comp
L DIODE D1
U 1 1 4C6D0455
P 3750 2950
F 0 "D1" H 3750 3050 40  0000 C CNN
F 1 "1N4001" H 3750 2850 40  0000 C CNN
	1    3750 2950
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L1
U 1 1 4C6D0431
P 3100 2950
F 0 "L1" V 3050 2950 40  0000 C CNN
F 1 "47uH" V 3200 2950 40  0000 C CNN
	1    3100 2950
	0    1    1    0   
$EndComp
$Comp
L GND #PWR02
U 1 1 4C6D0422
P 1900 3450
F 0 "#PWR02" H 1900 3450 30  0001 C CNN
F 1 "GND" H 1900 3380 30  0001 C CNN
	1    1900 3450
	0    1    1    0   
$EndComp
$Comp
L ZENER D2
U 1 1 4C6D0400
P 2600 3200
F 0 "D2" H 2600 3300 50  0000 C CNN
F 1 "1,5KE 22A" H 2600 3100 40  0000 C CNN
	1    2600 3200
	0    -1   -1   0   
$EndComp
$Comp
L FUSE F1
U 1 1 4C6D03CC
P 2150 2950
F 0 "F1" H 2250 3000 40  0000 C CNN
F 1 "1A" H 2050 2900 40  0000 C CNN
	1    2150 2950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR03
U 1 1 4C6A055C
P 4550 3800
F 0 "#PWR03" H 4550 3800 30  0001 C CNN
F 1 "GND" H 4550 3730 30  0001 C CNN
	1    4550 3800
	0    1    1    0   
$EndComp
$Comp
L GND #PWR05
U 1 1 4C69FE98
P 1350 2750
F 0 "#PWR05" H 1350 2750 30  0001 C CNN
F 1 "GND" H 1350 2680 30  0001 C CNN
	1    1350 2750
	-1   0    0    1   
$EndComp
$Comp
L CONN_2 P3
U 1 1 4C69FE80
P 1000 3050
F 0 "P3" V 950 3050 40  0000 C CNN
F 1 "Bordnetz" V 1050 3050 40  0000 C CNN
	1    1000 3050
	-1   0    0    1   
$EndComp
$Comp
L +5V #PWR06
U 1 1 4C69FE59
P 6100 4250
F 0 "#PWR06" H 6100 4340 20  0001 C CNN
F 1 "+5V" H 6100 4340 30  0000 C CNN
	1    6100 4250
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR07
U 1 1 4C69FE52
P 6550 2800
F 0 "#PWR07" H 6550 2760 30  0001 C CNN
F 1 "+3.3V" H 6550 2910 30  0000 C CNN
	1    6550 2800
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P4
U 1 1 4C69FE28
P 8150 4600
F 0 "P4" V 8100 4600 40  0000 C CNN
F 1 "5V" V 8200 4600 40  0000 C CNN
	1    8150 4600
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P2
U 1 1 4C69FE1D
P 8150 3300
F 0 "P2" V 8100 3300 40  0000 C CNN
F 1 "3v3" V 8200 3300 40  0000 C CNN
	1    8150 3300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR09
U 1 1 4C69FDDD
P 5500 5000
F 0 "#PWR09" H 5500 5000 30  0001 C CNN
F 1 "GND" H 5500 4930 30  0001 C CNN
	1    5500 5000
	1    0    0    -1  
$EndComp
$Comp
L C C4
U 1 1 4C69FDB7
P 6550 3300
F 0 "C4" H 6600 3400 50  0000 L CNN
F 1 "100nF" H 6600 3200 50  0000 L CNN
	1    6550 3300
	1    0    0    -1  
$EndComp
$Comp
L C C6
U 1 1 4C69FDA9
P 6100 4650
F 0 "C6" H 6150 4750 50  0000 L CNN
F 1 "100nF" H 6150 4550 50  0000 L CNN
	1    6100 4650
	1    0    0    -1  
$EndComp
$Comp
L C C5
U 1 1 4C69FDA6
P 4900 4650
F 0 "C5" H 4950 4750 50  0000 L CNN
F 1 "100nF" H 4950 4550 50  0000 L CNN
	1    4900 4650
	1    0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 4C69FD01
P 5500 3700
F 0 "R4" V 5580 3700 50  0000 C CNN
F 1 "220" V 5500 3700 50  0000 C CNN
	1    5500 3700
	-1   0    0    1   
$EndComp
$Comp
L C C3
U 1 1 4C69FC33
P 4700 3200
F 0 "C3" H 4750 3300 50  0000 L CNN
F 1 "100nF" H 4750 3100 50  0000 L CNN
	1    4700 3200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR010
U 1 1 4C69FC27
P 6400 3800
F 0 "#PWR010" H 6400 3800 30  0001 C CNN
F 1 "GND" H 6400 3730 30  0001 C CNN
	1    6400 3800
	0    -1   -1   0   
$EndComp
$Comp
L R R3
U 1 1 4C69FC20
P 6200 3300
F 0 "R3" V 6280 3300 50  0000 C CNN
F 1 "160" V 6200 3300 50  0000 C CNN
	1    6200 3300
	1    0    0    -1  
$EndComp
$Comp
L 7805 U3
U 1 1 4C69F806
P 5500 4450
F 0 "U3" H 5650 4254 60  0000 C CNN
F 1 "7805" H 5500 4650 60  0000 C CNN
	1    5500 4450
	1    0    0    -1  
$EndComp
$Comp
L LM317 U2
U 1 1 4C69F7F0
P 5500 3100
F 0 "U2" H 5500 3400 60  0000 C CNN
F 1 "LM317 (3v3)" H 5550 2850 60  0000 L CNN
	1    5500 3100
	1    0    0    -1  
$EndComp
$EndSCHEMATC
