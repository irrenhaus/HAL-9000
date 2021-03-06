EESchema Schematic File Version 2  date Fr 08 Jul 2011 02:16:52 CEST
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
Sheet 4 9
Title ""
Date "8 jul 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	2850 5700 2850 5950
Wire Wire Line
	3850 6050 3850 5950
Wire Wire Line
	2750 2850 2250 2850
Wire Wire Line
	2250 2850 2250 2700
Wire Wire Line
	2250 2700 2100 2700
Wire Wire Line
	4250 2550 4700 2550
Wire Wire Line
	1750 2550 1750 2500
Wire Wire Line
	1750 2550 2750 2550
Wire Wire Line
	5450 3150 4250 3150
Wire Wire Line
	5450 2750 4250 2750
Wire Wire Line
	2750 3150 1750 3150
Wire Wire Line
	2750 2750 1750 2750
Wire Bus Line
	5550 2750 5550 4850
Wire Bus Line
	1650 4850 1650 2550
Wire Wire Line
	4250 2150 5600 2150
Wire Wire Line
	4250 2350 5600 2350
Wire Wire Line
	4250 3250 5600 3250
Wire Wire Line
	4250 3450 5600 3450
Wire Wire Line
	4250 3650 5600 3650
Wire Wire Line
	2750 2150 1600 2150
Wire Wire Line
	2750 2350 1600 2350
Wire Wire Line
	1600 3350 2750 3350
Wire Wire Line
	1600 3550 2750 3550
Wire Wire Line
	1600 3750 2750 3750
Wire Bus Line
	1500 1200 5700 1200
Wire Bus Line
	1500 1200 1500 3650
Wire Wire Line
	4250 2850 5000 2850
Wire Wire Line
	5000 2850 5000 2700
Wire Wire Line
	5000 2700 5150 2700
Wire Wire Line
	4250 2950 5000 2950
Wire Wire Line
	5000 2950 5000 3100
Wire Wire Line
	5000 3100 5150 3100
Wire Bus Line
	5700 1200 5700 3750
Wire Wire Line
	2750 3650 1600 3650
Wire Wire Line
	2750 3450 1600 3450
Wire Wire Line
	1600 2450 2750 2450
Wire Wire Line
	1600 2250 2750 2250
Wire Wire Line
	1600 2050 2750 2050
Wire Wire Line
	5600 3550 4250 3550
Wire Wire Line
	5600 3350 4250 3350
Wire Wire Line
	5600 2450 4250 2450
Wire Wire Line
	5600 2250 4250 2250
Wire Bus Line
	1500 3650 1300 3650
Wire Wire Line
	1750 2650 2750 2650
Wire Wire Line
	1750 3050 2750 3050
Wire Wire Line
	4250 2650 5450 2650
Wire Wire Line
	4250 3050 5450 3050
Wire Bus Line
	5550 4850 1300 4850
Wire Wire Line
	1750 2500 1000 2500
Connection ~ 1050 2500
Wire Wire Line
	2300 3250 2750 3250
Wire Wire Line
	2750 2950 2250 2950
Wire Wire Line
	2250 2950 2250 3100
Wire Wire Line
	2250 3100 2100 3100
Wire Wire Line
	3850 5950 4150 5950
Connection ~ 4050 5950
$Comp
L +3.3V #PWR404
U 1 1 4D78F1D0
P 2350 5700
F 0 "#PWR404" H 2350 5660 30  0001 C CNN
F 1 "+3.3V" H 2350 5810 30  0000 C CNN
	1    2350 5700
	1    0    0    -1  
$EndComp
$Comp
L R R401
U 1 1 4D78F1C7
P 2600 5700
F 0 "R401" V 2680 5700 50  0000 C CNN
F 1 "10k" V 2600 5700 50  0000 C CNN
	1    2600 5700
	0    1    1    0   
$EndComp
$Comp
L GND #PWR406
U 1 1 4D78ED01
P 2850 6250
F 0 "#PWR406" H 2850 6250 30  0001 C CNN
F 1 "GND" H 2850 6180 30  0001 C CNN
	1    2850 6250
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR405
U 1 1 4D78ECF8
P 2850 6150
F 0 "#PWR405" H 2850 6110 30  0001 C CNN
F 1 "+3.3V" H 2850 6260 30  0000 C CNN
	1    2850 6150
	0    -1   -1   0   
$EndComp
Text HLabel 3850 6150 2    60   Input ~ 0
SPI_SCK
Text HLabel 3850 6250 2    60   Input ~ 0
SPI_MOSI
Text HLabel 2850 6050 0    60   Output ~ 0
SPI_MISO
Text HLabel 2850 5950 0    60   Input ~ 0
~FLASH_CS
$Comp
L +3.3V #PWR408
U 1 1 4D78ECB1
P 4150 5950
F 0 "#PWR408" H 4150 5910 30  0001 C CNN
F 1 "+3.3V" H 4150 6060 30  0000 C CNN
	1    4150 5950
	0    1    1    0   
$EndComp
$Comp
L GND #PWR407
U 1 1 4D78ECAD
P 4050 5550
F 0 "#PWR407" H 4050 5550 30  0001 C CNN
F 1 "GND" H 4050 5480 30  0001 C CNN
	1    4050 5550
	-1   0    0    1   
$EndComp
$Comp
L C C401
U 1 1 4D78ECA8
P 4050 5750
F 0 "C401" H 4100 5850 50  0000 L CNN
F 1 "100nF" H 4100 5650 50  0000 L CNN
	1    4050 5750
	1    0    0    -1  
$EndComp
Text Notes 3000 5650 0    60   ~ 0
Flash memory
$Comp
L AT25DF041A U401
U 1 1 4D78ECA0
P 3350 6100
F 0 "U401" H 3350 5800 60  0000 C CNN
F 1 "AT25DF041A" H 3350 6400 60  0000 C CNN
	1    3350 6100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR403
U 1 1 4D744D91
P 2100 3100
F 0 "#PWR403" H 2100 3100 30  0001 C CNN
F 1 "GND" H 2100 3030 30  0001 C CNN
	1    2100 3100
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR402
U 1 1 4D744D8F
P 2100 2700
F 0 "#PWR402" H 2100 2660 30  0001 C CNN
F 1 "+3.3V" H 2100 2810 30  0000 C CNN
	1    2100 2700
	1    0    0    -1  
$EndComp
$Comp
L C C501
U 1 1 4D744D85
P 2100 2900
F 0 "C501" H 2150 3000 50  0000 L CNN
F 1 "100nF" H 2150 2800 50  0000 L CNN
	1    2100 2900
	-1   0    0    1   
$EndComp
Text HLabel 4700 2550 2    60   Input ~ 0
~FSMC_OE
Text HLabel 2300 3250 0    60   Input ~ 0
~FSMC_WE
Text HLabel 1000 2500 0    60   Input ~ 0
~SRAM_CE
$Comp
L +3.3V #PWR401
U 1 1 4D744D1A
P 1050 2000
F 0 "#PWR401" H 1050 1960 30  0001 C CNN
F 1 "+3.3V" H 1050 2110 30  0000 C CNN
	1    1050 2000
	1    0    0    -1  
$EndComp
$Comp
L R R501
U 1 1 4D744D04
P 1050 2250
F 0 "R501" V 1130 2250 50  0000 C CNN
F 1 "10k" V 1050 2250 50  0000 C CNN
	1    1050 2250
	-1   0    0    1   
$EndComp
Text HLabel 1300 4850 0    60   BiDi ~ 0
FSMC_D[0..15]
Text Label 4250 2650 0    60   ~ 0
FSMC_D7
Text Label 4250 2750 0    60   ~ 0
FSMC_D6
Text Label 4250 3050 0    60   ~ 0
FSMC_D5
Text Label 4250 3150 0    60   ~ 0
FSMC_D4
Text Label 2750 3150 2    60   ~ 0
FSMC_D3
Text Label 2750 3050 2    60   ~ 0
FSMC_D2
Text Label 2750 2750 2    60   ~ 0
FSMC_D1
Text Label 2750 2650 2    60   ~ 0
FSMC_D0
Entry Wire Line
	1650 3050 1750 3150
Entry Wire Line
	1650 2950 1750 3050
Entry Wire Line
	1650 2650 1750 2750
Entry Wire Line
	1650 2550 1750 2650
Entry Wire Line
	5450 3150 5550 3250
Entry Wire Line
	5450 3050 5550 3150
Entry Wire Line
	5450 2750 5550 2850
Entry Wire Line
	5450 2650 5550 2750
Text HLabel 1300 3650 0    60   Input ~ 0
FSMC_A[0..19]
Text Label 4250 2150 0    60   ~ 0
FSMC_A18
Text Label 4250 2250 0    60   ~ 0
FSMC_A17
Text Label 4250 2350 0    60   ~ 0
FSMC_A16
Text Label 4250 2450 0    60   ~ 0
FSMC_A15
Text Label 4250 3250 0    60   ~ 0
FSMC_A14
Text Label 4250 3350 0    60   ~ 0
FSMC_A13
Text Label 4250 3450 0    60   ~ 0
FSMC_A12
Text Label 4250 3550 0    60   ~ 0
FSMC_A11
Text Label 4250 3650 0    60   ~ 0
FSMC_A10
Text Label 2750 3750 2    60   ~ 0
FSMC_A9
Text Label 2750 3650 2    60   ~ 0
FSMC_A8
Text Label 2750 3550 2    60   ~ 0
FSMC_A7
Text Label 2750 3450 2    60   ~ 0
FSMC_A6
Text Label 2750 3350 2    60   ~ 0
FSMC_A5
Text Label 2750 2450 2    60   ~ 0
FSMC_A4
Text Label 2750 2350 2    60   ~ 0
FSMC_A3
Text Label 2750 2250 2    60   ~ 0
FSMC_A2
Text Label 2750 2150 2    60   ~ 0
FSMC_A1
Text Label 2750 2050 2    60   ~ 0
FSMC_A0
Entry Wire Line
	1500 1950 1600 2050
Entry Wire Line
	1500 2050 1600 2150
Entry Wire Line
	1500 2150 1600 2250
Entry Wire Line
	1500 2250 1600 2350
Entry Wire Line
	1500 2350 1600 2450
Entry Wire Line
	1500 3250 1600 3350
Entry Wire Line
	1500 3350 1600 3450
Entry Wire Line
	1500 3450 1600 3550
Entry Wire Line
	1500 3550 1600 3650
Entry Wire Line
	5600 2150 5700 2250
Entry Wire Line
	5600 2250 5700 2350
Entry Wire Line
	5600 2350 5700 2450
Entry Wire Line
	5600 2450 5700 2550
Entry Wire Line
	5600 3250 5700 3350
Entry Wire Line
	5600 3350 5700 3450
Entry Wire Line
	5600 3450 5700 3550
Entry Wire Line
	5600 3550 5700 3650
Entry Wire Line
	5600 3650 5700 3750
Entry Wire Line
	1500 3650 1600 3750
$Comp
L +3.3V #PWR410
U 1 1 4D744A4B
P 5150 3100
F 0 "#PWR410" H 5150 3060 30  0001 C CNN
F 1 "+3.3V" H 5150 3210 30  0000 C CNN
	1    5150 3100
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR409
U 1 1 4D744A44
P 5150 2700
F 0 "#PWR409" H 5150 2700 30  0001 C CNN
F 1 "GND" H 5150 2630 30  0001 C CNN
	1    5150 2700
	-1   0    0    1   
$EndComp
$Comp
L C C502
U 1 1 4D744A3E
P 5150 2900
F 0 "C502" H 5200 3000 50  0000 L CNN
F 1 "100nF" H 5200 2800 50  0000 L CNN
	1    5150 2900
	1    0    0    -1  
$EndComp
NoConn ~ 4250 2050
NoConn ~ 4250 1950
NoConn ~ 4250 1850
NoConn ~ 4250 3750
NoConn ~ 4250 3850
NoConn ~ 4250 3950
NoConn ~ 2750 3950
NoConn ~ 2750 3850
NoConn ~ 2750 1950
NoConn ~ 2750 1850
$Comp
L AS7C34096A U501
U 1 1 4D744A1D
P 3500 2900
F 0 "U501" H 3500 2800 50  0000 C CNN
F 1 "AS7C34096A" H 3500 3000 50  0000 C CNN
	1    3500 2900
	1    0    0    -1  
$EndComp
$EndSCHEMATC
