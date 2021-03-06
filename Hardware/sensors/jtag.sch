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
Sheet 2 8
Title ""
Date "18 may 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text HLabel 3100 1900 2    60   Output ~ 0
UART_RX
Text HLabel 1800 1900 0    60   Input ~ 0
UART_TX
Text HLabel 1800 1600 0    60   Output ~ 0
NRST
Text HLabel 1800 1700 0    60   Output ~ 0
TRST
Text HLabel 1800 1800 0    60   Input ~ 0
TDI
Text HLabel 3100 1800 2    60   Output ~ 0
TDO
Text HLabel 3100 1700 2    60   Output ~ 0
JTCK
Text HLabel 3100 1600 2    60   Output ~ 0
JTMS
$Comp
L GND #PWR6
U 1 1 4D782A12
P 3100 1500
F 0 "#PWR6" H 3100 1500 30  0001 C CNN
F 1 "GND" H 3100 1430 30  0001 C CNN
	1    3100 1500
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR5
U 1 1 4D7829F9
P 1800 1500
F 0 "#PWR5" H 1800 1460 30  0001 C CNN
F 1 "+3.3V" H 1800 1610 30  0000 C CNN
	1    1800 1500
	1    0    0    -1  
$EndComp
$Comp
L ARM_JTAG_10PIN P201
U 1 1 4D7829F4
P 2450 1700
F 0 "P201" H 2450 1350 60  0000 C CNN
F 1 "ARM_JTAG_10PIN" H 2450 2050 60  0000 C CNN
	1    2450 1700
	1    0    0    -1  
$EndComp
$EndSCHEMATC
