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
Sheet 3 9
Title ""
Date "16 jul 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Connection ~ 4850 2250
Wire Wire Line
	4850 2050 4850 2250
Connection ~ 2550 1500
Wire Wire Line
	4700 1500 4700 1550
Connection ~ 2550 2450
Wire Wire Line
	2550 2050 2550 2450
Wire Wire Line
	2400 1450 2400 1550
Wire Wire Line
	4350 2550 5300 2550
Wire Wire Line
	4350 2450 5300 2450
Wire Wire Line
	4350 2350 5300 2350
Wire Wire Line
	4350 2250 5300 2250
Wire Wire Line
	4500 2150 4350 2150
Wire Wire Line
	2900 2150 3050 2150
Wire Wire Line
	2300 2250 3050 2250
Wire Wire Line
	2300 2350 3050 2350
Wire Wire Line
	2300 2450 3050 2450
Wire Wire Line
	2300 2550 3050 2550
Wire Wire Line
	2400 2050 2400 2350
Connection ~ 2400 2350
Wire Wire Line
	4700 2350 4700 2050
Connection ~ 4700 2350
Wire Wire Line
	2550 1500 2550 1550
Connection ~ 2400 1500
Wire Wire Line
	2400 1500 4850 1500
Wire Wire Line
	4850 1500 4850 1550
Connection ~ 4700 1500
$Comp
L R R4
U 1 1 4E175E60
P 4850 1800
F 0 "R4" V 4930 1800 50  0000 C CNN
F 1 "10k" V 4850 1800 50  0000 C CNN
	1    4850 1800
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 4E1759C8
P 4700 1800
F 0 "R3" V 4780 1800 50  0000 C CNN
F 1 "10k" V 4700 1800 50  0000 C CNN
	1    4700 1800
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 4E1759C4
P 2550 1800
F 0 "R2" V 2630 1800 50  0000 C CNN
F 1 "10k" V 2550 1800 50  0000 C CNN
	1    2550 1800
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR06
U 1 1 4E1759B0
P 2400 1450
F 0 "#PWR06" H 2400 1410 30  0001 C CNN
F 1 "+3.3V" H 2400 1560 30  0000 C CNN
	1    2400 1450
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 4E17593B
P 2400 1800
F 0 "R1" V 2480 1800 50  0000 C CNN
F 1 "10k" V 2400 1800 50  0000 C CNN
	1    2400 1800
	1    0    0    -1  
$EndComp
Text HLabel 2300 2550 0    60   Output ~ 0
TX
Text HLabel 2300 2450 0    60   Input ~ 0
TDI
Text HLabel 2300 2350 0    60   Output ~ 0
~TRST
Text HLabel 2300 2250 0    60   Output ~ 0
~RST
Text HLabel 5300 2550 2    60   Input ~ 0
RX
Text HLabel 5300 2450 2    60   Output ~ 0
TDO
Text HLabel 5300 2350 2    60   Output ~ 0
TCK
Text HLabel 5300 2250 2    60   Output ~ 0
TMS
$Comp
L GND #PWR07
U 1 1 4E1758CF
P 4500 2150
F 0 "#PWR07" H 4500 2150 30  0001 C CNN
F 1 "GND" H 4500 2080 30  0001 C CNN
	1    4500 2150
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR08
U 1 1 4E1758CA
P 2900 2150
F 0 "#PWR08" H 2900 2110 30  0001 C CNN
F 1 "+3.3V" H 2900 2260 30  0000 C CNN
	1    2900 2150
	1    0    0    -1  
$EndComp
$Comp
L ARM_JTAG_10PIN P1
U 1 1 4E1758C3
P 3700 2350
F 0 "P1" H 3700 2000 60  0000 C CNN
F 1 "ARM_JTAG_10PIN" H 3700 2700 60  0000 C CNN
	1    3700 2350
	1    0    0    -1  
$EndComp
$EndSCHEMATC
