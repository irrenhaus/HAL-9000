EESchema Schematic File Version 2  date Do 17 Mär 2011 20:34:15 CET
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
LIBS:sensorboard-cache
EELAYER 25  0
EELAYER END
$Descr A4 11700 8267
encoding utf-8
Sheet 7 8
Title ""
Date "17 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L +3.3V #PWR054
U 1 1 4D815394
P 7550 4750
F 0 "#PWR054" H 7550 4710 30  0001 C CNN
F 1 "+3.3V" H 7550 4860 30  0000 C CNN
	1    7550 4750
	0    -1   1    0   
$EndComp
$Comp
L GND #PWR055
U 1 1 4D815393
P 7550 4550
F 0 "#PWR055" H 7550 4550 30  0001 C CNN
F 1 "GND" H 7550 4480 30  0001 C CNN
	1    7550 4550
	0    1    -1   0   
$EndComp
Wire Wire Line
	7650 4550 7550 4550
Wire Wire Line
	7550 4750 7650 4750
$Comp
L DS1820 U709
U 1 1 4D815376
P 8150 4650
F 0 "U709" H 8150 4850 60  0000 C CNN
F 1 "DS1820" H 8150 4450 60  0000 C CNN
	1    8150 4650
	1    0    0    -1  
$EndComp
$Comp
L DS1820 U708
U 1 1 4D81536C
P 8150 4100
F 0 "U708" H 8150 4300 60  0000 C CNN
F 1 "DS1820" H 8150 3900 60  0000 C CNN
	1    8150 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7550 4200 7650 4200
Connection ~ 9050 4650
Wire Wire Line
	8650 4650 9150 4650
Wire Wire Line
	9350 5850 9950 5850
Wire Wire Line
	8900 3300 8400 3300
Wire Wire Line
	8400 3300 8400 2850
Wire Wire Line
	8400 2850 6600 2850
Wire Wire Line
	8900 2950 8550 2950
Wire Wire Line
	8550 2950 8550 2650
Wire Wire Line
	8550 2650 6250 2650
Wire Wire Line
	8900 2600 8700 2600
Wire Wire Line
	8700 2600 8700 2450
Wire Wire Line
	8700 2450 6250 2450
Wire Wire Line
	8900 2250 6600 2250
Wire Wire Line
	6600 2850 6600 5550
Wire Wire Line
	6250 2650 6250 3600
Wire Wire Line
	6400 1550 6400 2350
Wire Wire Line
	6600 2250 6600 650 
Wire Wire Line
	4150 4600 6400 4600
Wire Wire Line
	4150 2350 6250 2350
Wire Wire Line
	6600 650  4150 650 
Connection ~ 3050 1550
Wire Wire Line
	3050 1600 3050 1550
Wire Wire Line
	2950 1550 3650 1550
Connection ~ 3100 2350
Wire Wire Line
	3100 2150 3100 2350
Wire Wire Line
	9050 4100 9050 3950
Connection ~ 3050 650 
Wire Wire Line
	3650 650  2950 650 
Connection ~ 3300 650 
Wire Wire Line
	3050 750  3050 650 
Connection ~ 3550 650 
Wire Wire Line
	9050 4650 9050 4500
Wire Wire Line
	3550 850  3550 650 
Wire Wire Line
	3300 650  3300 850 
Wire Wire Line
	3300 850  3400 850 
Wire Wire Line
	3400 3800 3300 3800
Wire Wire Line
	3650 3600 2950 3600
Wire Wire Line
	3300 3800 3300 3600
Wire Wire Line
	3550 3600 3550 3800
Connection ~ 3550 3600
Wire Wire Line
	3050 3600 3050 3700
Connection ~ 3300 3600
Connection ~ 3050 3600
Wire Wire Line
	4100 3800 4050 3800
Wire Wire Line
	4100 4800 4050 4800
Connection ~ 3050 4600
Wire Wire Line
	3650 4600 2950 4600
Connection ~ 3300 4600
Wire Wire Line
	3050 4700 3050 4600
Connection ~ 3550 4600
Wire Wire Line
	3550 4800 3550 4600
Wire Wire Line
	3300 4600 3300 4800
Wire Wire Line
	3300 4800 3400 4800
Wire Wire Line
	3400 5750 3300 5750
Wire Wire Line
	3650 5550 2950 5550
Wire Wire Line
	3300 5750 3300 5550
Wire Wire Line
	3550 5550 3550 5750
Connection ~ 3550 5550
Wire Wire Line
	3050 5550 3050 5650
Connection ~ 3300 5550
Connection ~ 3050 5550
Wire Wire Line
	4100 5750 4050 5750
Wire Wire Line
	4150 6700 4100 6700
Connection ~ 3100 6500
Wire Wire Line
	3700 6500 3000 6500
Connection ~ 3350 6500
Wire Wire Line
	3100 6600 3100 6500
Connection ~ 3600 6500
Wire Wire Line
	3600 6700 3600 6500
Wire Wire Line
	3350 6500 3350 6700
Wire Wire Line
	3350 6700 3450 6700
Wire Wire Line
	3400 2550 3300 2550
Wire Wire Line
	3300 2550 3300 2350
Wire Wire Line
	3550 2350 3550 2550
Connection ~ 3550 2350
Wire Wire Line
	2950 2350 3650 2350
Wire Wire Line
	3050 2350 3050 2450
Connection ~ 3300 2350
Connection ~ 3050 2350
Wire Wire Line
	4100 2550 4050 2550
Wire Wire Line
	3350 1550 3350 1650
Connection ~ 3350 1550
Wire Wire Line
	2450 1700 2750 1700
Wire Wire Line
	2750 1700 2750 1600
Wire Wire Line
	2750 1600 3000 1600
Wire Wire Line
	3000 1600 3000 1550
Connection ~ 3000 1550
Wire Wire Line
	6400 1550 4150 1550
Wire Wire Line
	6250 3600 4150 3600
Wire Wire Line
	6600 5550 4150 5550
Wire Wire Line
	4200 6500 6750 6500
Wire Wire Line
	6250 2350 6250 2450
Wire Wire Line
	6400 4600 6400 2750
Wire Wire Line
	6750 6500 6750 2950
Wire Wire Line
	6750 2950 8100 2950
Wire Wire Line
	6400 2350 8900 2350
Wire Wire Line
	8900 2350 8900 2450
Wire Wire Line
	8100 2550 8650 2550
Wire Wire Line
	8650 2550 8650 2800
Wire Wire Line
	8650 2800 8900 2800
Wire Wire Line
	6400 2750 8500 2750
Wire Wire Line
	8500 2750 8500 3150
Wire Wire Line
	8500 3150 8900 3150
Wire Wire Line
	8100 2950 8100 3500
Wire Wire Line
	8100 3500 8900 3500
Wire Wire Line
	8600 6050 8500 6050
Wire Wire Line
	8500 6050 8500 5850
Wire Wire Line
	8750 6050 8750 5850
Connection ~ 8750 5850
Wire Wire Line
	8250 5950 8250 5850
Connection ~ 8500 5850
Wire Wire Line
	8850 5850 8150 5850
Connection ~ 8250 5850
Wire Wire Line
	9300 6050 9250 6050
Wire Wire Line
	8650 4100 9150 4100
Connection ~ 9050 4100
Wire Wire Line
	7650 4000 7550 4000
$Comp
L +12V #PWR056
U 1 1 4D8150C5
P 9950 5850
F 0 "#PWR056" H 9950 5800 20  0001 C CNN
F 1 "+12V" H 9950 5950 30  0000 C CNN
	1    9950 5850
	1    0    0    -1  
$EndComp
Text HLabel 8150 5850 0    60   Output ~ 0
SupplyVoltage
Text Notes 9400 5800 0    60   ~ 0
(Analog)
$Comp
L GNDA #PWR057
U 1 1 4D8150C4
P 8250 6350
F 0 "#PWR057" H 8250 6350 40  0001 C CNN
F 1 "GNDA" H 8250 6280 40  0000 C CNN
	1    8250 6350
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR058
U 1 1 4D8150C3
P 8500 6350
F 0 "#PWR058" H 8500 6350 40  0001 C CNN
F 1 "GNDA" H 8500 6280 40  0000 C CNN
	1    8500 6350
	1    0    0    -1  
$EndComp
$Comp
L BAS40-04 U710
U 1 1 4D8150C2
P 8600 6200
F 0 "U710" H 8820 6190 60  0000 C CNN
F 1 "BAS40-04" H 9100 6150 60  0000 C CNN
	1    8600 6200
	1    0    0    -1  
$EndComp
$Comp
L VAA #PWR737
U 1 1 4D8150C1
P 8700 6350
F 0 "#PWR737" H 8700 6410 30  0001 C CNN
F 1 "VAA" H 8700 6460 30  0000 C CNN
	1    8700 6350
	0    1    1    0   
$EndComp
$Comp
L R R719
U 1 1 4D8150C0
P 9100 5850
F 0 "R719" V 9180 5850 50  0000 C CNN
F 1 "10k" V 9100 5850 50  0000 C CNN
	1    9100 5850
	0    1    1    0   
$EndComp
$Comp
L R R718
U 1 1 4D8150BF
P 9000 6050
F 0 "R718" V 9080 6050 50  0000 C CNN
F 1 "2k7" V 9000 6050 50  0000 C CNN
	1    9000 6050
	0    1    1    0   
$EndComp
$Comp
L C C708
U 1 1 4D8150BE
P 8250 6150
F 0 "C708" H 8300 6250 50  0000 L CNN
F 1 "100nF" H 8300 6050 50  0000 L CNN
	1    8250 6150
	-1   0    0    1   
$EndComp
$Comp
L GNDA #PWR059
U 1 1 4D8150BD
P 9300 6050
F 0 "#PWR059" H 9300 6050 40  0001 C CNN
F 1 "GNDA" H 9300 5980 40  0000 C CNN
	1    9300 6050
	0    -1   -1   0   
$EndComp
$Comp
L CONN_2 P704
U 1 1 4D7D1170
P 9250 3400
F 0 "P704" V 9200 3400 40  0000 C CNN
F 1 "sens4" V 9300 3400 40  0000 C CNN
	1    9250 3400
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P703
U 1 1 4D7D116D
P 9250 3050
F 0 "P703" V 9200 3050 40  0000 C CNN
F 1 "sens3" V 9300 3050 40  0000 C CNN
	1    9250 3050
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P702
U 1 1 4D7D116A
P 9250 2700
F 0 "P702" V 9200 2700 40  0000 C CNN
F 1 "sens2" V 9300 2700 40  0000 C CNN
	1    9250 2700
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P701
U 1 1 4D7D1167
P 9250 2350
F 0 "P701" V 9200 2350 40  0000 C CNN
F 1 "sens1" V 9300 2350 40  0000 C CNN
	1    9250 2350
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR060
U 1 1 4D783225
P 4050 850
F 0 "#PWR060" H 4050 810 30  0001 C CNN
F 1 "+3.3V" H 4050 960 30  0000 C CNN
	1    4050 850 
	0    1    1    0   
$EndComp
$Comp
L GNDA #PWR061
U 1 1 4D754ABE
P 4150 6700
F 0 "#PWR061" H 4150 6700 40  0001 C CNN
F 1 "GNDA" H 4150 6630 40  0000 C CNN
	1    4150 6700
	0    -1   -1   0   
$EndComp
$Comp
L GNDA #PWR062
U 1 1 4D754ABB
P 4100 5750
F 0 "#PWR062" H 4100 5750 40  0001 C CNN
F 1 "GNDA" H 4100 5680 40  0000 C CNN
	1    4100 5750
	0    -1   -1   0   
$EndComp
$Comp
L GNDA #PWR063
U 1 1 4D754AB8
P 4100 4800
F 0 "#PWR063" H 4100 4800 40  0001 C CNN
F 1 "GNDA" H 4100 4730 40  0000 C CNN
	1    4100 4800
	0    -1   -1   0   
$EndComp
$Comp
L GNDA #PWR064
U 1 1 4D754AB5
P 4100 3800
F 0 "#PWR064" H 4100 3800 40  0001 C CNN
F 1 "GNDA" H 4100 3730 40  0000 C CNN
	1    4100 3800
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR065
U 1 1 4D7548B9
P 3050 2000
F 0 "#PWR065" H 3050 2000 30  0001 C CNN
F 1 "GND" H 3050 1930 30  0001 C CNN
	1    3050 2000
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR066
U 1 1 4D7548B3
P 3450 1950
F 0 "#PWR066" H 3450 1910 30  0001 C CNN
F 1 "+3.3V" H 3450 2060 30  0000 C CNN
	1    3450 1950
	0    1    1    0   
$EndComp
$Comp
L GND #PWR067
U 1 1 4D7548B0
P 3250 1950
F 0 "#PWR067" H 3250 1950 30  0001 C CNN
F 1 "GND" H 3250 1880 30  0001 C CNN
	1    3250 1950
	1    0    0    -1  
$EndComp
$Comp
L BAS40-04 U701
U 1 1 4D754892
P 3350 1800
F 0 "U701" H 3570 1790 60  0000 C CNN
F 1 "BAS40-04" H 3650 1900 60  0000 C CNN
	1    3350 1800
	1    0    0    -1  
$EndComp
$Comp
L C C702
U 1 1 4D75488B
P 3050 1800
F 0 "C702" H 3100 1900 50  0000 L CNN
F 1 "100nF" H 3100 1700 50  0000 L CNN
	1    3050 1800
	-1   0    0    1   
$EndComp
$Comp
L R R710
U 1 1 4D754875
P 3900 1550
F 0 "R710" V 3980 1550 50  0000 C CNN
F 1 "120" V 3900 1550 50  0000 C CNN
	1    3900 1550
	0    1    1    0   
$EndComp
$Comp
L R R711
U 1 1 4D75485F
P 3900 2350
F 0 "R711" V 3980 2350 50  0000 C CNN
F 1 "10k" V 3900 2350 50  0000 C CNN
	1    3900 2350
	0    1    1    0   
$EndComp
$Comp
L R R704
U 1 1 4D75485E
P 3800 2550
F 0 "R704" V 3880 2550 50  0000 C CNN
F 1 "2k7" V 3800 2550 50  0000 C CNN
	1    3800 2550
	0    1    1    0   
$EndComp
$Comp
L C C703
U 1 1 4D75485D
P 3050 2650
F 0 "C703" H 3100 2750 50  0000 L CNN
F 1 "100nF" H 3100 2550 50  0000 L CNN
	1    3050 2650
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR068
U 1 1 4D75485C
P 4100 2550
F 0 "#PWR068" H 4100 2550 30  0001 C CNN
F 1 "GND" H 4100 2480 30  0001 C CNN
	1    4100 2550
	0    -1   -1   0   
$EndComp
$Comp
L BAS40-04 U703
U 1 1 4D75485B
P 3400 2700
F 0 "U703" H 3620 2690 60  0000 C CNN
F 1 "BAS40-04" H 3900 2650 60  0000 C CNN
	1    3400 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR069
U 1 1 4D75485A
P 3050 2850
F 0 "#PWR069" H 3050 2850 30  0001 C CNN
F 1 "GND" H 3050 2780 30  0001 C CNN
	1    3050 2850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR070
U 1 1 4D754859
P 3300 2850
F 0 "#PWR070" H 3300 2850 30  0001 C CNN
F 1 "GND" H 3300 2780 30  0001 C CNN
	1    3300 2850
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR071
U 1 1 4D754858
P 3500 2850
F 0 "#PWR071" H 3500 2810 30  0001 C CNN
F 1 "+3.3V" H 3500 2960 30  0000 C CNN
	1    3500 2850
	0    1    1    0   
$EndComp
$Comp
L C C707
U 1 1 4D754803
P 3100 6800
F 0 "C707" H 3150 6900 50  0000 L CNN
F 1 "100nF" H 3150 6700 50  0000 L CNN
	1    3100 6800
	-1   0    0    1   
$EndComp
$Comp
L R R708
U 1 1 4D754802
P 3850 6700
F 0 "R708" V 3930 6700 50  0000 C CNN
F 1 "2k7" V 3850 6700 50  0000 C CNN
	1    3850 6700
	0    1    1    0   
$EndComp
$Comp
L R R715
U 1 1 4D754801
P 3950 6500
F 0 "R715" V 4030 6500 50  0000 C CNN
F 1 "10k" V 3950 6500 50  0000 C CNN
	1    3950 6500
	0    1    1    0   
$EndComp
$Comp
L VAA #PWR722
U 1 1 4D754800
P 3550 7000
F 0 "#PWR722" H 3550 7060 30  0001 C CNN
F 1 "VAA" H 3550 7110 30  0000 C CNN
	1    3550 7000
	0    1    1    0   
$EndComp
$Comp
L BAS40-04 U707
U 1 1 4D7547FF
P 3450 6850
F 0 "U707" H 3670 6840 60  0000 C CNN
F 1 "BAS40-04" H 3950 6800 60  0000 C CNN
	1    3450 6850
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR072
U 1 1 4D7547FE
P 3350 7000
F 0 "#PWR072" H 3350 7000 40  0001 C CNN
F 1 "GNDA" H 3350 6930 40  0000 C CNN
	1    3350 7000
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR073
U 1 1 4D7547FD
P 3100 7000
F 0 "#PWR073" H 3100 7000 40  0001 C CNN
F 1 "GNDA" H 3100 6930 40  0000 C CNN
	1    3100 7000
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR074
U 1 1 4D7547D3
P 3050 6050
F 0 "#PWR074" H 3050 6050 40  0001 C CNN
F 1 "GNDA" H 3050 5980 40  0000 C CNN
	1    3050 6050
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR075
U 1 1 4D7547D2
P 3300 6050
F 0 "#PWR075" H 3300 6050 40  0001 C CNN
F 1 "GNDA" H 3300 5980 40  0000 C CNN
	1    3300 6050
	1    0    0    -1  
$EndComp
$Comp
L BAS40-04 U706
U 1 1 4D7547D1
P 3400 5900
F 0 "U706" H 3620 5890 60  0000 C CNN
F 1 "BAS40-04" H 3900 5850 60  0000 C CNN
	1    3400 5900
	1    0    0    -1  
$EndComp
$Comp
L VAA #PWR721
U 1 1 4D7547D0
P 3500 6050
F 0 "#PWR721" H 3500 6110 30  0001 C CNN
F 1 "VAA" H 3500 6160 30  0000 C CNN
	1    3500 6050
	0    1    1    0   
$EndComp
$Comp
L R R714
U 1 1 4D7547CF
P 3900 5550
F 0 "R714" V 3980 5550 50  0000 C CNN
F 1 "10k" V 3900 5550 50  0000 C CNN
	1    3900 5550
	0    1    1    0   
$EndComp
$Comp
L R R707
U 1 1 4D7547CE
P 3800 5750
F 0 "R707" V 3880 5750 50  0000 C CNN
F 1 "2k7" V 3800 5750 50  0000 C CNN
	1    3800 5750
	0    1    1    0   
$EndComp
$Comp
L C C706
U 1 1 4D7547CD
P 3050 5850
F 0 "C706" H 3100 5950 50  0000 L CNN
F 1 "100nF" H 3100 5750 50  0000 L CNN
	1    3050 5850
	-1   0    0    1   
$EndComp
$Comp
L C C705
U 1 1 4D7547C4
P 3050 4900
F 0 "C705" H 3100 5000 50  0000 L CNN
F 1 "100nF" H 3100 4800 50  0000 L CNN
	1    3050 4900
	-1   0    0    1   
$EndComp
$Comp
L R R706
U 1 1 4D7547C3
P 3800 4800
F 0 "R706" V 3880 4800 50  0000 C CNN
F 1 "2k7" V 3800 4800 50  0000 C CNN
	1    3800 4800
	0    1    1    0   
$EndComp
$Comp
L R R713
U 1 1 4D7547C2
P 3900 4600
F 0 "R713" V 3980 4600 50  0000 C CNN
F 1 "10k" V 3900 4600 50  0000 C CNN
	1    3900 4600
	0    1    1    0   
$EndComp
$Comp
L VAA #PWR720
U 1 1 4D7547C1
P 3500 5100
F 0 "#PWR720" H 3500 5160 30  0001 C CNN
F 1 "VAA" H 3500 5210 30  0000 C CNN
	1    3500 5100
	0    1    1    0   
$EndComp
$Comp
L BAS40-04 U705
U 1 1 4D7547C0
P 3400 4950
F 0 "U705" H 3620 4940 60  0000 C CNN
F 1 "BAS40-04" H 3900 4900 60  0000 C CNN
	1    3400 4950
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR076
U 1 1 4D7547BF
P 3300 5100
F 0 "#PWR076" H 3300 5100 40  0001 C CNN
F 1 "GNDA" H 3300 5030 40  0000 C CNN
	1    3300 5100
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR077
U 1 1 4D7547BE
P 3050 5100
F 0 "#PWR077" H 3050 5100 40  0001 C CNN
F 1 "GNDA" H 3050 5030 40  0000 C CNN
	1    3050 5100
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR078
U 1 1 4D754796
P 3050 4100
F 0 "#PWR078" H 3050 4100 40  0001 C CNN
F 1 "GNDA" H 3050 4030 40  0000 C CNN
	1    3050 4100
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR079
U 1 1 4D754793
P 3300 4100
F 0 "#PWR079" H 3300 4100 40  0001 C CNN
F 1 "GNDA" H 3300 4030 40  0000 C CNN
	1    3300 4100
	1    0    0    -1  
$EndComp
$Comp
L BAS40-04 U704
U 1 1 4D754730
P 3400 3950
F 0 "U704" H 3620 3940 60  0000 C CNN
F 1 "BAS40-04" H 3900 3900 60  0000 C CNN
	1    3400 3950
	1    0    0    -1  
$EndComp
$Comp
L VAA #PWR719
U 1 1 4D754782
P 3500 4100
F 0 "#PWR719" H 3500 4160 30  0001 C CNN
F 1 "VAA" H 3500 4210 30  0000 C CNN
	1    3500 4100
	0    1    1    0   
$EndComp
$Comp
L R R712
U 1 1 4D754734
P 3900 3600
F 0 "R712" V 3980 3600 50  0000 C CNN
F 1 "10k" V 3900 3600 50  0000 C CNN
	1    3900 3600
	0    1    1    0   
$EndComp
$Comp
L R R705
U 1 1 4D754733
P 3800 3800
F 0 "R705" V 3880 3800 50  0000 C CNN
F 1 "2k7" V 3800 3800 50  0000 C CNN
	1    3800 3800
	0    1    1    0   
$EndComp
$Comp
L C C704
U 1 1 4D754732
P 3050 3900
F 0 "C704" H 3100 4000 50  0000 L CNN
F 1 "100nF" H 3100 3800 50  0000 L CNN
	1    3050 3900
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR080
U 1 1 4D754561
P 3500 1150
F 0 "#PWR080" H 3500 1110 30  0001 C CNN
F 1 "+3.3V" H 3500 1260 30  0000 C CNN
	1    3500 1150
	0    1    1    0   
$EndComp
$Comp
L GND #PWR081
U 1 1 4D75452D
P 3300 1150
F 0 "#PWR081" H 3300 1150 30  0001 C CNN
F 1 "GND" H 3300 1080 30  0001 C CNN
	1    3300 1150
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR082
U 1 1 4D754528
P 3050 1150
F 0 "#PWR082" H 3050 1150 30  0001 C CNN
F 1 "GND" H 3050 1080 30  0001 C CNN
	1    3050 1150
	1    0    0    -1  
$EndComp
$Comp
L BAS40-04 U702
U 1 1 4D7544E9
P 3400 1000
F 0 "U702" H 3620 990 60  0000 C CNN
F 1 "BAS40-04" H 3900 950 60  0000 C CNN
	1    3400 1000
	1    0    0    -1  
$EndComp
Text Notes 4250 6450 0    60   ~ 0
(Analog)
Text Notes 8050 3800 0    60   ~ 0
http://www.mikrocontroller.net/articles/Temperatursensor
Text HLabel 9150 4100 2    60   BiDi ~ 0
TEMP1
Text HLabel 9150 4650 2    60   BiDi ~ 0
TEMP2
$Comp
L +3.3V #PWR083
U 1 1 4D750DB9
P 9550 4500
F 0 "#PWR083" H 9550 4460 30  0001 C CNN
F 1 "+3.3V" H 9550 4610 30  0000 C CNN
	1    9550 4500
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR084
U 1 1 4D750DB7
P 9550 3950
F 0 "#PWR084" H 9550 3910 30  0001 C CNN
F 1 "+3.3V" H 9550 4060 30  0000 C CNN
	1    9550 3950
	1    0    0    -1  
$EndComp
$Comp
L R R717
U 1 1 4D750DAC
P 9300 4500
F 0 "R717" V 9380 4500 50  0000 C CNN
F 1 "4k7" V 9300 4500 50  0000 C CNN
	1    9300 4500
	0    1    1    0   
$EndComp
$Comp
L R R716
U 1 1 4D750DA6
P 9300 3950
F 0 "R716" V 9380 3950 50  0000 C CNN
F 1 "4k7" V 9300 3950 50  0000 C CNN
	1    9300 3950
	0    1    1    0   
$EndComp
$Comp
L GND #PWR085
U 1 1 4D750DA3
P 7550 4000
F 0 "#PWR085" H 7550 4000 30  0001 C CNN
F 1 "GND" H 7550 3930 30  0001 C CNN
	1    7550 4000
	0    1    -1   0   
$EndComp
$Comp
L +3.3V #PWR086
U 1 1 4D750DA0
P 7550 4200
F 0 "#PWR086" H 7550 4160 30  0001 C CNN
F 1 "+3.3V" H 7550 4310 30  0000 C CNN
	1    7550 4200
	0    -1   1    0   
$EndComp
$Comp
L +12V #PWR087
U 1 1 4D74E3EB
P 8100 2550
F 0 "#PWR087" H 8100 2500 20  0001 C CNN
F 1 "+12V" H 8100 2650 30  0000 C CNN
	1    8100 2550
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR088
U 1 1 4D74E22D
P 3600 2150
F 0 "#PWR088" H 3600 2150 30  0001 C CNN
F 1 "GND" H 3600 2080 30  0001 C CNN
	1    3600 2150
	0    -1   -1   0   
$EndComp
$Comp
L R R702
U 1 1 4D74E220
P 3350 2150
F 0 "R702" V 3430 2150 50  0000 C CNN
F 1 "4k7" V 3350 2150 50  0000 C CNN
	1    3350 2150
	0    1    1    0   
$EndComp
Text HLabel 3000 6500 0    60   Output ~ 0
ReserveSensor
$Comp
L +3.3V #PWR089
U 1 1 4D743139
P 1950 1700
F 0 "#PWR089" H 1950 1660 30  0001 C CNN
F 1 "+3.3V" H 1950 1810 30  0000 C CNN
	1    1950 1700
	1    0    0    -1  
$EndComp
$Comp
L R R701
U 1 1 4D74312B
P 2200 1700
F 0 "R701" V 2280 1700 50  0000 C CNN
F 1 "10k" V 2200 1700 50  0000 C CNN
	1    2200 1700
	0    1    1    0   
$EndComp
Text HLabel 2950 2350 0    60   Output ~ 0
Speed-Reed
Text HLabel 2950 5550 0    60   Output ~ 0
CoolantTemp
Text Notes 4200 5500 0    60   ~ 0
(Analog)
Text Notes 4200 4550 0    60   ~ 0
(Analog)
Text HLabel 2950 4600 0    60   Output ~ 0
FuelLevel
Text HLabel 2950 3600 0    60   Output ~ 0
RPM
Text HLabel 2950 1550 0    60   Output ~ 0
~FuelConsumption
Text HLabel 2950 650  0    60   Output ~ 0
~FuelPump
$Comp
L C C701
U 1 1 4D742BBA
P 3050 950
F 0 "C701" H 3100 1050 50  0000 L CNN
F 1 "0.3uF" H 3100 850 50  0000 L CNN
	1    3050 950 
	-1   0    0    1   
$EndComp
$Comp
L R R703
U 1 1 4D742BAF
P 3800 850
F 0 "R703" V 3880 850 50  0000 C CNN
F 1 "2k7" V 3800 850 50  0000 C CNN
	1    3800 850 
	0    1    1    0   
$EndComp
$Comp
L R R709
U 1 1 4D742BAC
P 3900 650
F 0 "R709" V 3980 650 50  0000 C CNN
F 1 "10k" V 3900 650 50  0000 C CNN
	1    3900 650 
	0    1    1    0   
$EndComp
Text Notes 4200 650  0    60   ~ 0
(Low when active)
Text Notes 4200 1500 0    60   ~ 0
(OpenCollector)
Text Notes 4200 2350 0    60   ~ 0
(8 Signals/rev?)
Text Notes 4200 3550 0    60   ~ 0
(Analog)
$EndSCHEMATC
