EESchema Schematic File Version 2  date So 17 Jul 2011 02:24:17 CEST
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
Sheet 7 9
Title ""
Date "16 jul 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Connection ~ 3500 1450
Wire Wire Line
	3750 1450 3400 1450
Wire Wire Line
	3400 1850 3500 1850
Wire Wire Line
	3500 1850 3500 2400
Wire Wire Line
	6100 1600 5600 1600
Wire Wire Line
	4500 1500 4100 1500
Wire Wire Line
	4100 1500 4100 1550
Wire Wire Line
	4100 1550 3400 1550
Wire Wire Line
	3500 1450 3500 1350
Wire Wire Line
	4500 1700 4100 1700
Wire Wire Line
	4100 1700 4100 1650
Wire Wire Line
	4100 1650 3400 1650
Wire Wire Line
	4400 1600 4500 1600
Wire Wire Line
	3500 2300 2800 2300
Wire Wire Line
	2800 2300 2800 2250
Connection ~ 3500 2300
$Comp
L PWR_FLAG #FLG030
U 1 1 4E17C6DB
P 3750 1450
F 0 "#FLG030" H 3750 1720 30  0001 C CNN
F 1 "PWR_FLAG" H 3750 1680 30  0000 C CNN
	1    3750 1450
	1    0    0    -1  
$EndComp
NoConn ~ 3400 1750
$Comp
L GND #PWR031
U 1 1 4E1763AA
P 3500 2400
F 0 "#PWR031" H 3500 2400 30  0001 C CNN
F 1 "GND" H 3500 2330 30  0001 C CNN
	1    3500 2400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR032
U 1 1 4E1763A2
P 4400 1600
F 0 "#PWR032" H 4400 1600 30  0001 C CNN
F 1 "GND" H 4400 1530 30  0001 C CNN
	1    4400 1600
	0    1    1    0   
$EndComp
$Comp
L +5V #PWR033
U 1 1 4E17639B
P 6100 1600
F 0 "#PWR033" H 6100 1690 20  0001 C CNN
F 1 "+5V" H 6100 1690 30  0000 C CNN
	1    6100 1600
	1    0    0    -1  
$EndComp
Text HLabel 5600 1700 2    60   BiDi ~ 0
USB_DP
Text HLabel 5600 1500 2    60   BiDi ~ 0
USB_DM
$Comp
L USBLC6-2 U6
U 1 1 4E176372
P 5050 1600
F 0 "U6" H 5050 1350 60  0000 C CNN
F 1 "USBLC6-2" H 5050 1850 60  0000 C CNN
	1    5050 1600
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR034
U 1 1 4E176348
P 3500 1350
F 0 "#PWR034" H 3500 1440 20  0001 C CNN
F 1 "+5V" H 3500 1440 30  0000 C CNN
	1    3500 1350
	1    0    0    -1  
$EndComp
$Comp
L MINIUSB-B U5
U 1 1 4E176340
P 3050 1800
F 0 "U5" H 3050 1600 60  0000 C CNN
F 1 "MINIUSB-B" H 2900 2300 60  0000 C CNN
	1    3050 1800
	1    0    0    -1  
$EndComp
$EndSCHEMATC
