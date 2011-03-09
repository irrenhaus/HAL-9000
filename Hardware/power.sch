EESchema Schematic File Version 2  date Mi 09 Mär 2011 16:26:06 CET
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
Sheet 6 11
Title ""
Date "9 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
NoConn ~ 2800 2750
Wire Wire Line
	2700 2450 2700 1900
Connection ~ 7350 1650
Wire Wire Line
	7350 1750 7350 1550
Wire Wire Line
	7750 1050 7950 1050
Wire Wire Line
	2500 1100 2500 1200
Wire Wire Line
	1950 2550 2050 2550
Wire Wire Line
	1500 2100 1350 2100
Connection ~ 2500 3300
Wire Wire Line
	1450 3300 1600 3300
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
	3150 3300 2200 3300
Connection ~ 2850 3300
Wire Wire Line
	2850 3700 2200 3700
Connection ~ 2500 3700
Wire Wire Line
	1350 2100 1350 2550
Wire Wire Line
	2500 1200 2400 1200
Wire Wire Line
	6750 1050 6950 1050
Wire Wire Line
	7850 1650 7850 1050
Connection ~ 7850 1050
$Comp
L BAS40-04 U604
U 1 1 4D7796BD
P 2700 2600
F 0 "U604" H 2920 2590 60  0000 C CNN
F 1 "BAS40-04" H 2940 2680 60  0000 C CNN
	1    2700 2600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR018
U 1 1 4D750FBB
P 7350 2250
F 0 "#PWR018" H 7350 2250 30  0001 C CNN
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
L +5V #PWR019
U 1 1 4D750F8E
P 7950 1050
F 0 "#PWR019" H 7950 1140 20  0001 C CNN
F 1 "+5V" H 7950 1140 30  0000 C CNN
	1    7950 1050
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR020
U 1 1 4D750F83
P 6750 1050
F 0 "#PWR020" H 6750 1000 20  0001 C CNN
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
L +5V #PWR021
U 1 1 4D750F5C
P 2500 1100
F 0 "#PWR021" H 2500 1190 20  0001 C CNN
F 1 "+5V" H 2500 1190 30  0000 C CNN
	1    2500 1100
	1    0    0    -1  
$EndComp
NoConn ~ 3250 1350
NoConn ~ 3250 1200
$Comp
L GND #PWR022
U 1 1 4D750F3F
P 2500 1350
F 0 "#PWR022" H 2500 1350 30  0001 C CNN
F 1 "GND" H 2500 1280 30  0001 C CNN
	1    2500 1350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR023
U 1 1 4D750F3B
P 2500 1450
F 0 "#PWR023" H 2500 1450 30  0001 C CNN
F 1 "GND" H 2500 1380 30  0001 C CNN
	1    2500 1450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR024
U 1 1 4D750F39
P 3250 1450
F 0 "#PWR024" H 3250 1450 30  0001 C CNN
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
L GNDA #PWR025
U 1 1 4D74EFD7
P 2050 2550
F 0 "#PWR025" H 2050 2550 40  0001 C CNN
F 1 "GNDA" H 2050 2480 40  0000 C CNN
	1    2050 2550
	0    -1   -1   0   
$EndComp
Text Notes 1250 2800 0    60   ~ 0
Ferrite Chip Bead\n100Ohm/100MHz
$Comp
L INDUCTOR L601
U 1 1 4D74EF38
P 1650 2550
F 0 "L601" V 1600 2550 40  0000 C CNN
F 1 "100Ohm" V 1750 2550 40  0000 C CNN
	1    1650 2550
	0    1    1    0   
$EndComp
$Comp
L GND #PWR026
U 1 1 4D74EDED
P 2200 3700
F 0 "#PWR026" H 2200 3700 30  0001 C CNN
F 1 "GND" H 2200 3630 30  0001 C CNN
	1    2200 3700
	0    1    1    0   
$EndComp
$Comp
L VAA #PWR612
U 1 1 4D74EDD2
P 3150 3300
F 0 "#PWR612" H 3150 3360 30  0001 C CNN
F 1 "VAA" H 3150 3410 30  0000 C CNN
	1    3150 3300
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L602
U 1 1 4D74EDC3
P 1900 3300
F 0 "L602" V 1850 3300 40  0000 C CNN
F 1 "10uH" V 2000 3300 40  0000 C CNN
F 3 "http://www.farnell.com/datasheets/78322.pdf" H 1900 3300 60  0001 C CNN
	1    1900 3300
	0    1    1    0   
$EndComp
$Comp
L C C602
U 1 1 4D74ED6C
P 2850 3500
F 0 "C602" H 2900 3600 50  0000 L CNN
F 1 "100nF" H 2900 3400 50  0000 L CNN
	1    2850 3500
	1    0    0    -1  
$EndComp
$Comp
L CP1 C601
U 1 1 4D74ED65
P 2500 3500
F 0 "C601" H 2550 3600 50  0000 L CNN
F 1 "10uF" H 2550 3400 50  0000 L CNN
	1    2500 3500
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR027
U 1 1 4D74ED3E
P 1450 3300
F 0 "#PWR027" H 1450 3260 30  0001 C CNN
F 1 "+3.3V" H 1450 3410 30  0000 C CNN
	1    1450 3300
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR028
U 1 1 4D744415
P 5050 3700
F 0 "#PWR028" H 5050 3700 30  0001 C CNN
F 1 "GND" H 5050 3630 30  0001 C CNN
	1    5050 3700
	1    0    0    -1  
$EndComp
Text HLabel 4100 3100 0    60   Input ~ 0
VBUS
$Comp
L +3.3V #PWR029
U 1 1 4D744165
P 6150 3100
F 0 "#PWR029" H 6150 3060 30  0001 C CNN
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
L GND #PWR030
U 1 1 4D744126
P 5050 2250
F 0 "#PWR030" H 5050 2250 30  0001 C CNN
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
L +3.3V #PWR031
U 1 1 4D7440F5
P 5900 1050
F 0 "#PWR031" H 5900 1010 30  0001 C CNN
F 1 "+3.3V" H 5900 1160 30  0000 C CNN
	1    5900 1050
	1    0    0    -1  
$EndComp
$Comp
L +12V #PWR032
U 1 1 4D7440F1
P 4300 1050
F 0 "#PWR032" H 4300 1000 20  0001 C CNN
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
L +12V #PWR033
U 1 1 4D743E7E
P 3300 1800
F 0 "#PWR033" H 3300 1750 20  0001 C CNN
F 1 "+12V" H 3300 1900 30  0000 C CNN
	1    3300 1800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR034
U 1 1 4D743E56
P 3000 2350
F 0 "#PWR034" H 3000 2350 30  0001 C CNN
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
L GND #PWR035
U 1 1 4D743E43
P 2600 2750
F 0 "#PWR035" H 2600 2750 30  0001 C CNN
F 1 "GND" H 2600 2680 30  0001 C CNN
	1    2600 2750
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
L GND #PWR036
U 1 1 4D743D88
P 1500 2100
F 0 "#PWR036" H 1500 2100 30  0001 C CNN
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
L GND #PWR037
U 1 1 4D743777
P 1850 1050
F 0 "#PWR037" H 1850 1050 30  0001 C CNN
F 1 "GND" H 1850 980 30  0001 C CNN
	1    1850 1050
	0    -1   -1   0   
$EndComp
$Comp
L +BATT #PWR038
U 1 1 4D743772
P 1250 1050
F 0 "#PWR038" H 1250 1000 20  0001 C CNN
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
