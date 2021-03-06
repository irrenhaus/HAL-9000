EESchema Schematic File Version 2  date Mi 18 Mai 2011 21:50:26 CEST
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
Sheet 8 8
Title ""
Date "18 may 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	3050 3950 2900 3950
Wire Wire Line
	3050 3750 2900 3750
Wire Wire Line
	3050 3300 2850 3300
Wire Wire Line
	3050 2850 2850 2850
Wire Wire Line
	3050 2650 2850 2650
Wire Wire Line
	2850 2550 3050 2550
Wire Wire Line
	2850 2750 3050 2750
Wire Wire Line
	2850 3200 3050 3200
Wire Wire Line
	2900 3650 3050 3650
Wire Wire Line
	2900 3850 3050 3850
Text HLabel 3050 3650 2    60   BiDi ~ 0
GPIO20
Text HLabel 3050 3750 2    60   BiDi ~ 0
GPIO1
Text HLabel 3050 3850 2    60   BiDi ~ 0
GPIO2
Text HLabel 3050 3950 2    60   Input ~ 0
PPS
$Comp
L +3.3V #PWR104
U 1 1 4D74D9A6
P 2900 4050
F 0 "#PWR104" H 2900 4010 30  0001 C CNN
F 1 "+3.3V" H 2900 4160 30  0000 C CNN
	1    2900 4050
	0    1    1    0   
$EndComp
$Comp
L CONN_5 P803
U 1 1 4D74D998
P 2500 3850
F 0 "P803" V 2450 3850 50  0000 C CNN
F 1 "GPSCTRL" V 2550 3850 50  0000 C CNN
	1    2500 3850
	-1   0    0    1   
$EndComp
Text HLabel 3050 3300 2    60   Output ~ 0
TX
Text HLabel 3050 3200 2    60   Input ~ 0
RX
$Comp
L GND #PWR102
U 1 1 4D74D91B
P 2850 3100
F 0 "#PWR102" H 2850 3100 30  0001 C CNN
F 1 "GND" H 2850 3030 30  0001 C CNN
	1    2850 3100
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR103
U 1 1 4D74D918
P 2850 3400
F 0 "#PWR103" H 2850 3360 30  0001 C CNN
F 1 "+3.3V" H 2850 3510 30  0000 C CNN
	1    2850 3400
	0    1    1    0   
$EndComp
$Comp
L CONN_4 P802
U 1 1 4D74D906
P 2500 3250
F 0 "P802" V 2450 3250 50  0000 C CNN
F 1 "GPS_UART" V 2550 3250 50  0000 C CNN
	1    2500 3250
	-1   0    0    1   
$EndComp
Text HLabel 3050 2550 2    60   Input ~ 0
~GPS_CS
Text HLabel 3050 2650 2    60   Input ~ 0
CLK
Text HLabel 3050 2750 2    60   Output ~ 0
MISO
Text HLabel 3050 2850 2    60   Input ~ 0
MOSI
$Comp
L CONN_4 P801
U 1 1 4D74D8C3
P 2500 2700
F 0 "P801" V 2450 2700 50  0000 C CNN
F 1 "GPS_SPI" V 2550 2700 50  0000 C CNN
	1    2500 2700
	-1   0    0    1   
$EndComp
Text Notes 2450 2100 0    60   ~ 0
http://www.watterott.com/de/Venus-GPS-Modul
$EndSCHEMATC
