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
$Descr A3 16535 11700
Sheet 11 11
Title ""
Date "9 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L GND #PWR0101
U 1 1 4D751030
P 4300 2300
F 0 "#PWR0101" H 4300 2300 30  0001 C CNN
F 1 "GND" H 4300 2230 30  0001 C CNN
	1    4300 2300
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR0102
U 1 1 4D75102E
P 4300 2200
F 0 "#PWR0102" H 4300 2160 30  0001 C CNN
F 1 "+3.3V" H 4300 2310 30  0000 C CNN
	1    4300 2200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0103
U 1 1 4D75102A
P 3500 2300
F 0 "#PWR0103" H 3500 2300 30  0001 C CNN
F 1 "GND" H 3500 2230 30  0001 C CNN
	1    3500 2300
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR0104
U 1 1 4D751027
P 3500 2200
F 0 "#PWR0104" H 3500 2160 30  0001 C CNN
F 1 "+3.3V" H 3500 2310 30  0000 C CNN
	1    3500 2200
	1    0    0    -1  
$EndComp
$Comp
L CONN_2X2 P1105
U 1 1 4D751022
P 3900 2250
F 0 "P1105" H 3900 2400 50  0000 C CNN
F 1 "EXPPWR" H 3910 2120 40  0000 C CNN
	1    3900 2250
	1    0    0    -1  
$EndComp
NoConn ~ 8900 2750
NoConn ~ 8900 3050
NoConn ~ 8900 6850
NoConn ~ 8900 6950
NoConn ~ 7000 6550
NoConn ~ 7000 6450
NoConn ~ 7000 4650
Wire Wire Line
	7000 5050 5750 5050
Wire Wire Line
	5150 5100 5250 5100
Wire Wire Line
	5250 5100 5250 5050
Wire Wire Line
	2700 3600 3250 3600
Wire Wire Line
	7000 4850 6550 4850
Wire Wire Line
	2700 1250 3250 1250
Wire Wire Line
	7000 3050 6300 3050
Wire Wire Line
	4300 3950 4150 3950
Wire Wire Line
	4950 3550 4950 3450
Wire Wire Line
	7000 3250 5250 3250
Wire Wire Line
	8900 2950 9550 2950
Wire Wire Line
	9450 8750 8900 8750
Wire Wire Line
	8900 3950 10700 3950
Wire Wire Line
	10700 3850 8900 3850
Wire Wire Line
	8900 2550 10700 2550
Wire Wire Line
	8900 2450 10700 2450
Wire Wire Line
	8900 8050 10300 8050
Wire Wire Line
	8900 7950 10300 7950
Wire Wire Line
	8900 7850 10300 7850
Wire Wire Line
	8900 7750 10300 7750
Wire Wire Line
	8900 7650 10300 7650
Wire Wire Line
	8900 7550 10300 7550
Wire Wire Line
	8900 6350 10300 6350
Wire Wire Line
	8900 6250 10300 6250
Wire Wire Line
	8900 6150 10300 6150
Wire Wire Line
	8900 6050 10300 6050
Wire Wire Line
	8900 5950 10300 5950
Wire Wire Line
	8900 5850 10300 5850
Wire Bus Line
	10700 8150 10400 8150
Wire Bus Line
	10400 8150 10400 3650
Wire Wire Line
	7000 8200 6600 8200
Connection ~ 6200 7950
Wire Wire Line
	6200 7950 6200 8000
Connection ~ 5950 7950
Wire Wire Line
	5800 8450 5800 7950
Wire Wire Line
	5800 7950 7000 7950
Connection ~ 5500 6750
Wire Wire Line
	5300 6750 5700 6750
Wire Wire Line
	5700 6750 5700 7250
Wire Wire Line
	5700 7250 7000 7250
Connection ~ 5500 8300
Wire Wire Line
	5300 8300 5700 8300
Connection ~ 5500 7700
Wire Wire Line
	5300 7700 7000 7700
Connection ~ 6650 7550
Wire Wire Line
	6650 7500 6650 7550
Connection ~ 8000 9650
Wire Wire Line
	8000 9750 8000 9650
Connection ~ 8350 9650
Connection ~ 8150 9650
Connection ~ 7950 9650
Connection ~ 7750 9650
Wire Wire Line
	7350 1800 7150 1800
Connection ~ 7750 1650
Wire Wire Line
	7750 1850 7750 1650
Connection ~ 7950 1650
Wire Wire Line
	7950 1850 7950 1650
Connection ~ 8150 1650
Wire Wire Line
	8150 1850 8150 1650
Connection ~ 8350 1650
Wire Wire Line
	8350 1850 8350 1650
Connection ~ 8000 1650
Wire Wire Line
	8550 1850 8550 1650
Wire Wire Line
	8550 1650 7550 1650
Connection ~ 9600 1000
Wire Wire Line
	9600 1100 9600 1000
Connection ~ 8200 1000
Connection ~ 9050 1000
Connection ~ 9850 1000
Connection ~ 10700 1000
Connection ~ 10700 600 
Connection ~ 9850 600 
Connection ~ 9300 600 
Connection ~ 8450 600 
Connection ~ 7650 600 
Connection ~ 8200 600 
Connection ~ 9050 600 
Connection ~ 9600 600 
Connection ~ 10100 600 
Wire Wire Line
	7400 600  11500 600 
Connection ~ 10950 600 
Connection ~ 10950 1000
Connection ~ 10100 1000
Connection ~ 9300 1000
Connection ~ 8450 1000
Wire Wire Line
	11500 1000 7400 1000
Connection ~ 7650 1000
Wire Wire Line
	7550 1650 7550 1850
Wire Wire Line
	8450 1650 8450 1850
Connection ~ 8450 1650
Wire Wire Line
	8250 1650 8250 1850
Connection ~ 8250 1650
Wire Wire Line
	8050 1650 8050 1850
Connection ~ 8050 1650
Wire Wire Line
	7850 1650 7850 1850
Connection ~ 7850 1650
Wire Wire Line
	7650 1850 7650 1650
Connection ~ 7650 1650
Wire Wire Line
	7350 1750 7350 1850
Connection ~ 7350 1800
Connection ~ 7650 9650
Connection ~ 7850 9650
Connection ~ 8050 9650
Connection ~ 8250 9650
Wire Wire Line
	7550 9650 8550 9650
Connection ~ 8450 9650
Wire Wire Line
	7000 7550 6550 7550
Wire Wire Line
	7000 7800 5700 7800
Wire Wire Line
	5700 7800 5700 8300
Wire Wire Line
	5300 7350 7000 7350
Connection ~ 5500 7350
Wire Wire Line
	5600 8650 5500 8650
Wire Wire Line
	7000 8500 7000 8550
Wire Wire Line
	6600 8200 6600 8150
Wire Wire Line
	8900 3550 10300 3550
Wire Wire Line
	8900 3650 10300 3650
Wire Wire Line
	8900 3750 10300 3750
Wire Wire Line
	8900 7050 10300 7050
Wire Wire Line
	8900 7150 10300 7150
Wire Wire Line
	8900 7250 10300 7250
Wire Wire Line
	8900 7350 10300 7350
Wire Bus Line
	10800 2550 10800 5750
Wire Bus Line
	10800 5750 11100 5750
Wire Wire Line
	8900 3250 10700 3250
Wire Wire Line
	8900 3350 10700 3350
Wire Wire Line
	8900 3450 10700 3450
Wire Wire Line
	8900 4850 10700 4850
Wire Wire Line
	8900 4950 10700 4950
Wire Wire Line
	8900 5050 10700 5050
Wire Wire Line
	8900 5150 10700 5150
Wire Wire Line
	8900 5250 10700 5250
Wire Wire Line
	8900 5350 10700 5350
Wire Wire Line
	8900 5450 10700 5450
Wire Wire Line
	8900 5550 10700 5550
Wire Wire Line
	8900 5650 10700 5650
Wire Wire Line
	9550 2850 8900 2850
Wire Wire Line
	9550 3150 8900 3150
Wire Wire Line
	10300 4450 8900 4450
Wire Wire Line
	5300 3350 5300 3250
Connection ~ 5300 3250
Wire Wire Line
	4950 3950 4800 3950
Wire Wire Line
	4950 3000 4950 3050
Wire Wire Line
	6300 3150 7000 3150
Wire Wire Line
	6300 2950 7000 2950
Wire Wire Line
	6550 4750 7000 4750
Wire Wire Line
	5150 4850 5250 4850
Wire Wire Line
	5250 4850 5250 4900
Wire Wire Line
	5750 4900 5750 4950
Wire Wire Line
	5750 4950 7000 4950
$Comp
L GND #PWR0105
U 1 1 4D750ECA
P 4750 5100
F 0 "#PWR0105" H 4750 5100 30  0001 C CNN
F 1 "GND" H 4750 5030 30  0001 C CNN
	1    4750 5100
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0106
U 1 1 4D750EC7
P 4750 4850
F 0 "#PWR0106" H 4750 4850 30  0001 C CNN
F 1 "GND" H 4750 4780 30  0001 C CNN
	1    4750 4850
	0    1    1    0   
$EndComp
$Comp
L LED D1103
U 1 1 4D750EB9
P 4950 5100
F 0 "D1103" H 4950 5200 50  0000 C CNN
F 1 "Green" H 4950 5000 50  0000 C CNN
	1    4950 5100
	-1   0    0    1   
$EndComp
$Comp
L LED D1102
U 1 1 4D750EB6
P 4950 4850
F 0 "D1102" H 4950 4950 50  0000 C CNN
F 1 "Red" H 4950 4750 50  0000 C CNN
	1    4950 4850
	-1   0    0    1   
$EndComp
$Comp
L R R1105
U 1 1 4D750EB1
P 5500 5050
F 0 "R1105" V 5580 5050 50  0000 C CNN
F 1 "68" V 5500 5050 50  0000 C CNN
	1    5500 5050
	0    1    1    0   
$EndComp
$Comp
L R R1104
U 1 1 4D750EAD
P 5500 4900
F 0 "R1104" V 5580 4900 50  0000 C CNN
F 1 "100" V 5500 4900 50  0000 C CNN
	1    5500 4900
	0    1    1    0   
$EndComp
Text HLabel 8900 4250 2    60   BiDi ~ 0
TEMP2
Text HLabel 8900 4150 2    60   BiDi ~ 0
TEMP1
Text Label 7000 4350 2    60   ~ 0
~EXP4_CS
$Comp
L CONN_6 P1104
U 1 1 4D75098D
P 2350 3650
F 0 "P1104" V 2300 3650 60  0000 C CNN
F 1 "EXP4" V 2400 3650 60  0000 C CNN
	1    2350 3650
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR0107
U 1 1 4D75098C
P 2700 3400
F 0 "#PWR0107" H 2700 3360 30  0001 C CNN
F 1 "+3.3V" H 2700 3510 30  0000 C CNN
	1    2700 3400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0108
U 1 1 4D75098B
P 2700 3500
F 0 "#PWR0108" H 2700 3500 30  0001 C CNN
F 1 "GND" H 2700 3430 30  0001 C CNN
	1    2700 3500
	0    -1   -1   0   
$EndComp
Text Label 2700 3600 0    60   ~ 0
~EXP4_CS
Text Label 2700 3700 0    60   ~ 0
SPI2_SCK
Text Label 2700 3800 0    60   ~ 0
SPI2_MISO
Text Label 2700 3900 0    60   ~ 0
SPI2_MOSI
$Comp
L R R1102
U 1 1 4D75098A
P 3500 3600
F 0 "R1102" V 3580 3600 50  0000 C CNN
F 1 "100k" V 3500 3600 50  0000 C CNN
	1    3500 3600
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR0109
U 1 1 4D750989
P 3750 3600
F 0 "#PWR0109" H 3750 3560 30  0001 C CNN
F 1 "+3.3V" H 3750 3710 30  0000 C CNN
	1    3750 3600
	1    0    0    -1  
$EndComp
Text Label 7000 5650 2    60   ~ 0
SPI2_MOSI
Text Label 7000 5550 2    60   ~ 0
SPI2_MISO
Text Label 7000 5450 2    60   ~ 0
SPI2_SCk
Text Label 8900 9050 0    60   ~ 0
PG15
Text Label 8900 8950 0    60   ~ 0
PG14
Text Label 8900 8850 0    60   ~ 0
PG13
Text Label 8900 8650 0    60   ~ 0
PG11
Text Label 8900 8550 0    60   ~ 0
PG10
Text Label 8900 8450 0    60   ~ 0
PG9
Text Label 8900 8350 0    60   ~ 0
PG8
Text Label 8900 8250 0    60   ~ 0
PG7
Text Label 8900 8150 0    60   ~ 0
PG6
Text Label 2700 3150 0    60   ~ 0
PG15
Text Label 2700 3050 0    60   ~ 0
PG14
Text Label 2700 2950 0    60   ~ 0
PG13
Text Label 2700 2850 0    60   ~ 0
PG11
Text Label 2700 2750 0    60   ~ 0
PG10
Text Label 2700 2650 0    60   ~ 0
PG9
Text Label 2700 2550 0    60   ~ 0
PG8
Text Label 2700 2450 0    60   ~ 0
PG7
Text Label 2700 2350 0    60   ~ 0
PG6
$Comp
L CONN_9 P1103
U 1 1 4D7508EC
P 2350 2750
F 0 "P1103" V 2300 2750 60  0000 C CNN
F 1 "EXP3" V 2400 2750 60  0000 C CNN
	1    2350 2750
	-1   0    0    1   
$EndComp
Text Label 2700 2000 0    60   ~ 0
I2C1_SDA
Text Label 2700 1900 0    60   ~ 0
I2C1_SCL
Text Label 7000 4850 2    60   ~ 0
I2C1_SDA
Text Label 7000 4750 2    60   ~ 0
I2C1_SCL
$Comp
L GND #PWR0110
U 1 1 4D7503BC
P 2700 2100
F 0 "#PWR0110" H 2700 2100 30  0001 C CNN
F 1 "GND" H 2700 2030 30  0001 C CNN
	1    2700 2100
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR0111
U 1 1 4D7503BA
P 2700 1800
F 0 "#PWR0111" H 2700 1760 30  0001 C CNN
F 1 "+3.3V" H 2700 1910 30  0000 C CNN
	1    2700 1800
	1    0    0    -1  
$EndComp
$Comp
L CONN_4 P1102
U 1 1 4D7503B3
P 2350 1950
F 0 "P1102" V 2300 1950 50  0000 C CNN
F 1 "EXP2" V 2400 1950 50  0000 C CNN
	1    2350 1950
	-1   0    0    1   
$EndComp
Text Label 7000 3350 2    60   ~ 0
~EXP1_CS
$Comp
L +3.3V #PWR0112
U 1 1 4D75038D
P 3750 1250
F 0 "#PWR0112" H 3750 1210 30  0001 C CNN
F 1 "+3.3V" H 3750 1360 30  0000 C CNN
	1    3750 1250
	1    0    0    -1  
$EndComp
$Comp
L R R1101
U 1 1 4D750388
P 3500 1250
F 0 "R1101" V 3580 1250 50  0000 C CNN
F 1 "100k" V 3500 1250 50  0000 C CNN
	1    3500 1250
	0    1    1    0   
$EndComp
Text Label 7000 3150 2    60   ~ 0
SPI1_MOSI
Text Label 7000 3050 2    60   ~ 0
SPI1_MISO
Text Label 7000 2950 2    60   ~ 0
SPI1_SCK
Text Label 2700 1550 0    60   ~ 0
SPI2_MOSI
Text Label 2700 1450 0    60   ~ 0
SPI2_MISO
Text Label 2700 1350 0    60   ~ 0
SPI2_SCK
Text Label 2700 1250 0    60   ~ 0
~EXP1_CS
$Comp
L GND #PWR0113
U 1 1 4D75033D
P 2700 1150
F 0 "#PWR0113" H 2700 1150 30  0001 C CNN
F 1 "GND" H 2700 1080 30  0001 C CNN
	1    2700 1150
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR0114
U 1 1 4D75033B
P 2700 1050
F 0 "#PWR0114" H 2700 1010 30  0001 C CNN
F 1 "+3.3V" H 2700 1160 30  0000 C CNN
	1    2700 1050
	1    0    0    -1  
$EndComp
$Comp
L CONN_6 P1101
U 1 1 4D75032F
P 2350 1300
F 0 "P1101" V 2300 1300 60  0000 C CNN
F 1 "EXP1" V 2400 1300 60  0000 C CNN
	1    2350 1300
	-1   0    0    1   
$EndComp
Text Notes 2250 900  0    60   ~ 0
Expansion Headers
$Comp
L +3.3V #PWR0115
U 1 1 4D750217
P 5800 3350
F 0 "#PWR0115" H 5800 3310 30  0001 C CNN
F 1 "+3.3V" H 5800 3460 30  0000 C CNN
	1    5800 3350
	-1   0    0    1   
$EndComp
$Comp
L R R1106
U 1 1 4D750210
P 5550 3350
F 0 "R1106" V 5630 3350 50  0000 C CNN
F 1 "100k" V 5550 3350 50  0000 C CNN
	1    5550 3350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0116
U 1 1 4D750205
P 4950 3000
F 0 "#PWR0116" H 4950 3000 30  0001 C CNN
F 1 "GND" H 4950 2930 30  0001 C CNN
	1    4950 3000
	-1   0    0    1   
$EndComp
$Comp
L R R1103
U 1 1 4D7501FC
P 4550 3950
F 0 "R1103" V 4630 3950 50  0000 C CNN
F 1 "27" V 4550 3950 50  0000 C CNN
	1    4550 3950
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR0117
U 1 1 4D7501F6
P 4150 3950
F 0 "#PWR0117" H 4150 3910 30  0001 C CNN
F 1 "+3.3V" H 4150 4060 30  0000 C CNN
	1    4150 3950
	1    0    0    -1  
$EndComp
$Comp
L LED D1101
U 1 1 4D7501F0
P 4950 3750
F 0 "D1101" H 4950 3850 50  0000 C CNN
F 1 "Blue" H 4950 3650 50  0000 C CNN
	1    4950 3750
	0    -1   -1   0   
$EndComp
$Comp
L NPN Q1101
U 1 1 4D7501E9
P 5050 3250
F 0 "Q1101" H 5050 3100 50  0000 R CNN
F 1 "NPN" H 5050 3400 50  0000 R CNN
	1    5050 3250
	-1   0    0    1   
$EndComp
Text HLabel 8900 4750 2    60   Output ~ 0
PRESSURE_XCLR
Text HLabel 8900 4650 2    60   Output ~ 0
PRESSURE_EOC
Text HLabel 8900 4550 2    60   Output ~ 0
GYRO_PD
Text HLabel 8900 4350 2    60   Output ~ 0
GYRO_ST
Text HLabel 7000 5850 0    60   Input ~ 0
ADC123_IN10
Text HLabel 7000 5350 0    60   Output ~ 0
GPS_GPIO20
Text HLabel 7000 5250 0    60   Output ~ 0
GPS_GPIO02
Text HLabel 7000 5150 0    60   Output ~ 0
GPS_GPIO01
Text HLabel 7000 2450 0    60   Output ~ 0
GPS_PPS
Text HLabel 7000 2550 0    60   Output ~ 0
~GPS_CS
Text HLabel 8900 6750 2    60   Input ~ 0
Speed-Reed
Text HLabel 8900 6650 2    60   Input ~ 0
ReserveSensor
Text HLabel 8900 6550 2    60   Input ~ 0
~FuelPump
Text HLabel 8900 6450 2    60   Input ~ 0
~FuelConsumption
Text HLabel 7000 4250 0    60   Output ~ 0
~LCD_RESET
Text HLabel 7000 4150 0    60   Output ~ 0
LCD_BKLIT_EN
Text HLabel 7000 6350 0    60   Output ~ 0
~TOUCH_CS
Text HLabel 7000 6250 0    60   Input ~ 0
TOUCH_BUSY
Text HLabel 7000 2850 0    60   Input ~ 0
~TOUCH_PENIRQ
Text HLabel 7000 6150 0    60   Input ~ 0
ADC123_IN13
Text HLabel 7000 6050 0    60   Input ~ 0
ADC123_IN12
Text HLabel 7000 5950 0    60   Input ~ 0
ADC123_IN11
Text HLabel 6550 4850 0    60   BiDi ~ 0
I2C1_SDA
Text HLabel 6550 4750 0    60   Output ~ 0
I2C1_SCL
Text HLabel 6300 2950 0    60   Output ~ 0
SPI1_SCK
Text HLabel 6300 3150 0    60   Output ~ 0
SPI1_MOSI
Text HLabel 6300 3050 0    60   Input ~ 0
SPI1_MISO
Text HLabel 7000 2750 0    60   Input ~ 0
USART2_RX
Text HLabel 7000 2650 0    60   Output ~ 0
USART2_TX
Text HLabel 5800 8400 0    60   Input ~ 0
~NRST
Text HLabel 7000 4550 0    60   Input ~ 0
~NJTRST
Text HLabel 7000 3750 0    60   Input ~ 0
JTMS
Text HLabel 7000 3850 0    60   Input ~ 0
JTCK
Text HLabel 7000 4450 0    60   Output ~ 0
JTDO
Text HLabel 7000 3950 0    60   Input ~ 0
JTDI
Text HLabel 7000 7150 0    60   Input ~ 0
SDCARD_DETECT
Text HLabel 8900 2650 2    60   Output ~ 0
SDIO_CMD
Text HLabel 7000 7050 0    60   Output ~ 0
SDIO_CK
Text HLabel 7000 6950 0    60   BiDi ~ 0
SDIO_D3
Text HLabel 7000 6850 0    60   BiDi ~ 0
SDIO_D2
Text HLabel 7000 6750 0    60   BiDi ~ 0
SDIO_D1
Text HLabel 7000 6650 0    60   BiDi ~ 0
SDIO_D0
Text HLabel 7000 3450 0    60   Output ~ 0
USB_EN
Text HLabel 7000 3650 0    60   BiDi ~ 0
USBDP
Text HLabel 7000 3550 0    60   BiDi ~ 0
USBDM
Entry Wire Line
	10300 4450 10400 4550
Text Label 8900 4450 0    60   ~ 0
FSMC_A19
Text HLabel 9450 8750 2    60   Output ~ 0
~LCD_CS
Text Label 8900 8750 0    60   ~ 0
FSMC_NE4
Text HLabel 9550 2950 2    60   Output ~ 0
~FSMC_WE
Text HLabel 9550 2850 2    60   Output ~ 0
~FSMC_OE
Text HLabel 9550 3150 2    60   Output ~ 0
~SRAM_CE
Text Label 8900 3150 0    60   ~ 0
FSMC_NE1
Text Label 8900 2950 0    60   ~ 0
~FSMC_WE
Text Label 8900 2850 0    60   ~ 0
~FSMC_OE
Text HLabel 11100 5750 2    60   BiDi ~ 0
FSMC_D[0..15]
Entry Wire Line
	10700 5650 10800 5750
Entry Wire Line
	10700 5550 10800 5650
Entry Wire Line
	10700 5450 10800 5550
Entry Wire Line
	10700 5350 10800 5450
Entry Wire Line
	10700 5250 10800 5350
Entry Wire Line
	10700 5150 10800 5250
Entry Wire Line
	10700 5050 10800 5150
Entry Wire Line
	10700 4950 10800 5050
Entry Wire Line
	10700 4850 10800 4950
Entry Wire Line
	10700 3950 10800 4050
Entry Wire Line
	10700 3850 10800 3950
Entry Wire Line
	10700 3450 10800 3550
Entry Wire Line
	10700 3350 10800 3450
Entry Wire Line
	10700 3250 10800 3350
Entry Wire Line
	10700 2550 10800 2650
Entry Wire Line
	10700 2450 10800 2550
Text Label 8900 3450 0    60   ~ 0
FSMC_D15
Text Label 8900 3350 0    60   ~ 0
FSMC_D14
Text Label 8900 3250 0    60   ~ 0
FSMC_D13
Text Label 8900 5650 0    60   ~ 0
FSMC_D12
Text Label 8900 5550 0    60   ~ 0
FSMC_D11
Text Label 8900 5450 0    60   ~ 0
FSMC_D10
Text Label 8900 5350 0    60   ~ 0
FSMC_D9
Text Label 8900 5250 0    60   ~ 0
FSMC_D8
Text Label 8900 5150 0    60   ~ 0
FSMC_D7
Text Label 8900 5050 0    60   ~ 0
FSMC_D6
Text Label 8900 4950 0    60   ~ 0
FSMC_D5
Text Label 8900 4850 0    60   ~ 0
FSMC_D4
Text Label 8900 2550 0    60   ~ 0
FSMC_D3
Text Label 8900 2450 0    60   ~ 0
FSMC_D2
Text Label 8900 3950 0    60   ~ 0
FSMC_D1
Text Label 8900 3850 0    60   ~ 0
FSMC_D0
Text HLabel 10700 8150 2    60   Output ~ 0
FSMC_A[0..19]
Entry Wire Line
	10300 8050 10400 8150
Entry Wire Line
	10300 7950 10400 8050
Entry Wire Line
	10300 7850 10400 7950
Entry Wire Line
	10300 7750 10400 7850
Entry Wire Line
	10300 7650 10400 7750
Entry Wire Line
	10300 7550 10400 7650
Entry Wire Line
	10300 7350 10400 7450
Entry Wire Line
	10300 6350 10400 6450
Entry Wire Line
	10300 7250 10400 7350
Entry Wire Line
	10300 7150 10400 7250
Entry Wire Line
	10300 7050 10400 7150
Entry Wire Line
	10300 6250 10400 6350
Entry Wire Line
	10300 6150 10400 6250
Entry Wire Line
	10300 6050 10400 6150
Entry Wire Line
	10300 5950 10400 6050
Entry Wire Line
	10300 5850 10400 5950
Entry Wire Line
	10300 3750 10400 3850
Entry Wire Line
	10300 3650 10400 3750
Entry Wire Line
	10300 3550 10400 3650
Text Label 8900 3750 0    60   ~ 0
FSMC_A18
Text Label 8900 3650 0    60   ~ 0
FSMC_A17
Text Label 8900 3550 0    60   ~ 0
FSMC_A16
Text Label 8900 8050 0    60   ~ 0
FSMC_A15
Text Label 8900 7950 0    60   ~ 0
FSMC_A14
Text Label 8900 7850 0    60   ~ 0
FSMC_A13
Text Label 8900 7750 0    60   ~ 0
FSMC_A12
Text Label 8900 7650 0    60   ~ 0
FSMC_A11
Text Label 8900 7550 0    60   ~ 0
FSMC_A10
Text Label 8900 7350 0    60   ~ 0
FSMC_A9
Text Label 8900 7250 0    60   ~ 0
FSMC_A8
Text Label 8900 7150 0    60   ~ 0
FSMC_A7
Text Label 8900 7050 0    60   ~ 0
FSMC_A6
Text Label 8900 6350 0    60   ~ 0
FSMC_A5
Text Label 8900 6250 0    60   ~ 0
FSMC_A4
Text Label 8900 6150 0    60   ~ 0
FSMC_A3
Text Label 8900 6050 0    60   ~ 0
FSMC_A2
Text Label 8900 5950 0    60   ~ 0
FSMC_A1
Text Label 8900 5850 0    60   ~ 0
FSMC_A0
$Comp
L GNDA #PWR0118
U 1 1 4D74F301
P 6600 8600
F 0 "#PWR0118" H 6600 8600 40  0001 C CNN
F 1 "GNDA" H 6600 8530 40  0000 C CNN
	1    6600 8600
	1    0    0    -1  
$EndComp
$Comp
L VAA #PWR1126
U 1 1 4D74F2FA
P 6600 8150
F 0 "#PWR1126" H 6600 8210 30  0001 C CNN
F 1 "VAA" H 6600 8260 30  0000 C CNN
	1    6600 8150
	1    0    0    -1  
$EndComp
$Comp
L CP1 C1107
U 1 1 4D74F2ED
P 6600 8400
F 0 "C1107" H 6650 8500 50  0000 L CNN
F 1 "100nF" H 6650 8300 50  0000 L CNN
	1    6600 8400
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR0119
U 1 1 4D74F2E9
P 7000 8100
F 0 "#PWR0119" H 7000 8100 40  0001 C CNN
F 1 "GNDA" H 7000 8030 40  0000 C CNN
	1    7000 8100
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0120
U 1 1 4D74F260
P 7000 9050
F 0 "#PWR0120" H 7000 9050 30  0001 C CNN
F 1 "GND" H 7000 8980 30  0001 C CNN
	1    7000 9050
	1    0    0    -1  
$EndComp
$Comp
L R R1108
U 1 1 4D74F25B
P 7000 8800
F 0 "R1108" V 7080 8800 50  0000 C CNN
F 1 "100k" V 7000 8800 50  0000 C CNN
	1    7000 8800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0121
U 1 1 4D74F258
P 6200 8400
F 0 "#PWR0121" H 6200 8400 30  0001 C CNN
F 1 "GND" H 6200 8330 30  0001 C CNN
	1    6200 8400
	1    0    0    -1  
$EndComp
$Comp
L C C1105
U 1 1 4D74F24C
P 6200 8200
F 0 "C1105" H 6250 8300 50  0000 L CNN
F 1 "100nF" H 6250 8100 50  0000 L CNN
	1    6200 8200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0122
U 1 1 4D74F205
P 5500 8650
F 0 "#PWR0122" H 5500 8650 30  0001 C CNN
F 1 "GND" H 5500 8580 30  0001 C CNN
	1    5500 8650
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH_SMALL SW1101
U 1 1 4D74F1F5
P 5700 8550
F 0 "SW1101" H 5850 8660 30  0000 C CNN
F 1 "Reset" H 5700 8471 30  0000 C CNN
	1    5700 8550
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR0123
U 1 1 4D74F1DC
P 5950 8450
F 0 "#PWR0123" H 5950 8410 30  0001 C CNN
F 1 "+3.3V" H 5950 8560 30  0000 C CNN
	1    5950 8450
	-1   0    0    1   
$EndComp
$Comp
L R R1107
U 1 1 4D74F1D2
P 5950 8200
F 0 "R1107" V 6030 8200 50  0000 C CNN
F 1 "100k" V 5950 8200 50  0000 C CNN
	1    5950 8200
	1    0    0    -1  
$EndComp
Text Label 7000 7950 2    60   ~ 0
NRST
$Comp
L GND #PWR0124
U 1 1 4D74F196
P 4900 7350
F 0 "#PWR0124" H 4900 7350 30  0001 C CNN
F 1 "GND" H 4900 7280 30  0001 C CNN
	1    4900 7350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0125
U 1 1 4D74F194
P 4900 6750
F 0 "#PWR0125" H 4900 6750 30  0001 C CNN
F 1 "GND" H 4900 6680 30  0001 C CNN
	1    4900 6750
	0    1    1    0   
$EndComp
$Comp
L C C1102
U 1 1 4D74F18D
P 5100 7350
F 0 "C1102" H 5150 7450 50  0000 L CNN
F 1 "8pF" H 5150 7250 50  0000 L CNN
	1    5100 7350
	0    -1   -1   0   
$EndComp
$Comp
L C C1101
U 1 1 4D74F18B
P 5100 6750
F 0 "C1101" H 5150 6850 50  0000 L CNN
F 1 "8pF" H 5150 6650 50  0000 L CNN
	1    5100 6750
	0    1    1    0   
$EndComp
$Comp
L CRYSTAL X1101
U 1 1 4D74F17E
P 5500 7050
F 0 "X1101" H 5500 7200 60  0000 C CNN
F 1 "32KHz" H 5500 6900 60  0000 C CNN
	1    5500 7050
	0    1    1    0   
$EndComp
$Comp
L CP1 C1108
U 1 1 4D74F08A
P 7350 1550
F 0 "C1108" H 7400 1650 50  0000 L CNN
F 1 "100nF" H 7400 1450 50  0000 L CNN
	1    7350 1550
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR0126
U 1 1 4D74F052
P 4900 8300
F 0 "#PWR0126" H 4900 8300 30  0001 C CNN
F 1 "GND" H 4900 8230 30  0001 C CNN
	1    4900 8300
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0127
U 1 1 4D74F050
P 4900 7700
F 0 "#PWR0127" H 4900 7700 30  0001 C CNN
F 1 "GND" H 4900 7630 30  0001 C CNN
	1    4900 7700
	0    1    1    0   
$EndComp
$Comp
L C C1104
U 1 1 4D74F040
P 5100 8300
F 0 "C1104" H 5150 8400 50  0000 L CNN
F 1 "22pF" H 5150 8200 50  0000 L CNN
	1    5100 8300
	0    -1   -1   0   
$EndComp
$Comp
L C C1103
U 1 1 4D74F03D
P 5100 7700
F 0 "C1103" H 5150 7800 50  0000 L CNN
F 1 "22pF" H 5150 7600 50  0000 L CNN
	1    5100 7700
	0    1    1    0   
$EndComp
$Comp
L CRYSTAL X1102
U 1 1 4D74F023
P 5500 8000
F 0 "X1102" H 5500 8150 60  0000 C CNN
F 1 "8MHz" H 5500 7850 60  0000 C CNN
	1    5500 8000
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0128
U 1 1 4D74F016
P 6150 7550
F 0 "#PWR0128" H 6150 7550 30  0001 C CNN
F 1 "GND" H 6150 7480 30  0001 C CNN
	1    6150 7550
	0    1    1    0   
$EndComp
$Comp
L +BATT #PWR0129
U 1 1 4D74F00C
P 6650 7500
F 0 "#PWR0129" H 6650 7450 20  0001 C CNN
F 1 "+BATT" H 6650 7600 30  0000 C CNN
	1    6650 7500
	1    0    0    -1  
$EndComp
$Comp
L C C1106
U 1 1 4D74F000
P 6350 7550
F 0 "C1106" H 6400 7650 50  0000 L CNN
F 1 "100nF" H 6400 7450 50  0000 L CNN
	1    6350 7550
	0    1    1    0   
$EndComp
$Comp
L GND #PWR0130
U 1 1 4D74ED22
P 8000 9750
F 0 "#PWR0130" H 8000 9750 30  0001 C CNN
F 1 "GND" H 8000 9680 30  0001 C CNN
	1    8000 9750
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR0131
U 1 1 4D74ED1D
P 7350 9650
F 0 "#PWR0131" H 7350 9650 40  0001 C CNN
F 1 "GNDA" H 7350 9580 40  0000 C CNN
	1    7350 9650
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR0132
U 1 1 4D74ED0C
P 7350 1350
F 0 "#PWR0132" H 7350 1350 40  0001 C CNN
F 1 "GNDA" H 7350 1280 40  0000 C CNN
	1    7350 1350
	-1   0    0    1   
$EndComp
$Comp
L VAA #PWR1131
U 1 1 4D74ED03
P 7150 1800
F 0 "#PWR1131" H 7150 1860 30  0001 C CNN
F 1 "VAA" H 7150 1910 30  0000 C CNN
	1    7150 1800
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR0133
U 1 1 4D74EC62
P 8000 1650
F 0 "#PWR0133" H 8000 1610 30  0001 C CNN
F 1 "+3.3V" H 8000 1760 30  0000 C CNN
	1    8000 1650
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR0134
U 1 1 4D74EC28
P 9600 600
F 0 "#PWR0134" H 9600 560 30  0001 C CNN
F 1 "+3.3V" H 9600 710 30  0000 C CNN
	1    9600 600 
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR0135
U 1 1 4D74EC22
P 9600 1100
F 0 "#PWR0135" H 9600 1100 30  0001 C CNN
F 1 "GND" H 9600 1030 30  0001 C CNN
	1    9600 1100
	1    0    0    -1  
$EndComp
$Comp
L C C1119
U 1 1 4D74EBF2
P 11500 800
F 0 "C1119" H 11550 900 50  0000 L CNN
F 1 "100nF" H 11550 700 50  0000 L CNN
	1    11500 800 
	-1   0    0    1   
$EndComp
$Comp
L C C1118
U 1 1 4D74EBF1
P 10950 800
F 0 "C1118" H 11000 900 50  0000 L CNN
F 1 "100nF" H 11000 700 50  0000 L CNN
	1    10950 800 
	1    0    0    -1  
$EndComp
$Comp
L C C1117
U 1 1 4D74EBF0
P 10700 800
F 0 "C1117" H 10750 900 50  0000 L CNN
F 1 "100nF" H 10750 700 50  0000 L CNN
	1    10700 800 
	-1   0    0    1   
$EndComp
$Comp
L C C1113
U 1 1 4D74EBE5
P 9050 800
F 0 "C1113" H 9100 900 50  0000 L CNN
F 1 "100nF" H 9100 700 50  0000 L CNN
	1    9050 800 
	-1   0    0    1   
$EndComp
$Comp
L C C1114
U 1 1 4D74EBE4
P 9300 800
F 0 "C1114" H 9350 900 50  0000 L CNN
F 1 "100nF" H 9350 700 50  0000 L CNN
	1    9300 800 
	1    0    0    -1  
$EndComp
$Comp
L C C1115
U 1 1 4D74EBE3
P 9850 800
F 0 "C1115" H 9900 900 50  0000 L CNN
F 1 "100nF" H 9900 700 50  0000 L CNN
	1    9850 800 
	-1   0    0    1   
$EndComp
$Comp
L C C1116
U 1 1 4D74EBE2
P 10100 800
F 0 "C1116" H 10150 900 50  0000 L CNN
F 1 "100nF" H 10150 700 50  0000 L CNN
	1    10100 800 
	1    0    0    -1  
$EndComp
$Comp
L C C1112
U 1 1 4D74EBDA
P 8450 800
F 0 "C1112" H 8500 900 50  0000 L CNN
F 1 "100nF" H 8500 700 50  0000 L CNN
	1    8450 800 
	1    0    0    -1  
$EndComp
$Comp
L C C1111
U 1 1 4D74EBD6
P 8200 800
F 0 "C1111" H 8250 900 50  0000 L CNN
F 1 "100nF" H 8250 700 50  0000 L CNN
	1    8200 800 
	-1   0    0    1   
$EndComp
$Comp
L C C1110
U 1 1 4D74EBCF
P 7650 800
F 0 "C1110" H 7700 900 50  0000 L CNN
F 1 "100nF" H 7700 700 50  0000 L CNN
	1    7650 800 
	1    0    0    -1  
$EndComp
$Comp
L C C1109
U 1 1 4D74EBC2
P 7400 800
F 0 "C1109" H 7450 900 50  0000 L CNN
F 1 "100nF" H 7450 700 50  0000 L CNN
	1    7400 800 
	-1   0    0    1   
$EndComp
$Comp
L STM32F10XCDE_LQFP144 U1101
U 1 1 4D744637
P 7950 5750
F 0 "U1101" H 7950 5850 60  0000 C CNN
F 1 "STM32F103ZC" V 7900 5150 60  0000 C CNN
	1    7950 5750
	1    0    0    -1  
$EndComp
$EndSCHEMATC