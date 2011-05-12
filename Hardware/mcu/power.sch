EESchema Schematic File Version 2  date Do 12 Mai 2011 03:11:48 CEST
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
Sheet 5 9
Title ""
Date "11 may 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 1650 1800 1    60   Input ~ 0
EXTVCC
Connection ~ 1650 1900
Wire Wire Line
	1650 1800 1650 1900
Connection ~ 7350 1650
Wire Wire Line
	7350 1750 7350 1550
Wire Wire Line
	7750 1050 7950 1050
Wire Wire Line
	2500 1100 2500 1200
Wire Wire Line
	1500 2100 1350 2100
Wire Wire Line
	5050 3600 5050 3700
Wire Wire Line
	4100 3100 4650 3100
Wire Wire Line
	6000 3100 6000 3250
Wire Wire Line
	6000 3250 5450 3250
Connection ~ 5050 1650
Wire Wire Line
	5050 1750 5050 1550
Connection ~ 5750 1050
Wire Wire Line
	5700 1650 5750 1650
Wire Wire Line
	5750 1650 5750 1050
Connection ~ 3000 1900
Wire Wire Line
	3300 1800 3300 1900
Wire Wire Line
	3300 1900 2500 1900
Wire Wire Line
	3000 1900 3000 1950
Wire Wire Line
	1350 1900 2000 1900
Connection ~ 2700 1900
Wire Wire Line
	5450 1050 5900 1050
Wire Wire Line
	5050 1650 5200 1650
Wire Wire Line
	4300 1050 4650 1050
Wire Wire Line
	6150 3100 5450 3100
Connection ~ 6000 3100
Wire Wire Line
	2500 1200 2400 1200
Wire Wire Line
	6750 1050 6950 1050
Wire Wire Line
	7850 1650 7850 1050
Connection ~ 7850 1050
Wire Wire Line
	2700 1900 2700 2000
$Comp
L GND #PWR018
U 1 1 4D77DEDA
P 2700 2400
F 0 "#PWR018" H 2700 2400 30  0001 C CNN
F 1 "GND" H 2700 2330 30  0001 C CNN
	1    2700 2400
	1    0    0    -1  
$EndComp
$Comp
L ZENER D501
U 1 1 4D77DED1
P 2700 2200
F 0 "D501" H 2700 2300 50  0000 C CNN
F 1 "20V" H 2700 2100 40  0000 C CNN
	1    2700 2200
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR019
U 1 1 4D750FBB
P 7350 2250
F 0 "#PWR019" H 7350 2250 30  0001 C CNN
F 1 "GND" H 7350 2180 30  0001 C CNN
	1    7350 2250
	1    0    0    -1  
$EndComp
$Comp
L R R603
U 1 1 4D750FB1
P 7350 2000
F 0 "R603" V 7430 2000 50  0000 C CNN
F 1 "720" V 7350 2000 50  0000 C CNN
	1    7350 2000
	1    0    0    -1  
$EndComp
$Comp
L R R604
U 1 1 4D750FAC
P 7600 1650
F 0 "R604" V 7680 1650 50  0000 C CNN
F 1 "240" V 7600 1650 50  0000 C CNN
	1    7600 1650
	0    1    1    0   
$EndComp
$Comp
L +5V #PWR020
U 1 1 4D750F8E
P 7950 1050
F 0 "#PWR020" H 7950 1140 20  0001 C CNN
F 1 "+5V" H 7950 1140 30  0000 C CNN
	1    7950 1050
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR021
U 1 1 4D750F83
P 6750 1050
F 0 "#PWR021" H 6750 1000 20  0001 C CNN
F 1 "+12V" H 6750 1150 30  0000 C CNN
	1    6750 1050
	1    0    0    -1  
$EndComp
$Comp
L LM317 U603
U 1 1 4D750F7D
P 7350 1200
F 0 "U603" H 7350 1500 60  0000 C CNN
F 1 "LM317" H 7400 950 60  0000 L CNN
	1    7350 1200
	1    0    0    -1  
$EndComp
Text Label 2400 1200 2    60   ~ 0
VBUS
Text Label 4250 3100 0    60   ~ 0
VBUS
$Comp
L +5V #PWR022
U 1 1 4D750F5C
P 2500 1100
F 0 "#PWR022" H 2500 1190 20  0001 C CNN
F 1 "+5V" H 2500 1190 30  0000 C CNN
	1    2500 1100
	1    0    0    -1  
$EndComp
NoConn ~ 3250 1350
NoConn ~ 3250 1200
$Comp
L GND #PWR023
U 1 1 4D750F3F
P 2500 1350
F 0 "#PWR023" H 2500 1350 30  0001 C CNN
F 1 "GND" H 2500 1280 30  0001 C CNN
	1    2500 1350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR024
U 1 1 4D750F3B
P 2500 1450
F 0 "#PWR024" H 2500 1450 30  0001 C CNN
F 1 "GND" H 2500 1380 30  0001 C CNN
	1    2500 1450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR025
U 1 1 4D750F39
P 3250 1450
F 0 "#PWR025" H 3250 1450 30  0001 C CNN
F 1 "GND" H 3250 1380 30  0001 C CNN
	1    3250 1450
	0    -1   -1   0   
$EndComp
$Comp
L USB J601
U 1 1 4D750F34
P 2900 1000
F 0 "J601" H 2850 1400 60  0000 C CNN
F 1 "USB-A" V 2650 1150 60  0000 C CNN
	1    2900 1000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR026
U 1 1 4D744415
P 5050 3700
F 0 "#PWR026" H 5050 3700 30  0001 C CNN
F 1 "GND" H 5050 3630 30  0001 C CNN
	1    5050 3700
	1    0    0    -1  
$EndComp
Text HLabel 4100 3100 0    60   Input ~ 0
VBUS
$Comp
L +3.3V #PWR027
U 1 1 4D744165
P 6150 3100
F 0 "#PWR027" H 6150 3060 30  0001 C CNN
F 1 "+3.3V" H 6150 3210 30  0000 C CNN
	1    6150 3100
	1    0    0    -1  
$EndComp
$Comp
L LM1117 U602
U 1 1 4D744156
P 5050 3250
F 0 "U602" H 5050 3550 60  0000 C CNN
F 1 "LM1117-3.3" H 5100 3000 60  0000 L CNN
	1    5050 3250
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR028
U 1 1 4D744126
P 5050 2250
F 0 "#PWR028" H 5050 2250 30  0001 C CNN
F 1 "GND" H 5050 2180 30  0001 C CNN
	1    5050 2250
	1    0    0    -1  
$EndComp
$Comp
L R R601
U 1 1 4D74410A
P 5050 2000
F 0 "R601" V 5130 2000 50  0000 C CNN
F 1 "360" V 5050 2000 50  0000 C CNN
	1    5050 2000
	1    0    0    -1  
$EndComp
$Comp
L R R602
U 1 1 4D744104
P 5450 1650
F 0 "R602" V 5530 1650 50  0000 C CNN
F 1 "220" V 5450 1650 50  0000 C CNN
	1    5450 1650
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR029
U 1 1 4D7440F5
P 5900 1050
F 0 "#PWR029" H 5900 1010 30  0001 C CNN
F 1 "+3.3V" H 5900 1160 30  0000 C CNN
	1    5900 1050
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR030
U 1 1 4D7440F1
P 4300 1050
F 0 "#PWR030" H 4300 1000 20  0001 C CNN
F 1 "+12V" H 4300 1150 30  0000 C CNN
	1    4300 1050
	1    0    0    -1  
$EndComp
$Comp
L LM317 U601
U 1 1 4D7440E6
P 5050 1200
F 0 "U601" H 5050 1500 60  0000 C CNN
F 1 "LM317" H 5100 950 60  0000 L CNN
	1    5050 1200
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR031
U 1 1 4D743E7E
P 3300 1800
F 0 "#PWR031" H 3300 1750 20  0001 C CNN
F 1 "+12V" H 3300 1900 30  0000 C CNN
	1    3300 1800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR032
U 1 1 4D743E56
P 3000 2350
F 0 "#PWR032" H 3000 2350 30  0001 C CNN
F 1 "GND" H 3000 2280 30  0001 C CNN
	1    3000 2350
	1    0    0    -1  
$EndComp
$Comp
L C C603
U 1 1 4D743E47
P 3000 2150
F 0 "C603" H 3050 2250 50  0000 L CNN
F 1 "10uF" H 3050 2050 50  0000 L CNN
	1    3000 2150
	1    0    0    -1  
$EndComp
$Comp
L FUSE F601
U 1 1 4D743DAA
P 2250 1900
F 0 "F601" H 2350 1950 40  0000 C CNN
F 1 "5A Fuse" H 2150 1850 40  0000 C CNN
F 2 "littelfuse" H 2250 1900 60  0001 C CNN
F 3 "http://www.farnell.com/datasheets/48464.pdf" H 2250 1900 60  0001 C CNN
	1    2250 1900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR033
U 1 1 4D743D88
P 1500 2100
F 0 "#PWR033" H 1500 2100 30  0001 C CNN
F 1 "GND" H 1500 2030 30  0001 C CNN
	1    1500 2100
	0    -1   -1   0   
$EndComp
$Comp
L CONN_2 P601
U 1 1 4D743D7E
P 1000 2000
F 0 "P601" V 950 2000 40  0000 C CNN
F 1 "MainPwr" V 1050 2000 40  0000 C CNN
	1    1000 2000
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR034
U 1 1 4D743777
P 1850 1050
F 0 "#PWR034" H 1850 1050 30  0001 C CNN
F 1 "GND" H 1850 980 30  0001 C CNN
	1    1850 1050
	0    -1   -1   0   
$EndComp
$Comp
L +BATT #PWR035
U 1 1 4D743772
P 1250 1050
F 0 "#PWR035" H 1250 1000 20  0001 C CNN
F 1 "+BATT" H 1250 1150 30  0000 C CNN
	1    1250 1050
	1    0    0    -1  
$EndComp
$Comp
L BATTERY BT601
U 1 1 4D74376A
P 1550 1050
F 0 "BT601" H 1550 1250 50  0000 C CNN
F 1 "BATTERY" H 1550 860 50  0000 C CNN
	1    1550 1050
	1    0    0    -1  
$EndComp
$EndSCHEMATC
