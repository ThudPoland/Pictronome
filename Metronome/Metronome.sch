EESchema Schematic File Version 2
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
LIBS:microchip8bit
LIBS:reson
LIBS:lcd-display
LIBS:opamp
LIBS:new-transistors
LIBS:Metronome-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L VDD #PWR01
U 1 1 5738E2D6
P 3600 2000
F 0 "#PWR01" H 3600 1850 50  0001 C CNN
F 1 "VDD" V 3618 2127 50  0000 L CNN
F 2 "" H 3600 2000 50  0000 C CNN
F 3 "" H 3600 2000 50  0000 C CNN
	1    3600 2000
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR02
U 1 1 5738E2FB
P 3600 2200
F 0 "#PWR02" H 3600 1950 50  0001 C CNN
F 1 "GND" V 3605 2072 50  0000 R CNN
F 2 "" H 3600 2200 50  0000 C CNN
F 3 "" H 3600 2200 50  0000 C CNN
	1    3600 2200
	0    1    1    0   
$EndComp
$Comp
L VDD #PWR03
U 1 1 5738F4F6
P 1300 4700
F 0 "#PWR03" H 1300 4550 50  0001 C CNN
F 1 "VDD" H 1317 4873 50  0000 C CNN
F 2 "" H 1300 4700 50  0000 C CNN
F 3 "" H 1300 4700 50  0000 C CNN
	1    1300 4700
	1    0    0    -1  
$EndComp
$Comp
L R R13
U 1 1 5738F73E
P 2200 4750
F 0 "R13" V 2300 4750 50  0000 C CNN
F 1 "10K" V 2084 4750 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2130 4750 50  0001 C CNN
F 3 "" H 2200 4750 50  0000 C CNN
	1    2200 4750
	0    1    1    0   
$EndComp
$Comp
L C C6
U 1 1 5739025A
P 1650 4750
F 0 "C6" V 1700 4650 50  0000 C CNN
F 1 "100N" V 1600 4600 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 1688 4600 50  0001 C CNN
F 3 "" H 1650 4750 50  0000 C CNN
	1    1650 4750
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW1
U 1 1 5739046F
P 1650 5000
F 0 "SW1" H 1800 5100 50  0000 C CNN
F 1 "SW_PUSH" H 1650 4900 50  0000 C CNN
F 2 "SWITCHES:TACT_SW3.3PER6" H 1650 5000 50  0001 C CNN
F 3 "" H 1650 5000 50  0000 C CNN
	1    1650 5000
	1    0    0    -1  
$EndComp
Text GLabel 2050 5000 2    39   Input ~ 0
BUT1OUT
$Comp
L R R14
U 1 1 57390D3B
P 2200 5350
F 0 "R14" V 2300 5350 50  0000 C CNN
F 1 "10K" V 2084 5350 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2130 5350 50  0001 C CNN
F 3 "" H 2200 5350 50  0000 C CNN
	1    2200 5350
	0    1    1    0   
$EndComp
$Comp
L C C7
U 1 1 57390D41
P 1650 5350
F 0 "C7" V 1700 5250 50  0000 C CNN
F 1 "100N" V 1600 5200 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 1688 5200 50  0001 C CNN
F 3 "" H 1650 5350 50  0000 C CNN
	1    1650 5350
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW2
U 1 1 57390D47
P 1650 5600
F 0 "SW2" H 1800 5700 50  0000 C CNN
F 1 "SW_PUSH" H 1650 5500 50  0000 C CNN
F 2 "SWITCHES:TACT_SW3.3PER6" H 1650 5600 50  0001 C CNN
F 3 "" H 1650 5600 50  0000 C CNN
	1    1650 5600
	1    0    0    -1  
$EndComp
Text GLabel 2050 5600 2    39   Input ~ 0
BUT2OUT
$Comp
L R R15
U 1 1 57391020
P 2200 5950
F 0 "R15" V 2300 5950 50  0000 C CNN
F 1 "10K" V 2084 5950 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2130 5950 50  0001 C CNN
F 3 "" H 2200 5950 50  0000 C CNN
	1    2200 5950
	0    1    1    0   
$EndComp
$Comp
L C C8
U 1 1 57391026
P 1650 5950
F 0 "C8" V 1700 5850 50  0000 C CNN
F 1 "100N" V 1600 5800 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 1688 5800 50  0001 C CNN
F 3 "" H 1650 5950 50  0000 C CNN
	1    1650 5950
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW3
U 1 1 5739102C
P 1650 6200
F 0 "SW3" H 1800 6300 50  0000 C CNN
F 1 "SW_PUSH" H 1650 6100 50  0000 C CNN
F 2 "SWITCHES:TACT_SW3.3PER6" H 1650 6200 50  0001 C CNN
F 3 "" H 1650 6200 50  0000 C CNN
	1    1650 6200
	1    0    0    -1  
$EndComp
Text GLabel 2050 6200 2    39   Input ~ 0
BUT3OUT
$Comp
L R R16
U 1 1 5739103D
P 2200 6550
F 0 "R16" V 2300 6550 50  0000 C CNN
F 1 "10K" V 2084 6550 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2130 6550 50  0001 C CNN
F 3 "" H 2200 6550 50  0000 C CNN
	1    2200 6550
	0    1    1    0   
$EndComp
$Comp
L C C9
U 1 1 57391043
P 1650 6550
F 0 "C9" V 1700 6450 50  0000 C CNN
F 1 "100N" V 1600 6400 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 1688 6400 50  0001 C CNN
F 3 "" H 1650 6550 50  0000 C CNN
	1    1650 6550
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW4
U 1 1 57391049
P 1650 6800
F 0 "SW4" H 1800 6900 50  0000 C CNN
F 1 "SW_PUSH" H 1650 6700 50  0000 C CNN
F 2 "SWITCHES:TACT_SW3.3PER6" H 1650 6800 50  0001 C CNN
F 3 "" H 1650 6800 50  0000 C CNN
	1    1650 6800
	1    0    0    -1  
$EndComp
Text GLabel 2050 6800 2    39   Input ~ 0
BUT4OUT
$Comp
L 74HC04 U3
U 1 1 573B63D1
P 3700 4750
F 0 "U3" H 3900 4900 50  0000 C CNN
F 1 "74HC04" H 3900 5000 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 4750 50  0001 C CNN
F 3 "" H 3700 4750 50  0000 C CNN
	1    3700 4750
	1    0    0    -1  
$EndComp
$Comp
L 74HC04 U3
U 2 1 573B6602
P 3700 5350
F 0 "U3" H 3900 5500 50  0000 C CNN
F 1 "74HC04" H 3900 5600 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 5350 50  0001 C CNN
F 3 "" H 3700 5350 50  0000 C CNN
	2    3700 5350
	1    0    0    -1  
$EndComp
$Comp
L 74HC04 U3
U 3 1 573B6660
P 3700 5950
F 0 "U3" H 3700 6265 50  0000 C CNN
F 1 "74HC04" H 3700 6174 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 5950 50  0001 C CNN
F 3 "" H 3700 5950 50  0000 C CNN
	3    3700 5950
	1    0    0    -1  
$EndComp
$Comp
L 74HC04 U3
U 4 1 573B66F3
P 3700 6550
F 0 "U3" H 3700 6865 50  0000 C CNN
F 1 "74HC04" H 3700 6774 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 6550 50  0001 C CNN
F 3 "" H 3700 6550 50  0000 C CNN
	4    3700 6550
	1    0    0    -1  
$EndComp
Text GLabel 3200 4750 0    39   Input ~ 0
BUT1OUT
Text GLabel 3200 5350 0    39   Input ~ 0
BUT2OUT
Text GLabel 3200 5950 0    39   Input ~ 0
BUT3OUT
Text GLabel 3200 6550 0    39   Input ~ 0
BUT4OUT
$Comp
L 74HC04 U3
U 5 1 573B6D85
P 3700 7050
F 0 "U3" H 3700 7365 50  0000 C CNN
F 1 "74HC04" H 3700 7274 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 7050 50  0001 C CNN
F 3 "" H 3700 7050 50  0000 C CNN
	5    3700 7050
	1    0    0    -1  
$EndComp
Text GLabel 3200 7050 0    39   Input ~ 0
BUT5OUT
Text GLabel 4200 4750 2    39   Input ~ 0
BUT1MCU
Text GLabel 4200 5350 2    39   Input ~ 0
BUT2MCU
Text GLabel 4200 5950 2    39   Input ~ 0
BUT3MCU
Text GLabel 4200 6550 2    39   Input ~ 0
BUT4MCU
Text GLabel 4200 7050 2    39   Input ~ 0
BUT5MCU
$Comp
L 74HC04 U3
U 6 1 573B7D83
P 3700 7550
F 0 "U3" H 3700 7865 50  0000 C CNN
F 1 "74HC04" H 3700 7774 50  0000 C CNN
F 2 "SMD_Packages:SOIC-14_N" H 3700 7550 50  0001 C CNN
F 3 "" H 3700 7550 50  0000 C CNN
	6    3700 7550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 573B7FF1
P 3200 7600
F 0 "#PWR04" H 3200 7350 50  0001 C CNN
F 1 "GND" H 3205 7427 50  0000 C CNN
F 2 "" H 3200 7600 50  0000 C CNN
F 3 "" H 3200 7600 50  0000 C CNN
	1    3200 7600
	1    0    0    -1  
$EndComp
NoConn ~ 4150 7550
$Comp
L R R17
U 1 1 573B88C0
P 2200 7150
F 0 "R17" V 2300 7150 50  0000 C CNN
F 1 "10K" V 2084 7150 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2130 7150 50  0001 C CNN
F 3 "" H 2200 7150 50  0000 C CNN
	1    2200 7150
	0    1    1    0   
$EndComp
$Comp
L C C10
U 1 1 573B88C6
P 1650 7150
F 0 "C10" V 1700 7050 50  0000 C CNN
F 1 "100N" V 1600 7000 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 1688 7000 50  0001 C CNN
F 3 "" H 1650 7150 50  0000 C CNN
	1    1650 7150
	0    1    1    0   
$EndComp
$Comp
L SW_PUSH SW5
U 1 1 573B88CC
P 1650 7400
F 0 "SW5" H 1800 7500 50  0000 C CNN
F 1 "SW_PUSH" H 1650 7300 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 1650 7400 50  0001 C CNN
F 3 "" H 1650 7400 50  0000 C CNN
	1    1650 7400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 573B8A04
P 2700 7200
F 0 "#PWR05" H 2700 6950 50  0001 C CNN
F 1 "GND" H 2705 7027 50  0000 C CNN
F 2 "" H 2700 7200 50  0000 C CNN
F 3 "" H 2700 7200 50  0000 C CNN
	1    2700 7200
	1    0    0    -1  
$EndComp
Text GLabel 2050 7400 2    39   Input ~ 0
BUT5OUT
Text GLabel 5200 2750 2    39   Input ~ 0
METRONOME
$Comp
L VDD #PWR06
U 1 1 573B99DE
P 9350 1050
F 0 "#PWR06" H 9350 900 50  0001 C CNN
F 1 "VDD" H 9367 1223 50  0000 C CNN
F 2 "" H 9350 1050 50  0000 C CNN
F 3 "" H 9350 1050 50  0000 C CNN
	1    9350 1050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR07
U 1 1 573B9ACD
P 9400 1200
F 0 "#PWR07" H 9400 950 50  0001 C CNN
F 1 "GND" V 9405 1072 50  0000 R CNN
F 2 "" H 9400 1200 50  0000 C CNN
F 3 "" H 9400 1200 50  0000 C CNN
	1    9400 1200
	0    -1   -1   0   
$EndComp
Text GLabel 8350 1100 0    39   Input ~ 0
CLKOUT
Text GLabel 5200 2550 2    39   Input ~ 0
CLKOUT
Text GLabel 3700 2550 0    39   Input ~ 0
BUT1MCU
Text GLabel 3700 2650 0    39   Input ~ 0
BUT2MCU
Text GLabel 3700 2750 0    39   Input ~ 0
BUT3MCU
Text GLabel 5200 2150 2    39   Input ~ 0
BUT4MCU
Text GLabel 5200 2250 2    39   Input ~ 0
BUT5MCU
Text GLabel 5200 1950 2    39   Input ~ 0
SDA
Text GLabel 5200 2050 2    39   Input ~ 0
SCL
Text GLabel 2400 2550 3    39   Input ~ 0
SCL
Text GLabel 2650 2550 3    39   Input ~ 0
SDA
$Comp
L R R3
U 1 1 573BBD73
P 2650 2350
F 0 "R3" H 2720 2396 50  0000 L CNN
F 1 "1K" H 2720 2305 50  0000 L CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2580 2350 50  0001 C CNN
F 3 "" H 2650 2350 50  0000 C CNN
	1    2650 2350
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 573BBE3F
P 2400 2350
F 0 "R2" H 2470 2396 50  0000 L CNN
F 1 "1K" H 2470 2305 50  0000 L CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 2330 2350 50  0001 C CNN
F 3 "" H 2400 2350 50  0000 C CNN
	1    2400 2350
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR08
U 1 1 573BC1BF
P 2650 2150
F 0 "#PWR08" H 2650 2000 50  0001 C CNN
F 1 "VDD" H 2667 2323 50  0000 C CNN
F 2 "" H 2650 2150 50  0000 C CNN
F 3 "" H 2650 2150 50  0000 C CNN
	1    2650 2150
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR09
U 1 1 573BC283
P 2400 2150
F 0 "#PWR09" H 2400 2000 50  0001 C CNN
F 1 "VDD" H 2417 2323 50  0000 C CNN
F 2 "" H 2400 2150 50  0000 C CNN
F 3 "" H 2400 2150 50  0000 C CNN
	1    2400 2150
	1    0    0    -1  
$EndComp
Text GLabel 5200 1850 2    39   Input ~ 0
PWMOUT
$Comp
L R R1
U 1 1 573B84F2
P 3600 1450
F 0 "R1" H 3670 1496 50  0000 L CNN
F 1 "4,7K" H 3670 1405 50  0000 L CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 3530 1450 50  0001 C CNN
F 3 "" H 3600 1450 50  0000 C CNN
	1    3600 1450
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR010
U 1 1 573B86A4
P 3600 1250
F 0 "#PWR010" H 3600 1100 50  0001 C CNN
F 1 "VDD" H 3617 1423 50  0000 C CNN
F 2 "" H 3600 1250 50  0000 C CNN
F 3 "" H 3600 1250 50  0000 C CNN
	1    3600 1250
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X05 P3
U 1 1 573B89D4
P 1500 1450
F 0 "P3" H 1419 1025 50  0000 C CNN
F 1 "CONN_01X05" H 1419 1116 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05" H 1500 1450 50  0001 C CNN
F 3 "" H 1500 1450 50  0000 C CNN
	1    1500 1450
	-1   0    0    1   
$EndComp
$Comp
L VDD #PWR011
U 1 1 573B8BB6
P 1800 1350
F 0 "#PWR011" H 1800 1200 50  0001 C CNN
F 1 "VDD" V 1817 1478 50  0000 L CNN
F 2 "" H 1800 1350 50  0000 C CNN
F 3 "" H 1800 1350 50  0000 C CNN
	1    1800 1350
	0    1    1    0   
$EndComp
$Comp
L GND #PWR012
U 1 1 573B8D14
P 1800 1450
F 0 "#PWR012" H 1800 1200 50  0001 C CNN
F 1 "GND" V 1805 1322 50  0000 R CNN
F 2 "" H 1800 1450 50  0000 C CNN
F 3 "" H 1800 1450 50  0000 C CNN
	1    1800 1450
	0    -1   -1   0   
$EndComp
Text GLabel 1750 1250 2    39   Input ~ 0
RESET
Text GLabel 3550 1650 0    39   Input ~ 0
RESET
Text GLabel 1750 1550 2    39   Input ~ 0
ICSPDAT
Text GLabel 3700 1850 0    39   Input ~ 0
ICSPDAT
Text GLabel 1750 1650 2    39   Input ~ 0
ICPSCLK
Text GLabel 3700 1750 0    39   Input ~ 0
ICPSCLK
$Comp
L RX1602 DP1
U 1 1 573BAE5E
P 6900 1250
F 0 "DP1" H 6900 1641 39  0000 C CNN
F 1 "RX1602" H 6900 1566 39  0000 C CNN
F 2 "DISPLAY:RX1602" H 6925 400 39  0001 C CNN
F 3 "" H 6925 400 39  0000 C CNN
	1    6900 1250
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR013
U 1 1 573BAFCA
P 6150 1050
F 0 "#PWR013" H 6150 900 50  0001 C CNN
F 1 "VDD" H 6167 1223 50  0000 C CNN
F 2 "" H 6150 1050 50  0000 C CNN
F 3 "" H 6150 1050 50  0000 C CNN
	1    6150 1050
	1    0    0    -1  
$EndComp
Text GLabel 7650 1200 2    39   Input ~ 0
SCL
Text GLabel 7650 1100 2    39   Input ~ 0
SDA
$Comp
L GND #PWR014
U 1 1 573C8EB4
P 6150 1200
F 0 "#PWR014" H 6150 950 50  0001 C CNN
F 1 "GND" V 6155 1072 50  0000 R CNN
F 2 "" H 6150 1200 50  0000 C CNN
F 3 "" H 6150 1200 50  0000 C CNN
	1    6150 1200
	0    1    1    0   
$EndComp
$Comp
L GND #PWR015
U 1 1 573CD469
P 4350 4100
F 0 "#PWR015" H 4350 3850 50  0001 C CNN
F 1 "GND" H 4355 3927 50  0000 C CNN
F 2 "" H 4350 4100 50  0000 C CNN
F 3 "" H 4350 4100 50  0000 C CNN
	1    4350 4100
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR016
U 1 1 573CD9F5
P 4750 3650
F 0 "#PWR016" H 4750 3500 50  0001 C CNN
F 1 "VDD" H 4767 3823 50  0000 C CNN
F 2 "" H 4750 3650 50  0000 C CNN
F 3 "" H 4750 3650 50  0000 C CNN
	1    4750 3650
	1    0    0    -1  
$EndComp
$Comp
L SWITCH_INV SW7
U 1 1 573CE201
P 3100 3700
F 0 "SW7" H 3100 4025 50  0000 C CNN
F 1 "SWITCH_INV" H 3100 3934 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x03" H 3100 3700 50  0001 C CNN
F 3 "" H 3100 3700 50  0000 C CNN
	1    3100 3700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR017
U 1 1 573CEC1A
P 3900 4100
F 0 "#PWR017" H 3900 3850 50  0001 C CNN
F 1 "GND" H 3905 3927 50  0000 C CNN
F 2 "" H 3900 4100 50  0000 C CNN
F 3 "" H 3900 4100 50  0000 C CNN
	1    3900 4100
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR018
U 1 1 573CED26
P 4750 4100
F 0 "#PWR018" H 4750 3850 50  0001 C CNN
F 1 "GND" H 4755 3927 50  0000 C CNN
F 2 "" H 4750 4100 50  0000 C CNN
F 3 "" H 4750 4100 50  0000 C CNN
	1    4750 4100
	1    0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 573E0F1F
P 7500 1650
F 0 "R4" V 7293 1650 50  0000 C CNN
F 1 "150" V 7384 1650 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 7430 1650 50  0001 C CNN
F 3 "" H 7500 1650 50  0000 C CNN
	1    7500 1650
	0    1    1    0   
$EndComp
$Comp
L VDD #PWR019
U 1 1 573E10C2
P 7700 1650
F 0 "#PWR019" H 7700 1500 50  0001 C CNN
F 1 "VDD" V 7717 1778 50  0000 L CNN
F 2 "" H 7700 1650 50  0000 C CNN
F 3 "" H 7700 1650 50  0000 C CNN
	1    7700 1650
	0    1    1    0   
$EndComp
$Comp
L GND #PWR020
U 1 1 573E1975
P 7200 2550
F 0 "#PWR020" H 7200 2300 50  0001 C CNN
F 1 "GND" H 7205 2377 50  0000 C CNN
F 2 "" H 7200 2550 50  0000 C CNN
F 3 "" H 7200 2550 50  0000 C CNN
	1    7200 2550
	1    0    0    -1  
$EndComp
Text GLabel 6450 2150 0    39   Input ~ 0
PWMOUT
NoConn ~ 9300 1400
Text GLabel 5200 2350 2    39   Input ~ 0
DISPLAYENABLE
Text GLabel 6150 1400 0    39   Input ~ 0
DISPLAYENABLE
$Comp
L R R5
U 1 1 573E5A61
P 6650 2150
F 0 "R5" V 6750 2150 50  0000 C CNN
F 1 "1K" V 6550 2150 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 6580 2150 50  0001 C CNN
F 3 "" H 6650 2150 50  0000 C CNN
	1    6650 2150
	0    1    1    0   
$EndComp
$Comp
L R R6
U 1 1 573E6378
P 6850 2350
F 0 "R6" V 6950 2350 50  0000 C CNN
F 1 "100K" V 6750 2350 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 6780 2350 50  0001 C CNN
F 3 "" H 6850 2350 50  0000 C CNN
	1    6850 2350
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR021
U 1 1 573E664C
P 6850 2550
F 0 "#PWR021" H 6850 2300 50  0001 C CNN
F 1 "GND" H 6855 2377 50  0000 C CNN
F 2 "" H 6850 2550 50  0000 C CNN
F 3 "" H 6850 2550 50  0000 C CNN
	1    6850 2550
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 57442002
P 4450 1150
F 0 "C3" V 4198 1150 50  0000 C CNN
F 1 "100N" V 4289 1150 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 4488 1000 50  0001 C CNN
F 3 "" H 4450 1150 50  0000 C CNN
	1    4450 1150
	0    1    1    0   
$EndComp
$Comp
L VDD #PWR022
U 1 1 57442100
P 4650 1150
F 0 "#PWR022" H 4650 1000 50  0001 C CNN
F 1 "VDD" V 4667 1278 50  0000 L CNN
F 2 "" H 4650 1150 50  0000 C CNN
F 3 "" H 4650 1150 50  0000 C CNN
	1    4650 1150
	0    1    1    0   
$EndComp
$Comp
L CP C1
U 1 1 57442424
P 3900 3900
F 0 "C1" H 4018 3946 50  0000 L CNN
F 1 "10U" H 4018 3855 50  0000 L CNN
F 2 "Capacitors_SMD:C_1206_HandSoldering" H 3938 3750 50  0001 C CNN
F 3 "" H 3900 3900 50  0000 C CNN
	1    3900 3900
	1    0    0    -1  
$EndComp
$Comp
L CP C2
U 1 1 57442563
P 4750 3900
F 0 "C2" H 4868 3946 50  0000 L CNN
F 1 "100U" H 4868 3855 50  0000 L CNN
F 2 "Capacitors_Tantalum_SMD:TantalC_SizeC_EIA-6032_HandSoldering" H 4788 3750 50  0001 C CNN
F 3 "" H 4750 3900 50  0000 C CNN
	1    4750 3900
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR023
U 1 1 5744314F
P 4250 1150
F 0 "#PWR023" H 4250 900 50  0001 C CNN
F 1 "GND" V 4255 1022 50  0000 R CNN
F 2 "" H 4250 1150 50  0000 C CNN
F 3 "" H 4250 1150 50  0000 C CNN
	1    4250 1150
	0    1    1    0   
$EndComp
$Comp
L C C5
U 1 1 57443B0E
P 6100 6050
F 0 "C5" H 6150 6150 50  0000 L CNN
F 1 "100N" H 6100 5950 50  0000 L CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 6138 5900 50  0001 C CNN
F 3 "" H 6100 6050 50  0000 C CNN
	1    6100 6050
	-1   0    0    -1  
$EndComp
$Comp
L VDD #PWR024
U 1 1 57443B14
P 6100 5850
F 0 "#PWR024" H 6100 5700 50  0001 C CNN
F 1 "VDD" V 6117 5978 50  0000 L CNN
F 2 "" H 6100 5850 50  0000 C CNN
F 3 "" H 6100 5850 50  0000 C CNN
	1    6100 5850
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR025
U 1 1 57443B1B
P 6100 6250
F 0 "#PWR025" H 6100 6000 50  0001 C CNN
F 1 "GND" V 6105 6122 50  0000 R CNN
F 2 "" H 6100 6250 50  0000 C CNN
F 3 "" H 6100 6250 50  0000 C CNN
	1    6100 6250
	-1   0    0    -1  
$EndComp
$Comp
L C C4
U 1 1 57443B96
P 5700 6050
F 0 "C4" H 5750 6150 50  0000 L CNN
F 1 "100N" H 5700 5950 50  0000 L CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" H 5738 5900 50  0001 C CNN
F 3 "" H 5700 6050 50  0000 C CNN
	1    5700 6050
	-1   0    0    -1  
$EndComp
$Comp
L VDD #PWR026
U 1 1 57443B9C
P 5700 5850
F 0 "#PWR026" H 5700 5700 50  0001 C CNN
F 1 "VDD" V 5717 5978 50  0000 L CNN
F 2 "" H 5700 5850 50  0000 C CNN
F 3 "" H 5700 5850 50  0000 C CNN
	1    5700 5850
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR027
U 1 1 57443BA3
P 5700 6250
F 0 "#PWR027" H 5700 6000 50  0001 C CNN
F 1 "GND" V 5705 6122 50  0000 R CNN
F 2 "" H 5700 6250 50  0000 C CNN
F 3 "" H 5700 6250 50  0000 C CNN
	1    5700 6250
	-1   0    0    -1  
$EndComp
NoConn ~ 6850 1700
NoConn ~ 6750 1700
$Comp
L VDD #PWR028
U 1 1 5744E50D
P 6950 1750
F 0 "#PWR028" H 6950 1600 50  0001 C CNN
F 1 "VDD" H 6967 1923 50  0000 C CNN
F 2 "" H 6950 1750 50  0000 C CNN
F 3 "" H 6950 1750 50  0000 C CNN
	1    6950 1750
	-1   0    0    1   
$EndComp
$Comp
L R R11
U 1 1 5795942F
P 8750 4000
F 0 "R11" V 8957 4000 50  0000 C CNN
F 1 "100" V 8866 4000 50  0000 C CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 8680 4000 50  0001 C CNN
F 3 "" H 8750 4000 50  0000 C CNN
	1    8750 4000
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR029
U 1 1 57959876
P 9300 4400
F 0 "#PWR029" H 9300 4150 50  0001 C CNN
F 1 "GND" H 9305 4227 50  0000 C CNN
F 2 "" H 9300 4400 50  0000 C CNN
F 3 "" H 9300 4400 50  0000 C CNN
	1    9300 4400
	1    0    0    -1  
$EndComp
$Comp
L R R12
U 1 1 57969E55
P 8950 4200
F 0 "R12" H 8880 4154 50  0000 R CNN
F 1 "470K" H 8880 4245 50  0000 R CNN
F 2 "Resistors_SMD:R_0603_HandSoldering" V 8880 4200 50  0001 C CNN
F 3 "" H 8950 4200 50  0000 C CNN
	1    8950 4200
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR030
U 1 1 5796A8EC
P 8950 4400
F 0 "#PWR030" H 8950 4150 50  0001 C CNN
F 1 "GND" H 8955 4227 50  0000 C CNN
F 2 "" H 8950 4400 50  0000 C CNN
F 3 "" H 8950 4400 50  0000 C CNN
	1    8950 4400
	1    0    0    -1  
$EndComp
$Comp
L PWR_FLAG #FLG031
U 1 1 5797F436
P 3900 3650
F 0 "#FLG031" H 3900 3745 50  0001 C CNN
F 1 "PWR_FLAG" H 3900 3830 50  0000 C CNN
F 2 "" H 3900 3650 50  0000 C CNN
F 3 "" H 3900 3650 50  0000 C CNN
	1    3900 3650
	1    0    0    -1  
$EndComp
NoConn ~ 3600 3600
$Comp
L GND #PWR032
U 1 1 57981ADB
P 6450 6250
F 0 "#PWR032" H 6450 6000 50  0001 C CNN
F 1 "GND" V 6455 6122 50  0000 R CNN
F 2 "" H 6450 6250 50  0000 C CNN
F 3 "" H 6450 6250 50  0000 C CNN
	1    6450 6250
	-1   0    0    -1  
$EndComp
$Comp
L PWR_FLAG #FLG033
U 1 1 57981B5C
P 6450 6200
F 0 "#FLG033" H 6450 6295 50  0001 C CNN
F 1 "PWR_FLAG" H 6450 6380 50  0000 C CNN
F 2 "" H 6450 6200 50  0000 C CNN
F 3 "" H 6450 6200 50  0000 C CNN
	1    6450 6200
	1    0    0    -1  
$EndComp
$Comp
L VDD #PWR034
U 1 1 57983B16
P 3650 4600
F 0 "#PWR034" H 3650 4450 50  0001 C CNN
F 1 "VDD" H 3650 4750 50  0000 C CNN
F 2 "" H 3650 4600 50  0000 C CNN
F 3 "" H 3650 4600 50  0000 C CNN
	1    3650 4600
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR035
U 1 1 5798475D
P 3650 4950
F 0 "#PWR035" H 3650 4700 50  0001 C CNN
F 1 "GND" H 3650 4800 50  0000 C CNN
F 2 "" H 3650 4950 50  0000 C CNN
F 3 "" H 3650 4950 50  0000 C CNN
	1    3650 4950
	1    0    0    -1  
$EndComp
$Comp
L AP1117D50 U1
U 1 1 5798F089
P 4350 3700
F 0 "U1" H 4450 3450 50  0000 C CNN
F 1 "AP1117D50" H 4350 3950 50  0000 C CNN
F 2 "TO_SOT_Packages_SMD:SOT-223" H 4350 3700 50  0001 C CNN
F 3 "" H 4350 3700 50  0000 C CNN
	1    4350 3700
	1    0    0    -1  
$EndComp
$Comp
L CFPS-72 X1
U 1 1 579905D8
P 8700 1000
F 0 "X1" H 8350 450 39  0000 C CNN
F 1 "CFPS-72" H 8700 450 39  0000 C CNN
F 2 "osc:CFPS-72" H 8700 1000 39  0001 C CNN
F 3 "" H 8700 1000 39  0000 C CNN
	1    8700 1000
	-1   0    0    -1  
$EndComp
$Comp
L Q_NMOS_GSD T4
U 1 1 579D66A3
P 9200 4000
F 0 "T4" H 9500 4050 50  0000 R CNN
F 1 "BSS138" H 9650 3950 50  0000 R CNN
F 2 "TO_SOT_Packages_SMD:SOT-23_Handsoldering" H 9400 4100 50  0001 C CNN
F 3 "" H 9200 4000 50  0000 C CNN
	1    9200 4000
	1    0    0    -1  
$EndComp
$Comp
L Q_NMOS_GSD T1
U 1 1 579D6E5A
P 7100 2150
F 0 "T1" H 7400 2200 50  0000 R CNN
F 1 "BSS138" H 7550 2100 50  0000 R CNN
F 2 "TO_SOT_Packages_SMD:SOT-23_Handsoldering" H 7300 2250 50  0001 C CNN
F 3 "" H 7100 2150 50  0000 C CNN
	1    7100 2150
	1    0    0    -1  
$EndComp
NoConn ~ 5150 2650
Text Notes 8250 5050 0    60   ~ 0
THIS CONNECTOR MUST INCLUDE SWITCH.\nTO ZŁĄCZE MUSI ZAWIERAĆ PRZEŁĄCZNIK.\nSound Output/Wyjście dźwięku.
$Comp
L CONN_01X02 P1
U 1 1 57A646B0
P 9950 3400
F 0 "P1" H 10028 3441 50  0000 L CNN
F 1 "CONN_01X02" H 10028 3350 50  0000 L CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 9950 3400 50  0001 C CNN
F 3 "" H 9950 3400 50  0000 C CNN
	1    9950 3400
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 CONN1
U 1 1 57BF308C
P 1600 3750
F 0 "CONN1" H 1519 3475 50  0000 C CNN
F 1 "CONN_01X02" H 1519 3566 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x02" H 1600 3750 50  0001 C CNN
F 3 "" H 1600 3750 50  0000 C CNN
	1    1600 3750
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR036
U 1 1 57BF3294
P 1850 3850
F 0 "#PWR036" H 1850 3600 50  0001 C CNN
F 1 "GND" H 1855 3677 50  0000 C CNN
F 2 "" H 1850 3850 50  0000 C CNN
F 3 "" H 1850 3850 50  0000 C CNN
	1    1850 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 2550 3700 2550
Wire Wire Line
	3750 2450 3700 2450
Wire Wire Line
	3750 2050 3700 2050
Wire Wire Line
	3700 2050 3700 2000
Wire Wire Line
	3700 2000 3600 2000
Wire Wire Line
	3600 2200 3700 2200
Wire Wire Line
	3700 2200 3700 2150
Wire Wire Line
	3700 2150 3750 2150
Wire Wire Line
	1300 4750 1500 4750
Connection ~ 1300 4750
Wire Wire Line
	1300 5000 1350 5000
Wire Wire Line
	1950 5000 2050 5000
Wire Wire Line
	2000 5000 2000 4750
Wire Wire Line
	1800 4750 2050 4750
Connection ~ 2000 4750
Wire Wire Line
	2350 4750 2700 4750
Connection ~ 2000 5000
Wire Wire Line
	1300 5350 1500 5350
Connection ~ 1300 5350
Wire Wire Line
	1300 5600 1350 5600
Wire Wire Line
	1950 5600 2050 5600
Wire Wire Line
	2000 5600 2000 5350
Wire Wire Line
	1800 5350 2050 5350
Connection ~ 2000 5350
Wire Wire Line
	2350 5350 2700 5350
Connection ~ 2000 5600
Connection ~ 1300 5000
Wire Wire Line
	1300 5950 1500 5950
Connection ~ 1300 5950
Wire Wire Line
	1300 6200 1350 6200
Wire Wire Line
	1950 6200 2050 6200
Wire Wire Line
	2000 6200 2000 5950
Wire Wire Line
	1800 5950 2050 5950
Connection ~ 2000 5950
Wire Wire Line
	2350 5950 2700 5950
Connection ~ 2000 6200
Wire Wire Line
	1300 6550 1500 6550
Connection ~ 1300 6550
Wire Wire Line
	1300 6800 1350 6800
Wire Wire Line
	1950 6800 2050 6800
Wire Wire Line
	2000 6800 2000 6550
Wire Wire Line
	1800 6550 2050 6550
Connection ~ 2000 6550
Wire Wire Line
	2350 6550 2700 6550
Connection ~ 2000 6800
Connection ~ 1300 6200
Connection ~ 1300 5600
Wire Wire Line
	1300 4700 1300 7400
Wire Wire Line
	3250 4750 3200 4750
Wire Wire Line
	3200 5350 3250 5350
Wire Wire Line
	3200 5950 3250 5950
Wire Wire Line
	3200 6550 3250 6550
Wire Wire Line
	3200 7050 3250 7050
Wire Wire Line
	4200 4750 4150 4750
Wire Wire Line
	4200 5350 4150 5350
Wire Wire Line
	4200 5950 4150 5950
Wire Wire Line
	4200 6550 4150 6550
Wire Wire Line
	4200 7050 4150 7050
Wire Wire Line
	3200 7600 3200 7550
Wire Wire Line
	3200 7550 3250 7550
Connection ~ 2700 5350
Connection ~ 2700 5950
Connection ~ 2700 6550
Wire Wire Line
	2700 4750 2700 7200
Connection ~ 1300 6800
Wire Wire Line
	1300 7150 1500 7150
Wire Wire Line
	1950 7400 2050 7400
Wire Wire Line
	2000 7400 2000 7150
Wire Wire Line
	1800 7150 2050 7150
Connection ~ 2000 7150
Wire Wire Line
	2700 7150 2350 7150
Connection ~ 2000 7400
Wire Wire Line
	1300 7400 1350 7400
Connection ~ 1300 7150
Connection ~ 2700 7150
Wire Wire Line
	9350 1050 9350 1100
Wire Wire Line
	9350 1100 9300 1100
Wire Wire Line
	9400 1200 9300 1200
Wire Wire Line
	8350 1100 8400 1100
Wire Wire Line
	5200 2550 5150 2550
Wire Wire Line
	5200 1850 5150 1850
Wire Wire Line
	5200 1950 5150 1950
Wire Wire Line
	5200 2050 5150 2050
Wire Wire Line
	5200 1750 5150 1750
Wire Wire Line
	5200 1650 5150 1650
Wire Wire Line
	3750 2750 3700 2750
Wire Wire Line
	3750 2650 3700 2650
Wire Wire Line
	2400 2500 2400 2550
Wire Wire Line
	2650 2500 2650 2550
Wire Wire Line
	2400 2200 2400 2150
Wire Wire Line
	2650 2200 2650 2150
Wire Wire Line
	5200 2350 5150 2350
Wire Wire Line
	3550 1650 3750 1650
Wire Wire Line
	3600 1650 3600 1600
Wire Wire Line
	3600 1250 3600 1300
Wire Wire Line
	1800 1450 1700 1450
Wire Wire Line
	1800 1350 1700 1350
Wire Wire Line
	1750 1250 1700 1250
Connection ~ 3600 1650
Wire Wire Line
	1750 1550 1700 1550
Wire Wire Line
	3700 1850 3750 1850
Wire Wire Line
	1750 1650 1700 1650
Wire Wire Line
	3700 1750 3750 1750
Wire Wire Line
	7650 1200 7600 1200
Wire Wire Line
	7650 1100 7600 1100
Wire Wire Line
	6150 1050 6150 1100
Wire Wire Line
	6150 1100 6200 1100
Wire Wire Line
	6150 1200 6200 1200
Wire Wire Line
	1800 3700 2600 3700
Wire Wire Line
	4350 4000 4350 4100
Wire Wire Line
	3600 3800 3650 3800
Wire Wire Line
	3650 3800 3650 3700
Wire Wire Line
	3650 3700 4050 3700
Wire Wire Line
	3900 3650 3900 3750
Connection ~ 3900 3700
Wire Wire Line
	4750 4100 4750 4050
Wire Wire Line
	3900 4100 3900 4050
Wire Wire Line
	6200 1400 6150 1400
Wire Wire Line
	7700 1650 7650 1650
Wire Wire Line
	7350 1650 7300 1650
Wire Wire Line
	7300 1650 7300 1600
Wire Wire Line
	7200 2350 7200 2550
Wire Wire Line
	6800 2150 6900 2150
Wire Wire Line
	5150 2250 5200 2250
Wire Wire Line
	6450 2150 6500 2150
Wire Wire Line
	6850 2150 6850 2200
Connection ~ 6850 2150
Wire Wire Line
	6850 2550 6850 2500
Wire Wire Line
	4650 1150 4600 1150
Wire Wire Line
	4250 1150 4300 1150
Wire Wire Line
	6100 5850 6100 5900
Wire Wire Line
	6100 6250 6100 6200
Wire Wire Line
	5700 5850 5700 5900
Wire Wire Line
	5700 6250 5700 6200
Wire Wire Line
	5200 2150 5150 2150
Wire Wire Line
	8900 4000 9000 4000
Wire Wire Line
	8550 4000 8600 4000
Wire Wire Line
	8950 4000 8950 4050
Connection ~ 8950 4000
Wire Wire Line
	8950 4400 8950 4350
Wire Wire Line
	6450 6200 6450 6250
Wire Wire Line
	3650 4600 3650 4650
Wire Wire Line
	3650 4950 3650 4850
Wire Wire Line
	4650 3700 4750 3700
Wire Wire Line
	4750 3650 4750 3750
Connection ~ 4750 3700
Wire Wire Line
	9300 3450 9300 3800
Wire Wire Line
	9300 4200 9300 4400
Wire Wire Line
	6950 1750 6950 1700
Wire Wire Line
	7200 1950 7200 1600
Wire Wire Line
	1850 3850 1850 3800
Wire Wire Line
	1850 3800 1800 3800
$Comp
L PIC16F1709 U2
U 1 1 57C73E84
P 4450 2200
F 0 "U2" H 4450 3037 60  0000 C CNN
F 1 "PIC16F1709" H 4450 2931 60  0000 C CNN
F 2 "Housings_SSOP:SSOP-20_5.3x7.2mm_Pitch0.65mm" H 4450 2200 60  0001 C CNN
F 3 "" H 4450 2200 60  0000 C CNN
	1    4450 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 2750 5200 2750
NoConn ~ 3700 2450
Text GLabel 8550 4000 0    39   Input ~ 0
METRONOME
Wire Wire Line
	9300 3200 9300 3350
$Comp
L VDD #PWR037
U 1 1 58AE1602
P 9300 3200
F 0 "#PWR037" H 9300 3050 50  0001 C CNN
F 1 "VDD" V 9317 3328 50  0000 L CNN
F 2 "" H 9300 3200 50  0000 C CNN
F 3 "" H 9300 3200 50  0000 C CNN
	1    9300 3200
	1    0    0    -1  
$EndComp
NoConn ~ 5200 1650
NoConn ~ 5200 1750
Wire Wire Line
	9300 3350 9750 3350
Connection ~ 9300 3300
Wire Wire Line
	9750 3450 9300 3450
Connection ~ 9300 3500
$EndSCHEMATC
