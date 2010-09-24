EESchema Schematic File Version 2  date Fr 24 Sep 2010 05:02:11 CEST
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
LIBS:welectronic
LIBS:LM75CIM
LIBS:AS7C34098A
LIBS:CONN_17x2
LIBS:LM3940
LIBS:mainboard-cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 2 4
Title ""
Date "24 sep 2010"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	3000 1500 3200 1500
Wire Notes Line
	500  500  500  1800
Wire Notes Line
	500  500  3600 500 
Wire Notes Line
	3600 500  3600 1800
Wire Notes Line
	3600 1800 500  1800
Connection ~ 3150 1050
Wire Wire Line
	3050 1050 3150 1050
Wire Wire Line
	3050 850  3300 850 
Wire Wire Line
	1000 950  1550 950 
Wire Wire Line
	1000 850  1550 850 
Wire Wire Line
	1000 1150 1550 1150
Wire Wire Line
	3050 950  3150 950 
Wire Wire Line
	3150 950  3150 1300
Wire Wire Line
	3050 1150 3150 1150
Connection ~ 3150 1150
Wire Wire Line
	2450 1500 2600 1500
$Comp
L +3.3V #PWR039
U 1 1 4C96A16E
P 2450 1500
F 0 "#PWR039" H 2450 1460 30  0001 C CNN
F 1 "+3.3V" H 2450 1610 30  0000 C CNN
	1    2450 1500
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR040
U 1 1 4C96A16A
P 3200 1500
F 0 "#PWR040" H 3200 1500 30  0001 C CNN
F 1 "GND" H 3200 1430 30  0001 C CNN
	1    3200 1500
	0    -1   -1   0   
$EndComp
$Comp
L C C21
U 1 1 4C96A165
P 2800 1500
F 0 "C21" H 2850 1600 50  0000 L CNN
F 1 "100nF" H 2850 1400 50  0000 L CNN
	1    2800 1500
	0    1    1    0   
$EndComp
Text Notes 900  1700 0    90   ~ 0
Temperature Sensor
$Comp
L +3.3V #PWR041
U 1 1 4C969FB2
P 3300 850
F 0 "#PWR041" H 3300 810 30  0001 C CNN
F 1 "+3.3V" H 3300 960 30  0000 C CNN
	1    3300 850 
	0    1    1    0   
$EndComp
$Comp
L GND #PWR042
U 1 1 4C969FAE
P 3150 1300
F 0 "#PWR042" H 3150 1300 30  0001 C CNN
F 1 "GND" H 3150 1230 30  0001 C CNN
	1    3150 1300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR043
U 1 1 4C969FA8
P 1000 1150
F 0 "#PWR043" H 1000 1150 30  0001 C CNN
F 1 "GND" H 1000 1080 30  0001 C CNN
	1    1000 1150
	0    1    1    0   
$EndComp
NoConn ~ 1550 1050
Text GLabel 1000 950  0    45   BiDi ~ 0
I2C2_SCL
Text GLabel 1000 850  0    45   BiDi ~ 0
I2C2_SDA
$Comp
L LM75CIM U5
U 1 1 4C969F76
P 2300 1000
F 0 "U5" H 2300 900 50  0000 C CNN
F 1 "LM75CIMM-3" H 2300 1100 50  0000 C CNN
	1    2300 1000
	1    0    0    -1  
$EndComp
$EndSCHEMATC
