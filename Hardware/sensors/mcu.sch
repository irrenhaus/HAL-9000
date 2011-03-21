EESchema Schematic File Version 2  date So 20 Mär 2011 20:56:18 CET
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
Sheet 3 8
Title ""
Date "20 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	1350 2400 1150 2400
Wire Wire Line
	1150 2400 1150 1900
Wire Wire Line
	1350 1900 1350 2200
Wire Wire Line
	2600 2400 2350 2400
Wire Wire Line
	4100 2800 2350 2800
Wire Wire Line
	4100 2600 2350 2600
Connection ~ 3200 4900
Wire Wire Line
	3200 4800 3200 4900
Wire Wire Line
	2800 5100 2800 5200
Wire Wire Line
	2800 6300 2800 6250
Connection ~ 6550 5000
Wire Wire Line
	6550 4950 6550 5000
Wire Wire Line
	2800 5600 2800 5750
Wire Wire Line
	3500 3200 4100 3200
Wire Wire Line
	3500 3100 4100 3100
Wire Wire Line
	3500 3000 4100 3000
Connection ~ 6400 5500
Wire Wire Line
	6400 5600 6400 5300
Connection ~ 8350 5700
Connection ~ 8300 5300
Wire Wire Line
	6400 4600 8050 4600
Connection ~ 8000 4600
Wire Wire Line
	8000 4800 8000 4600
Wire Wire Line
	6400 4200 7000 4200
Wire Wire Line
	8100 4200 8100 4300
Connection ~ 7700 4600
Wire Wire Line
	6400 5000 6700 5000
Wire Wire Line
	6400 4700 6500 4700
Wire Wire Line
	8300 5300 8300 5250
Connection ~ 8050 5300
Wire Wire Line
	8800 5300 7800 5300
Connection ~ 8550 5300
Wire Wire Line
	8350 5700 8350 5800
Connection ~ 8550 5700
Wire Wire Line
	7800 5700 8800 5700
Connection ~ 8050 5700
Connection ~ 6400 5400
Wire Wire Line
	6400 5450 6600 5450
Connection ~ 6400 5450
Wire Wire Line
	5700 1700 6000 1700
Wire Wire Line
	5700 1800 6100 1800
Wire Wire Line
	6100 1800 6100 1850
Wire Wire Line
	6100 1850 6250 1850
Wire Wire Line
	5850 1650 5850 1700
Connection ~ 5850 1700
Wire Wire Line
	2800 4650 2800 4700
Wire Wire Line
	3100 4900 4100 4900
Wire Wire Line
	3200 4250 3200 4300
Wire Wire Line
	4100 2500 2350 2500
Wire Wire Line
	2350 2700 4100 2700
Wire Wire Line
	2350 2900 4100 2900
Wire Wire Line
	2350 2300 2500 2300
Wire Wire Line
	1350 2300 1250 2300
Wire Wire Line
	1250 2300 1250 1900
$Comp
L CONN_3 K301
U 1 1 4D826006
P 1250 1550
F 0 "K301" V 1200 1550 50  0000 C CNN
F 1 "EXPA" V 1300 1550 40  0000 C CNN
	1    1250 1550
	0    -1   -1   0   
$EndComp
$Comp
L GNDA #PWR07
U 1 1 4D825FCF
P 2600 2400
F 0 "#PWR07" H 2600 2400 40  0001 C CNN
F 1 "GNDA" H 2600 2330 40  0000 C CNN
	1    2600 2400
	0    -1   -1   0   
$EndComp
$Comp
L VAA #PWR302
U 1 1 4D825FCC
P 2500 2300
F 0 "#PWR302" H 2500 2360 30  0001 C CNN
F 1 "VAA" H 2500 2410 30  0000 C CNN
	1    2500 2300
	0    1    1    0   
$EndComp
$Comp
L GND #PWR08
U 1 1 4D825F97
P 2350 2200
F 0 "#PWR08" H 2350 2200 30  0001 C CNN
F 1 "GND" H 2350 2130 30  0001 C CNN
	1    2350 2200
	0    -1   -1   0   
$EndComp
Text Label 4100 2500 2    60   ~ 0
ADC12_IN0
Text HLabel 1350 2500 0    60   Input ~ 0
ADC5
Text HLabel 1350 2600 0    60   Input ~ 0
ADC4
Text HLabel 1350 2700 0    60   Input ~ 0
ADC3
Text HLabel 1350 2800 0    60   Input ~ 0
ADC2
Text HLabel 1350 2900 0    60   Input ~ 0
ADC1
$Comp
L DG408 U304
U 1 1 4D825E4D
P 1850 2550
F 0 "U304" H 1850 2050 60  0000 C CNN
F 1 "DG408DYZ" H 1850 3050 60  0000 C CNN
	1    1850 2550
	-1   0    0    1   
$EndComp
$Comp
L CONN_6 P301
U 1 1 4D815118
P 10100 4900
F 0 "P301" V 10050 4900 60  0000 C CNN
F 1 "EXP1" V 10150 4900 60  0000 C CNN
	1    10100 4900
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR09
U 1 1 4D81509A
P 3200 4250
F 0 "#PWR09" H 3200 4210 30  0001 C CNN
F 1 "+3.3V" H 3200 4360 30  0000 C CNN
	1    3200 4250
	1    0    0    -1  
$EndComp
$Comp
L R R305
U 1 1 4D81508F
P 3200 4550
F 0 "R305" V 3280 4550 50  0000 C CNN
F 1 "100k" V 3200 4550 50  0000 C CNN
	1    3200 4550
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR010
U 1 1 4D81507C
P 2800 6300
F 0 "#PWR010" H 2800 6260 30  0001 C CNN
F 1 "+3.3V" H 2800 6410 30  0000 C CNN
	1    2800 6300
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR011
U 1 1 4D815059
P 2800 4650
F 0 "#PWR011" H 2800 4650 30  0001 C CNN
F 1 "GND" H 2800 4580 30  0001 C CNN
	1    2800 4650
	-1   0    0    1   
$EndComp
$Comp
L NPN Q301
U 1 1 4D815016
P 2900 4900
F 0 "Q301" H 2900 4750 50  0000 R CNN
F 1 "NPN" H 2900 5050 50  0000 R CNN
	1    2900 4900
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR012
U 1 1 4D7BB3F2
P 9750 5650
F 0 "#PWR012" H 9750 5650 30  0001 C CNN
F 1 "GND" H 9750 5580 30  0001 C CNN
	1    9750 5650
	0    1    1    0   
$EndComp
$Comp
L GND #PWR013
U 1 1 4D7BB3F0
P 9750 5450
F 0 "#PWR013" H 9750 5450 30  0001 C CNN
F 1 "GND" H 9750 5380 30  0001 C CNN
	1    9750 5450
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR014
U 1 1 4D7BB3E7
P 9750 5550
F 0 "#PWR014" H 9750 5510 30  0001 C CNN
F 1 "+3.3V" H 9750 5660 30  0000 C CNN
	1    9750 5550
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR015
U 1 1 4D7BB3E4
P 9750 5350
F 0 "#PWR015" H 9750 5310 30  0001 C CNN
F 1 "+3.3V" H 9750 5460 30  0000 C CNN
	1    9750 5350
	0    -1   -1   0   
$EndComp
$Comp
L CONN_4 P302
U 1 1 4D7BB3D8
P 10100 5500
F 0 "P302" V 10050 5500 50  0000 C CNN
F 1 "EXPPWR" V 10150 5500 50  0000 C CNN
	1    10100 5500
	1    0    0    -1  
$EndComp
Text Label 9750 5150 2    60   ~ 0
PB9
Text Label 9750 5050 2    60   ~ 0
PB8
Text Label 4100 5100 2    60   ~ 0
PB9
Text Label 4100 5000 2    60   ~ 0
PB8
Text Label 9750 4950 2    60   ~ 0
PD2
Text Label 6400 4400 0    60   ~ 0
PD2
Text Label 9750 4850 2    60   ~ 0
PC15
Text Label 9750 4750 2    60   ~ 0
PC14
Text Label 9750 4650 2    60   ~ 0
PC13
Text Label 6400 4000 0    60   ~ 0
PC15
Text Label 6400 3900 0    60   ~ 0
PC14
Text Label 6400 3800 0    60   ~ 0
PC13
Text HLabel 6400 3700 2    60   BiDi ~ 0
GYRO_ST2
Text HLabel 6400 3600 2    60   BiDi ~ 0
GYRO_PD2
Text HLabel 4100 4300 0    60   Input ~ 0
ADC12_IN9
Text HLabel 4100 4600 0    60   Input ~ 0
TRST
Text HLabel 4100 4500 0    60   Output ~ 0
JTDO
$Comp
L LED D301
U 1 1 4D7835F6
P 2800 5400
F 0 "D301" H 2800 5500 50  0000 C CNN
F 1 "Red" H 2800 5300 50  0000 C CNN
	1    2800 5400
	0    -1   -1   0   
$EndComp
$Comp
L R R301
U 1 1 4D7835F1
P 2800 6000
F 0 "R301" V 2880 6000 50  0000 C CNN
F 1 "100" V 2800 6000 50  0000 C CNN
	1    2800 6000
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR016
U 1 1 4D7835B8
P 6750 1850
F 0 "#PWR016" H 6750 1810 30  0001 C CNN
F 1 "+3.3V" H 6750 1960 30  0000 C CNN
	1    6750 1850
	1    0    0    -1  
$EndComp
$Comp
L R R302
U 1 1 4D7835B4
P 6500 1850
F 0 "R302" V 6580 1850 50  0000 C CNN
F 1 "100k" V 6500 1850 50  0000 C CNN
	1    6500 1850
	0    1    1    0   
$EndComp
$Comp
L +3.3V #PWR017
U 1 1 4D783570
P 4700 1900
F 0 "#PWR017" H 4700 1860 30  0001 C CNN
F 1 "+3.3V" H 4700 2010 30  0000 C CNN
	1    4700 1900
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR018
U 1 1 4D78355C
P 4700 2000
F 0 "#PWR018" H 4700 2000 30  0001 C CNN
F 1 "GND" H 4700 1930 30  0001 C CNN
	1    4700 2000
	0    1    1    0   
$EndComp
$Comp
L GND #PWR019
U 1 1 4D783558
P 6400 1700
F 0 "#PWR019" H 6400 1700 30  0001 C CNN
F 1 "GND" H 6400 1630 30  0001 C CNN
	1    6400 1700
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR020
U 1 1 4D783556
P 5850 1650
F 0 "#PWR020" H 5850 1610 30  0001 C CNN
F 1 "+3.3V" H 5850 1760 30  0000 C CNN
	1    5850 1650
	1    0    0    -1  
$EndComp
$Comp
L C C301
U 1 1 4D78354C
P 6200 1700
F 0 "C301" H 6250 1800 50  0000 L CNN
F 1 "100nF" H 6250 1600 50  0000 L CNN
	1    6200 1700
	0    -1   -1   0   
$EndComp
Text Label 4100 4400 2    60   ~ 0
~FLASH_CS
Text Label 4700 1700 2    60   ~ 0
~FLASH_CS
Text Label 5700 1900 0    60   ~ 0
SPI_SCK
Text Label 4700 1800 2    60   ~ 0
SPI_MISO
Text Label 5700 2000 0    60   ~ 0
SPI_MOSI
Text Label 3500 3100 2    60   ~ 0
SPI_MISO
Text Label 3500 3200 2    60   ~ 0
SPI_MOSI
Text Label 3500 3000 2    60   ~ 0
SPI_SCK
$Comp
L AT25DF041A U301
U 1 1 4D7834C4
P 5200 1850
F 0 "U301" H 5200 1550 60  0000 C CNN
F 1 "AT25DF041A" H 5200 2150 60  0000 C CNN
	1    5200 1850
	1    0    0    -1  
$EndComp
Text HLabel 6400 3500 2    60   BiDi ~ 0
PRESSURE_XCLR
Text HLabel 6400 3400 2    60   BiDi ~ 0
PRESSURE_EOC
Text HLabel 6400 3300 2    60   BiDi ~ 0
GYRO_PD
Text HLabel 6400 3200 2    60   BiDi ~ 0
GYRO_ST
Text HLabel 6400 3100 2    60   Input ~ 0
~FuelPump
Text HLabel 6400 3000 2    60   Input ~ 0
~FuelConsumption
Text HLabel 6400 2900 2    60   Input ~ 0
SPEED-REED
Text HLabel 6400 2800 2    60   BiDi ~ 0
PPS
Text HLabel 6400 2700 2    60   BiDi ~ 0
GPIO2
Text HLabel 6400 2600 2    60   BiDi ~ 0
GPIO1
Text HLabel 6400 2500 2    60   BiDi ~ 0
GPIO20
$Comp
L GND #PWR021
U 1 1 4D78306D
P 6400 6100
F 0 "#PWR021" H 6400 6100 30  0001 C CNN
F 1 "GND" H 6400 6030 30  0001 C CNN
	1    6400 6100
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR022
U 1 1 4D78306A
P 6400 6000
F 0 "#PWR022" H 6400 6000 30  0001 C CNN
F 1 "GND" H 6400 5930 30  0001 C CNN
	1    6400 6000
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR023
U 1 1 4D783068
P 6400 5900
F 0 "#PWR023" H 6400 5900 30  0001 C CNN
F 1 "GND" H 6400 5830 30  0001 C CNN
	1    6400 5900
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR024
U 1 1 4D783066
P 6400 5800
F 0 "#PWR024" H 6400 5800 30  0001 C CNN
F 1 "GND" H 6400 5730 30  0001 C CNN
	1    6400 5800
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR025
U 1 1 4D78305C
P 6600 5450
F 0 "#PWR025" H 6600 5410 30  0001 C CNN
F 1 "+3.3V" H 6600 5560 30  0000 C CNN
	1    6600 5450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR026
U 1 1 4D783047
P 8350 5800
F 0 "#PWR026" H 8350 5800 30  0001 C CNN
F 1 "GND" H 8350 5730 30  0001 C CNN
	1    8350 5800
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR027
U 1 1 4D783045
P 8300 5250
F 0 "#PWR027" H 8300 5210 30  0001 C CNN
F 1 "+3.3V" H 8300 5360 30  0000 C CNN
	1    8300 5250
	1    0    0    -1  
$EndComp
$Comp
L C C307
U 1 1 4D783032
P 8800 5500
F 0 "C307" H 8850 5600 50  0000 L CNN
F 1 "100nF" H 8850 5400 50  0000 L CNN
	1    8800 5500
	1    0    0    -1  
$EndComp
$Comp
L C C306
U 1 1 4D78302F
P 8550 5500
F 0 "C306" H 8600 5600 50  0000 L CNN
F 1 "100nF" H 8600 5400 50  0000 L CNN
	1    8550 5500
	-1   0    0    1   
$EndComp
$Comp
L C C305
U 1 1 4D78302B
P 8050 5500
F 0 "C305" H 8100 5600 50  0000 L CNN
F 1 "100nF" H 8100 5400 50  0000 L CNN
	1    8050 5500
	1    0    0    -1  
$EndComp
$Comp
L C C304
U 1 1 4D783029
P 7800 5500
F 0 "C304" H 7850 5600 50  0000 L CNN
F 1 "100nF" H 7850 5400 50  0000 L CNN
	1    7800 5500
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR028
U 1 1 4D78301A
P 7000 4700
F 0 "#PWR028" H 7000 4700 30  0001 C CNN
F 1 "GND" H 7000 4630 30  0001 C CNN
	1    7000 4700
	0    -1   -1   0   
$EndComp
$Comp
L R R303
U 1 1 4D783013
P 6750 4700
F 0 "R303" V 6830 4700 50  0000 C CNN
F 1 "100k" V 6750 4700 50  0000 C CNN
	1    6750 4700
	0    1    1    0   
$EndComp
NoConn ~ 6400 4300
$Comp
L GNDA #PWR029
U 1 1 4D782FE4
P 6400 5100
F 0 "#PWR029" H 6400 5100 40  0001 C CNN
F 1 "GNDA" H 6400 5030 40  0000 C CNN
	1    6400 5100
	0    -1   -1   0   
$EndComp
$Comp
L VAA #PWR316
U 1 1 4D782FDE
P 6550 4950
F 0 "#PWR316" H 6550 5010 30  0001 C CNN
F 1 "VAA" H 6550 5060 30  0000 C CNN
	1    6550 4950
	1    0    0    -1  
$EndComp
$Comp
L GNDA #PWR030
U 1 1 4D782FD9
P 7100 5000
F 0 "#PWR030" H 7100 5000 40  0001 C CNN
F 1 "GNDA" H 7100 4930 40  0000 C CNN
	1    7100 5000
	0    -1   -1   0   
$EndComp
NoConn ~ 6400 4800
$Comp
L CP1 C302
U 1 1 4D782FBA
P 6900 5000
F 0 "C302" H 6950 5100 50  0000 L CNN
F 1 "100nF" H 6950 4900 50  0000 L CNN
	1    6900 5000
	0    -1   -1   0   
$EndComp
$Comp
L STM32F10XRX U302
U 1 1 4D782F9C
P 5250 4250
F 0 "U302" H 5300 2600 60  0000 C CNN
F 1 "STM32F103R8" H 5200 2500 60  0000 C CNN
	1    5250 4250
	1    0    0    -1  
$EndComp
Text HLabel 4100 4700 0    60   Input ~ 0
TEMP1
Text HLabel 4100 4800 0    60   Input ~ 0
TEMP2
Text HLabel 4100 3500 0    60   Input ~ 0
USART_RX
Text HLabel 4100 3400 0    60   Output ~ 0
USART_TX
Text HLabel 4100 5300 0    60   BiDi ~ 0
I2C_SDA
Text HLabel 4100 5200 0    60   Output ~ 0
I2C_SCL
Text HLabel 4100 3300 0    60   Output ~ 0
~SPI1_CS
Text HLabel 4100 3200 0    60   Output ~ 0
SPI1_MOSI
Text HLabel 4100 3100 0    60   Input ~ 0
SPI1_MISO
Text HLabel 4100 3000 0    60   Output ~ 0
SPI1_SCK
Text HLabel 4100 5700 0    60   BiDi ~ 0
SPI2_MOSI
Text HLabel 4100 5600 0    60   BiDi ~ 0
SPI2_MISO
Text HLabel 4100 5500 0    60   BiDi ~ 0
SPI2_SCK
Text HLabel 4100 5400 0    60   Input ~ 0
~SPI2_NSS
Text HLabel 4100 4200 0    60   Input ~ 0
ADC12_IN8
$Comp
L GND #PWR031
U 1 1 4D7824FD
P 7700 5000
F 0 "#PWR031" H 7700 5000 30  0001 C CNN
F 1 "GND" H 7700 4930 30  0001 C CNN
	1    7700 5000
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR032
U 1 1 4D7824F7
P 8200 5000
F 0 "#PWR032" H 8200 5000 30  0001 C CNN
F 1 "GND" H 8200 4930 30  0001 C CNN
	1    8200 5000
	-1   0    0    -1  
$EndComp
$Comp
L +3.3V #PWR033
U 1 1 4D7824F5
P 8550 4600
F 0 "#PWR033" H 8550 4560 30  0001 C CNN
F 1 "+3.3V" H 8550 4710 30  0000 C CNN
	1    8550 4600
	-1   0    0    -1  
$EndComp
$Comp
L SW_PUSH_SMALL SW301
U 1 1 4D7824D6
P 8100 4900
F 0 "SW301" H 8250 5010 30  0000 C CNN
F 1 "reset" H 8100 4821 30  0000 C CNN
	1    8100 4900
	0    1    -1   0   
$EndComp
$Comp
L R R304
U 1 1 4D7824BD
P 8300 4600
F 0 "R304" V 8380 4600 50  0000 C CNN
F 1 "100k" V 8300 4600 50  0000 C CNN
	1    8300 4600
	0    -1   1    0   
$EndComp
$Comp
L C C303
U 1 1 4D7824B7
P 7700 4800
F 0 "C303" H 7750 4900 50  0000 L CNN
F 1 "100nF" H 7750 4700 50  0000 L CNN
	1    7700 4800
	1    0    0    1   
$EndComp
Text HLabel 7500 4600 3    60   Input ~ 0
NRST
Text HLabel 4100 4000 0    60   Input ~ 0
JTDI
Text HLabel 4100 3900 0    60   Input ~ 0
JTCK
Text HLabel 4100 3800 0    60   Input ~ 0
JTMS
$Comp
L +3.3V #PWR034
U 1 1 4D782474
P 8100 4200
F 0 "#PWR034" H 8100 4160 30  0001 C CNN
F 1 "+3.3V" H 8100 4310 30  0000 C CNN
	1    8100 4200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR035
U 1 1 4D782472
P 7000 4300
F 0 "#PWR035" H 7000 4300 30  0001 C CNN
F 1 "GND" H 7000 4230 30  0001 C CNN
	1    7000 4300
	0    1    1    0   
$EndComp
$Comp
L XO53 U303
U 1 1 4D782466
P 7550 4250
F 0 "U303" H 7550 4450 60  0000 C CNN
F 1 "8MHz" H 7550 4050 60  0000 C CNN
	1    7550 4250
	-1   0    0    1   
$EndComp
Text HLabel 4100 3700 0    60   Output ~ 0
CAN_TX
Text HLabel 4100 3600 0    60   Input ~ 0
CAN_RX
$EndSCHEMATC
