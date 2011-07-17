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
Sheet 5 9
Title ""
Date "16 jul 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Connection ~ 4000 1300
Wire Wire Line
	4150 1300 3850 1300
Wire Wire Line
	3350 1550 3850 1550
Wire Wire Line
	3850 1550 3850 1700
Wire Wire Line
	3850 1700 4000 1700
Wire Wire Line
	2250 1550 2000 1550
Wire Wire Line
	2000 1550 2000 1600
Wire Wire Line
	2000 1600 1750 1600
Wire Wire Line
	3350 1650 3600 1650
Wire Wire Line
	3600 1350 3350 1350
Wire Wire Line
	2250 1450 2000 1450
Wire Wire Line
	2000 1450 2000 1400
Wire Wire Line
	2000 1400 1750 1400
Wire Wire Line
	3350 1450 3850 1450
Wire Wire Line
	3850 1450 3850 1300
Wire Wire Line
	4000 1700 4000 1850
$Comp
L GND #PWR015
U 1 1 4E17C681
P 4000 1850
F 0 "#PWR015" H 4000 1850 30  0001 C CNN
F 1 "GND" H 4000 1780 30  0001 C CNN
	1    4000 1850
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR016
U 1 1 4E17C680
P 4150 1300
F 0 "#PWR016" H 4150 1260 30  0001 C CNN
F 1 "+3.3V" H 4150 1410 30  0000 C CNN
	1    4150 1300
	1    0    0    -1  
$EndComp
Text Label 1750 1600 0    60   ~ 0
CANH
Text Label 1750 1400 0    60   ~ 0
CANL
$Comp
L C C2
U 1 1 4E17654A
P 4000 1500
F 0 "C2" H 4050 1600 50  0000 L CNN
F 1 "100nF" H 4050 1400 50  0000 L CNN
	1    4000 1500
	1    0    0    -1  
$EndComp
$Comp
L SN65HVD232 U2
U 1 1 4E176520
P 2800 1500
F 0 "U2" H 2800 1200 60  0000 C CNN
F 1 "SN65HVD232" H 2800 1800 60  0000 C CNN
	1    2800 1500
	-1   0    0    1   
$EndComp
Text HLabel 3600 1650 2    60   Output ~ 0
TX
Text HLabel 3600 1350 2    60   Input ~ 0
RX
$Comp
L CONN_2 P3
U 1 1 4E175197
P 1400 1500
F 0 "P3" V 1350 1500 40  0000 C CNN
F 1 "CAN" V 1450 1500 40  0000 C CNN
	1    1400 1500
	-1   0    0    1   
$EndComp
$EndSCHEMATC
