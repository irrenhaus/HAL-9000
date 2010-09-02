EESchema Schematic File Version 2  date Mi 01 Sep 2010 16:24:44 CEST
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
LIBS:welectronic
LIBS:pinhead
LIBS:MI0283QT-2
LIBS:display-cache
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
Text Label 4250 4800 2    60   ~ 0
VCC
Text Label 4250 5100 2    60   ~ 0
GND
Text Label 4250 5000 2    60   ~ 0
VCC
Text Label 4250 4900 2    60   ~ 0
VCC
Text Label 1800 3550 2    60   ~ 0
VCC
Text Label 1800 3350 2    60   ~ 0
VCC
Text Label 4250 900  2    60   ~ 0
GND
Text Label 1800 3750 2    60   ~ 0
GND
Text Label 3450 4300 0    60   ~ 0
LED4
Text Label 3450 4200 0    60   ~ 0
LED3
Text Label 1800 4300 2    60   ~ 0
LED2
Text Label 1800 4200 2    60   ~ 0
LED1
Wire Wire Line
	2200 4300 1800 4300
Wire Wire Line
	3000 4300 3450 4300
Wire Wire Line
	4700 1800 4250 1800
Wire Wire Line
	4700 1600 4250 1600
Wire Wire Line
	4700 1400 4250 1400
Wire Wire Line
	4700 1200 4250 1200
Wire Wire Line
	4700 1000 4250 1000
Wire Wire Line
	4700 4100 4250 4100
Wire Wire Line
	4700 4300 4250 4300
Wire Wire Line
	4700 4400 4250 4400
Wire Wire Line
	4700 4600 4250 4600
Wire Wire Line
	4700 4900 4250 4900
Wire Wire Line
	4700 5100 4250 5100
Wire Wire Line
	4700 5400 4250 5400
Wire Wire Line
	4250 5200 4700 5200
Wire Wire Line
	3000 3650 3450 3650
Wire Wire Line
	3000 3450 3450 3450
Wire Wire Line
	3000 3250 3450 3250
Wire Wire Line
	3000 3050 3450 3050
Wire Wire Line
	3000 2850 3450 2850
Wire Wire Line
	2200 3650 1800 3650
Wire Wire Line
	2200 3450 1800 3450
Wire Wire Line
	2200 3250 1800 3250
Wire Wire Line
	2200 3050 1800 3050
Wire Wire Line
	2200 2950 1800 2950
Wire Wire Line
	2200 2850 1800 2850
Wire Wire Line
	2200 3150 1800 3150
Wire Wire Line
	2200 3350 1800 3350
Wire Wire Line
	2200 3550 1800 3550
Wire Wire Line
	2200 3750 1800 3750
Wire Wire Line
	3450 2950 3000 2950
Wire Wire Line
	3000 3150 3450 3150
Wire Wire Line
	3000 3350 3450 3350
Wire Wire Line
	3000 3550 3450 3550
Wire Wire Line
	3000 3750 3450 3750
Wire Wire Line
	4700 5300 4250 5300
Wire Wire Line
	4700 5500 4250 5500
Wire Wire Line
	4700 5000 4250 5000
Wire Wire Line
	4700 4800 4250 4800
Wire Wire Line
	4700 4500 4250 4500
Wire Wire Line
	4700 4200 4250 4200
Wire Wire Line
	4700 900  4250 900 
Wire Wire Line
	4700 1100 4250 1100
Wire Wire Line
	4700 1300 4250 1300
Wire Wire Line
	4700 1500 4250 1500
Wire Wire Line
	4700 1700 4250 1700
Wire Wire Line
	3000 4200 3450 4200
Wire Wire Line
	2200 4200 1800 4200
$Comp
L CONN_2X2 P2
U 1 1 4C7D2E07
P 2600 4250
F 0 "P2" H 2600 4400 50  0000 C CNN
F 1 "CONN_2X2" H 2610 4120 40  0000 C CNN
	1    2600 4250
	1    0    0    -1  
$EndComp
Text Label 4250 5500 2    60   ~ 0
Y-
Text Label 4250 5400 2    60   ~ 0
X-
Text Label 4250 5300 2    60   ~ 0
Y+
Text Label 4250 5200 2    60   ~ 0
X+
Text Label 4250 4600 2    60   ~ 0
CS
Text Label 4250 4500 2    60   ~ 0
RS
Text Label 4250 4400 2    60   ~ 0
SCK
Text Label 4250 4300 2    60   ~ 0
RD
Text Label 4250 4200 2    60   ~ 0
MOSI
Text Label 4250 4100 2    60   ~ 0
MISO
Text Label 4250 1800 2    60   ~ 0
RESET
Text Label 4250 1700 2    60   ~ 0
IM3
Text Label 4250 1600 2    60   ~ 0
IM2
Text Label 4250 1500 2    60   ~ 0
IM1
Text Label 4250 1400 2    60   ~ 0
IM0
Text Label 4250 1300 2    60   ~ 0
LED4
Text Label 4250 1200 2    60   ~ 0
LED3
Text Label 4250 1100 2    60   ~ 0
LED2
Text Label 4250 1000 2    60   ~ 0
LED1
Text Label 3450 3750 0    60   ~ 0
Y-
Text Label 3450 3650 0    60   ~ 0
X-
Text Label 3450 3550 0    60   ~ 0
Y+
Text Label 3450 3450 0    60   ~ 0
X+
Text Label 3450 3350 0    60   ~ 0
RD
Text Label 3450 3250 0    60   ~ 0
IM3
Text Label 3450 3150 0    60   ~ 0
IM2
Text Label 3450 3050 0    60   ~ 0
IM1
Text Label 3450 2950 0    60   ~ 0
IM0
Text Label 3450 2850 0    60   ~ 0
RS
Text Label 1800 3650 2    60   ~ 0
GND
Text Label 1800 3450 2    60   ~ 0
VCC
Text Label 1800 3250 2    60   ~ 0
SCK
Text Label 1800 3150 2    60   ~ 0
MISO
Text Label 1800 3050 2    60   ~ 0
MOSI
Text Label 1800 2950 2    60   ~ 0
CS
Text Label 1800 2850 2    60   ~ 0
RESET
$Comp
L CONN_10X2 P1
U 1 1 4C7D2B7A
P 2600 3300
F 0 "P1" H 2600 3850 60  0000 C CNN
F 1 "CONN_10X2" V 2600 3200 50  0000 C CNN
	1    2600 3300
	1    0    0    -1  
$EndComp
$Comp
L MI0283QT-2 U1
U 1 1 4C7D2B30
P 5450 3200
F 0 "U1" H 5450 3100 50  0000 C CNN
F 1 "MI0283QT-2" H 5450 3300 50  0000 C CNN
	1    5450 3200
	1    0    0    -1  
$EndComp
$EndSCHEMATC
