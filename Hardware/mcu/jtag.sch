EESchema Schematic File Version 2  date Do 10 Mär 2011 01:37:58 CET
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
Sheet 3 9
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
L ARM_JTAG_10PIN P301
U 1 1 4D77ED79
P 4150 1900
F 0 "P301" H 4150 1550 60  0000 C CNN
F 1 "ARM_JTAG_10PIN" H 4150 2250 60  0000 C CNN
	1    4150 1900
	1    0    0    -1  
$EndComp
Text HLabel 3500 1800 0    60   Input ~ 0
nSRST
Text HLabel 4800 2000 2    60   Input ~ 0
TDO
Text HLabel 4800 1900 2    60   Output ~ 0
TCK
Text HLabel 4800 1800 2    60   Output ~ 0
TMS
Text HLabel 3500 2000 0    60   Output ~ 0
TDI
Text HLabel 3500 1900 0    60   Output ~ 0
nTRST
Text HLabel 4800 2100 2    60   Input ~ 0
UART_TX
Text HLabel 3500 2100 0    60   Output ~ 0
UART_RX
$Comp
L GND #PWR05
U 1 1 4D3F5D14
P 4800 1700
F 0 "#PWR05" H 4800 1700 30  0001 C CNN
F 1 "GND" H 4800 1630 30  0001 C CNN
	1    4800 1700
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR06
U 1 1 4D3F5D04
P 3500 1700
F 0 "#PWR06" H 3500 1660 30  0001 C CNN
F 1 "+3.3V" H 3500 1810 30  0000 C CNN
	1    3500 1700
	1    0    0    -1  
$EndComp
$EndSCHEMATC