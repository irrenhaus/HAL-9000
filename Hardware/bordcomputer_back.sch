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
Sheet 3 3
Title ""
Date "30 aug 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text GLabel 1150 1300 0    60   Output ~ 0
SPI2_MISO
Wire Wire Line
	1150 1300 1650 1300
Wire Wire Line
	1650 1900 1650 1950
Wire Wire Line
	1650 1950 1150 1950
Wire Wire Line
	1650 1800 1150 1800
Wire Wire Line
	1650 1600 1500 1600
Connection ~ 1550 700 
Wire Wire Line
	1650 700  1550 700 
Wire Wire Line
	1650 900  1550 900 
Wire Wire Line
	1550 900  1550 650 
Wire Wire Line
	1550 650  1500 650 
Wire Wire Line
	1650 1200 1450 1200
Wire Wire Line
	1450 1200 1450 1050
Wire Wire Line
	1450 1050 1150 1050
Wire Wire Line
	550  1050 650  1050
Wire Wire Line
	1000 2300 1050 2300
Wire Wire Line
	1050 2300 1050 2400
Wire Wire Line
	600  850  600  900 
Wire Wire Line
	600  900  650  900 
Wire Wire Line
	1150 900  1500 900 
Wire Wire Line
	1500 900  1500 1100
Wire Wire Line
	1500 1100 1650 1100
Wire Wire Line
	1650 800  1550 800 
Connection ~ 1550 800 
Wire Wire Line
	1650 1400 1500 1400
Wire Wire Line
	1650 1700 1500 1700
Wire Wire Line
	1150 2150 1000 2150
Wire Wire Line
	1650 1500 1150 1500
$Comp
L +3.3V #PWR071
U 1 1 4C77F26C
P 1500 1600
F 0 "#PWR071" H 1500 1560 30  0001 C CNN
F 1 "+3.3V" H 1500 1710 30  0000 C CNN
	1    1500 1600
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR072
U 1 1 4C77F269
P 1500 1400
F 0 "#PWR072" H 1500 1400 30  0001 C CNN
F 1 "GND" H 1500 1330 30  0001 C CNN
	1    1500 1400
	0    1    1    0   
$EndComp
$Comp
L GND #PWR073
U 1 1 4C77F265
P 1500 1700
F 0 "#PWR073" H 1500 1700 30  0001 C CNN
F 1 "GND" H 1500 1630 30  0001 C CNN
	1    1500 1700
	0    1    1    0   
$EndComp
$Comp
L GND #PWR074
U 1 1 4C77F248
P 1500 650
F 0 "#PWR074" H 1500 650 30  0001 C CNN
F 1 "GND" H 1500 580 30  0001 C CNN
	1    1500 650 
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR075
U 1 1 4C77F21D
P 550 1050
F 0 "#PWR075" H 550 1010 30  0001 C CNN
F 1 "+3.3V" H 550 1160 30  0000 C CNN
	1    550  1050
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR076
U 1 1 4C77F217
P 600 850
F 0 "#PWR076" H 600 810 30  0001 C CNN
F 1 "+3.3V" H 600 960 30  0000 C CNN
	1    600  850 
	1    0    0    -1  
$EndComp
$Comp
L R R16
U 1 1 4C77F20B
P 900 1050
F 0 "R16" V 980 1050 50  0000 C CNN
F 1 "10k" V 900 1050 50  0000 C CNN
	1    900  1050
	0    1    1    0   
$EndComp
$Comp
L R R15
U 1 1 4C77F206
P 900 900
F 0 "R15" V 980 900 50  0000 C CNN
F 1 "10k" V 900 900 50  0000 C CNN
	1    900  900 
	0    1    1    0   
$EndComp
$Comp
L GND #PWR077
U 1 1 4C77F1B9
P 1050 2400
F 0 "#PWR077" H 1050 2400 30  0001 C CNN
F 1 "GND" H 1050 2330 30  0001 C CNN
	1    1050 2400
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR078
U 1 1 4C77F1B5
P 1150 2150
F 0 "#PWR078" H 1150 2110 30  0001 C CNN
F 1 "+3.3V" H 1150 2260 30  0000 C CNN
	1    1150 2150
	0    1    1    0   
$EndComp
Text GLabel 1000 2300 0    60   Input ~ 0
GND
Text GLabel 1000 2150 0    60   Input ~ 0
+3.3V
$Comp
L SDBMF X2
U 1 1 4C77F180
P 1850 1200
F 0 "X2" H 1350 2050 50  0000 L BNN
F 1 "SDBMF" H 1350 500 50  0000 L BNN
F 2 "farnell-SDBMF-009XXBXX2" H 1850 1350 50  0001 C CNN
	1    1850 1200
	-1   0    0    1   
$EndComp
Text GLabel 1150 1950 0    60   Input ~ 0
SD_SELECT
Text GLabel 1150 1500 0    60   Input ~ 0
SPI2_SCK
Text GLabel 1150 1800 0    60   Input ~ 0
SPI2_MOSI
$EndSCHEMATC
