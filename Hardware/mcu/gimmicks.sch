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
Sheet 3 11
Title ""
Date "9 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	1250 3350 1050 3350
Wire Wire Line
	1250 2600 1100 2600
Wire Wire Line
	1100 2400 1250 2400
Wire Wire Line
	1050 1200 1250 1200
Wire Wire Line
	1050 1000 1250 1000
Wire Wire Line
	1250 1100 1050 1100
Wire Wire Line
	1250 1300 1050 1300
Wire Wire Line
	1100 2500 1250 2500
Wire Wire Line
	1050 3250 1250 3250
$Comp
L GND #PWR04
U 1 1 4D74DE0C
P 1050 3550
F 0 "#PWR04" H 1050 3550 30  0001 C CNN
F 1 "GND" H 1050 3480 30  0001 C CNN
	1    1050 3550
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR05
U 1 1 4D74DE09
P 1050 3450
F 0 "#PWR05" H 1050 3410 30  0001 C CNN
F 1 "+3.3V" H 1050 3560 30  0000 C CNN
	1    1050 3450
	0    1    1    0   
$EndComp
Text HLabel 1250 3350 2    60   BiDi ~ 0
SDA
Text HLabel 1250 3250 2    60   Input ~ 0
SCL
$Comp
L CONN_4 P303
U 1 1 4D74DDCB
P 700 3400
F 0 "P303" V 650 3400 50  0000 C CNN
F 1 "HMC6352" V 750 3400 50  0000 C CNN
	1    700  3400
	-1   0    0    1   
$EndComp
Text Notes 600  2950 0    60   ~ 0
Kompass:\nhttp://www.watterott.com/de/Kompass-Modul-HMC6352
Text HLabel 1250 2600 2    60   Input ~ 0
GYRO_ST
Text HLabel 1250 2500 2    60   Input ~ 0
GYRO_PD
Text Notes 1800 2400 0    60   ~ 0
(Analog)
Text HLabel 1250 2400 2    60   Output ~ 0
GYRO_OUT
$Comp
L GND #PWR06
U 1 1 4D74DC76
P 1100 2300
F 0 "#PWR06" H 1100 2300 30  0001 C CNN
F 1 "GND" H 1100 2230 30  0001 C CNN
	1    1100 2300
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR07
U 1 1 4D74DC72
P 1100 2200
F 0 "#PWR07" H 1100 2160 30  0001 C CNN
F 1 "+3.3V" H 1100 2310 30  0000 C CNN
	1    1100 2200
	1    0    0    -1  
$EndComp
$Comp
L CONN_5 P302
U 1 1 4D74DC66
P 700 2400
F 0 "P302" V 650 2400 50  0000 C CNN
F 1 "ArduIMU" V 750 2400 50  0000 C CNN
	1    700  2400
	-1   0    0    1   
$EndComp
Text Notes 600  1900 0    60   ~ 0
Gyro:\nhttp://www.watterott.com/de/ArduIMU-Sensor-Board-Six-Degrees-of-Freedom-Daughter
$Comp
L +3.3V #PWR08
U 1 1 4D74DB69
P 1050 1500
F 0 "#PWR08" H 1050 1460 30  0001 C CNN
F 1 "+3.3V" H 1050 1610 30  0000 C CNN
	1    1050 1500
	0    1    1    0   
$EndComp
$Comp
L GND #PWR09
U 1 1 4D74DB62
P 1050 1400
F 0 "#PWR09" H 1050 1400 30  0001 C CNN
F 1 "GND" H 1050 1330 30  0001 C CNN
	1    1050 1400
	0    -1   -1   0   
$EndComp
Text HLabel 1250 1300 2    60   Input ~ 0
PRESSURE_EOC
Text HLabel 1250 1200 2    60   Input ~ 0
PRESSURE_XCLR
Text HLabel 1250 1100 2    60   Input ~ 0
SCL
Text HLabel 1250 1000 2    60   BiDi ~ 0
SDA
$Comp
L CONN_6 P301
U 1 1 4D74DB0A
P 700 1250
F 0 "P301" V 650 1250 60  0000 C CNN
F 1 "BMP085" V 750 1250 60  0000 C CNN
	1    700  1250
	-1   0    0    1   
$EndComp
Text Notes 600  700  0    60   ~ 0
Luftdrucksensor:\nhttp://www.watterott.com/de/Breakout-Board-mit-dem-BMP085-absoluten-Drucksensor
$EndSCHEMATC
