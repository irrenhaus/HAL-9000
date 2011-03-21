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
Sheet 7 9
Title ""
Date "21 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	3100 1900 3200 1900
Connection ~ 2450 1400
Wire Wire Line
	2450 1400 2450 1900
Wire Wire Line
	3000 1500 2650 1500
Wire Wire Line
	2650 1500 2650 1400
Wire Wire Line
	2650 1400 1900 1400
Wire Wire Line
	1900 1300 3000 1300
Wire Wire Line
	1900 1200 1900 1150
Wire Wire Line
	1900 1150 4500 1150
Wire Wire Line
	4500 1150 4500 1400
Wire Wire Line
	4500 1400 4100 1400
Wire Wire Line
	2450 1900 2600 1900
Text HLabel 3200 1900 2    60   Input ~ 0
USBEN
$Comp
L GND #PWR040
U 1 1 4D743606
P 2450 2400
F 0 "#PWR040" H 2450 2400 30  0001 C CNN
F 1 "GND" H 2450 2330 30  0001 C CNN
	1    2450 2400
	1    0    0    -1  
$EndComp
$Comp
L R R902
U 1 1 4D7435FB
P 2850 1900
F 0 "R902" V 2930 1900 50  0000 C CNN
F 1 "1k5" V 2850 1900 50  0000 C CNN
	1    2850 1900
	0    1    1    0   
$EndComp
$Comp
L R R901
U 1 1 4D7435F8
P 2450 2150
F 0 "R901" V 2530 2150 50  0000 C CNN
F 1 "4k7" V 2450 2150 50  0000 C CNN
	1    2450 2150
	1    0    0    -1  
$EndComp
Text HLabel 4500 1200 2    60   Output ~ 0
VBUS
Text HLabel 4100 1500 2    60   BiDi ~ 0
USBDP
Text HLabel 4100 1300 2    60   BiDi ~ 0
USBDM
$Comp
L GND #PWR041
U 1 1 4D74357C
P 3000 1400
F 0 "#PWR041" H 3000 1400 30  0001 C CNN
F 1 "GND" H 3000 1330 30  0001 C CNN
	1    3000 1400
	0    1    1    0   
$EndComp
$Comp
L USBLC6-2 U902
U 1 1 4D74356C
P 3550 1400
F 0 "U902" H 3550 1150 60  0000 C CNN
F 1 "USBLC6-2" H 3550 1650 60  0000 C CNN
	1    3550 1400
	1    0    0    -1  
$EndComp
NoConn ~ 1900 1600
$Comp
L GND #PWR042
U 1 1 4D7434C4
P 1900 1500
F 0 "#PWR042" H 1900 1500 30  0001 C CNN
F 1 "GND" H 1900 1430 30  0001 C CNN
	1    1900 1500
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR043
U 1 1 4D7434C1
P 1300 2000
F 0 "#PWR043" H 1300 2000 30  0001 C CNN
F 1 "GND" H 1300 1930 30  0001 C CNN
	1    1300 2000
	1    0    0    -1  
$EndComp
$Comp
L MINIUSB-B U901
U 1 1 4D7434BC
P 1550 1550
F 0 "U901" H 1550 1350 60  0000 C CNN
F 1 "MINIUSB-B" H 1400 2050 60  0000 C CNN
	1    1550 1550
	1    0    0    -1  
$EndComp
$EndSCHEMATC
