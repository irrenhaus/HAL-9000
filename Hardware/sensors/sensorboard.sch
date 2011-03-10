EESchema Schematic File Version 2  date Do 10 Mär 2011 03:25:53 CET
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
Sheet 1 8
Title ""
Date "10 mar 2011"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	2250 2850 3150 2850
Wire Wire Line
	2250 2750 3150 2750
Wire Wire Line
	6700 2700 7800 2700
Wire Wire Line
	6700 2600 7800 2600
Wire Wire Line
	6700 2500 7800 2500
Wire Wire Line
	6700 2350 7800 2350
Wire Wire Line
	6700 2250 7800 2250
Wire Wire Line
	6700 1800 7800 1800
Wire Wire Line
	6700 1700 7800 1700
Wire Wire Line
	6700 1600 7800 1600
Wire Wire Line
	6700 1500 7800 1500
Wire Wire Line
	2250 5550 3150 5550
Wire Wire Line
	2250 5450 3150 5450
Wire Wire Line
	2250 5350 3150 5350
Wire Wire Line
	2250 5250 3150 5250
Wire Wire Line
	2250 5150 3150 5150
Wire Wire Line
	2250 5050 3150 5050
Wire Wire Line
	2250 3650 3150 3650
Wire Wire Line
	2250 3550 3150 3550
Wire Wire Line
	2250 3450 3150 3450
Wire Wire Line
	2250 3350 3150 3350
Wire Wire Line
	6700 3250 7800 3250
Wire Wire Line
	6700 3150 7800 3150
Wire Wire Line
	6700 3050 7800 3050
Wire Wire Line
	6700 2950 7800 2950
Wire Wire Line
	2250 3850 3150 3850
Wire Wire Line
	2250 3950 3150 3950
Wire Wire Line
	3150 2650 2250 2650
Wire Wire Line
	600  1800 550  1800
Wire Wire Line
	550  1800 550  4150
Wire Wire Line
	550  4150 1300 4150
Wire Wire Line
	3150 2200 2250 2200
Wire Wire Line
	3150 2300 2250 2300
Wire Wire Line
	6700 1250 7800 1250
Wire Wire Line
	6700 1350 7800 1350
Wire Wire Line
	6700 800  7800 800 
Wire Wire Line
	6700 900  7800 900 
Wire Wire Line
	6700 1000 7800 1000
Wire Wire Line
	6700 1100 7800 1100
Wire Wire Line
	2250 2450 3150 2450
Wire Wire Line
	2250 2550 3150 2550
Text Label 2250 5750 0    60   ~ 0
USART_TX
Text Label 2250 5850 0    60   ~ 0
USART_RX
Text Label 6700 1350 0    60   ~ 0
USART_TX
Text Label 6700 1250 0    60   ~ 0
USART_RX
$Sheet
S 1450 4950 800  1000
U 4D7829DD
F0 "JTAG" 60
F1 "jtag.sch" 60
F2 "UART_TX" I R 2250 5850 60 
F3 "UART_RX" O R 2250 5750 60 
F4 "NRST" O R 2250 5050 60 
F5 "TRST" O R 2250 5150 60 
F6 "TDI" I R 2250 5350 60 
F7 "TDO" O R 2250 5250 60 
F8 "JTCK" O R 2250 5450 60 
F9 "JTMS" O R 2250 5550 60 
$EndSheet
Text Notes 1400 2700 0    60   ~ 0
Analog
Text Notes 7850 2900 0    60   ~ 0
Analog:
$Sheet
S 3150 700  3550 6550
U 4D782012
F0 "MCU" 60
F1 "mcu.sch" 60
F2 "ADC12_IN8" I L 3150 2650 60 
F3 "ADC12_IN4" I R 6700 3250 60 
F4 "NRST" I L 3150 5050 60 
F5 "JTDI" I L 3150 5350 60 
F6 "JTCK" I L 3150 5450 60 
F7 "JTMS" I L 3150 5550 60 
F8 "CAN_TX" O L 3150 3950 60 
F9 "CAN_RX" I L 3150 3850 60 
F10 "~SPI1_CS" O R 6700 1500 60 
F11 "SPI1_MOSI" O R 6700 1800 60 
F12 "SPI1_MISO" I R 6700 1700 60 
F13 "SPI1_SCK" O R 6700 1600 60 
F14 "ADC12_IN3" I R 6700 2950 60 
F15 "ADC12_IN2" I R 6700 3050 60 
F16 "ADC12_IN9" I R 6700 3150 60 
F17 "SPI2_MOSI" B L 3150 3550 60 
F18 "SPI2_MISO" B L 3150 3450 60 
F19 "SPI2_SCK" B L 3150 3650 60 
F20 "~SPI2_NSS" I L 3150 3350 60 
F21 "I2C_SDA" B L 3150 2200 60 
F22 "I2C_SCL" O L 3150 2300 60 
F23 "USART_RX" I R 6700 1250 60 
F24 "USART_TX" O R 6700 1350 60 
F25 "TEMP1" I R 6700 2250 60 
F26 "TEMP2" I R 6700 2350 60 
F27 "GPIO2" B R 6700 1000 60 
F28 "GPIO1" B R 6700 900 60 
F29 "GPIO20" B R 6700 800 60 
F30 "PPS" B R 6700 1100 60 
F31 "~FuelPump" I R 6700 2700 60 
F32 "~FuelConsumption" I R 6700 2600 60 
F33 "SPEED-REED" I R 6700 2500 60 
F34 "GYRO_PD" I L 3150 2550 60 
F35 "GYRO_ST" I L 3150 2450 60 
F36 "PRESSURE_XCLR" B L 3150 2850 60 
F37 "PRESSURE_EOC" B L 3150 2750 60 
F38 "JTDO" O L 3150 5250 60 
F39 "TRST" I L 3150 5150 60 
$EndSheet
$Sheet
S 1300 3250 950  950 
U 4D781E41
F0 "Connectors" 60
F1 "connectors.sch" 60
F2 "~SPI_CS" B R 2250 3350 60 
F3 "SPI_MISO" O R 2250 3450 60 
F4 "SPI_MOSI" I R 2250 3550 60 
F5 "SPI_SCK" I R 2250 3650 60 
F6 "CAN_RX" O R 2250 3850 60 
F7 "CAN_TX" I R 2250 3950 60 
F8 "EXTVCC" O L 1300 4150 60 
$EndSheet
$Sheet
S 600  650  500  1250
U 4D781E36
F0 "Power" 60
F1 "power.sch" 60
F2 "EXTVCC" O L 600 1800 60 
$EndSheet
$Sheet
S 1400 2150 850  800 
U 4D781E1F
F0 "Gimmicks" 60
F1 "gimmicks.sch" 60
F2 "SDA" B R 2250 2200 60 
F3 "SCL" I R 2250 2300 60 
F4 "GYRO_ST" I R 2250 2450 60 
F5 "GYRO_PD" I R 2250 2550 60 
F6 "GYRO_OUT" O R 2250 2650 60 
F7 "PRESSURE_EOC" I R 2250 2750 60 
F8 "PRESSURE_XCLR" I R 2250 2850 60 
$EndSheet
$Sheet
S 7800 2200 1020 1150
U 4D781E19
F0 "Sensors" 60
F1 "sensors.sch" 60
F2 "TEMP1" B L 7800 2250 60 
F3 "TEMP2" B L 7800 2350 60 
F4 "ReserveSensor" O L 7800 2950 60 
F5 "Speed-Reed" O L 7800 2500 60 
F6 "CoolantTemp" O L 7800 3250 60 
F7 "FuelLevel" O L 7800 3150 60 
F8 "RPM" O L 7800 3050 60 
F9 "~FuelConsumption" O L 7800 2600 60 
F10 "~FuelPump" O L 7800 2700 60 
$EndSheet
$Sheet
S 7800 700  1000 1200
U 4D781E14
F0 "GPS" 60
F1 "gps.sch" 60
F2 "GPIO20" B L 7800 800 60 
F3 "GPIO1" B L 7800 900 60 
F4 "GPIO2" B L 7800 1000 60 
F5 "PPS" I L 7800 1100 60 
F6 "TX" O L 7800 1250 60 
F7 "RX" I L 7800 1350 60 
F8 "~GPS_CS" I L 7800 1500 60 
F9 "CLK" I L 7800 1600 60 
F10 "MISO" O L 7800 1700 60 
F11 "MOSI" I L 7800 1800 60 
$EndSheet
$EndSCHEMATC
