EESchema Schematic File Version 4
LIBS:TFG-cache
EELAYER 29 0
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
L Isolator:4N35 U1
U 1 1 5D138CB7
P 2850 3250
F 0 "U1" H 2850 3575 50  0000 C CNN
F 1 "4N35" H 2850 3484 50  0000 C CNN
F 2 "Package_DIP:DIP-6_W7.62mm" H 2650 3050 50  0001 L CIN
F 3 "https://www.vishay.com/docs/81181/4n35.pdf" H 2850 3250 50  0001 L CNN
	1    2850 3250
	1    0    0    -1  
$EndComp
$Comp
L power:+24V #PWR0101
U 1 1 5D139AAF
P 1900 2850
F 0 "#PWR0101" H 1900 2700 50  0001 C CNN
F 1 "+24V" H 1915 3023 50  0000 C CNN
F 2 "" H 1900 2850 50  0001 C CNN
F 3 "" H 1900 2850 50  0001 C CNN
	1    1900 2850
	-1   0    0    1   
$EndComp
$Comp
L Device:R R1
U 1 1 5D13AD9D
P 2350 3100
F 0 "R1" V 2143 3100 50  0000 C CNN
F 1 "1K" V 2234 3100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal" V 2280 3100 50  0001 C CNN
F 3 "~" H 2350 3100 50  0001 C CNN
	1    2350 3100
	0    1    1    0   
$EndComp
Wire Wire Line
	1900 3100 2200 3100
Wire Wire Line
	2500 3100 2550 3100
Wire Wire Line
	2550 3100 2550 3150
Wire Wire Line
	2550 3350 2300 3350
$Comp
L power:+5V #PWR0104
U 1 1 5D13FF40
P 3600 3350
F 0 "#PWR0104" H 3600 3200 50  0001 C CNN
F 1 "+5V" V 3615 3478 50  0000 L CNN
F 2 "" H 3600 3350 50  0001 C CNN
F 3 "" H 3600 3350 50  0001 C CNN
	1    3600 3350
	0    1    1    0   
$EndComp
$Comp
L power:+5V #PWR0105
U 1 1 5D1416BA
P 3450 3000
F 0 "#PWR0105" H 3450 2850 50  0001 C CNN
F 1 "+5V" H 3465 3173 50  0000 C CNN
F 2 "" H 3450 3000 50  0001 C CNN
F 3 "" H 3450 3000 50  0001 C CNN
	1    3450 3000
	-1   0    0    1   
$EndComp
Wire Wire Line
	3450 3250 3150 3250
Wire Wire Line
	1900 2850 1900 3100
NoConn ~ 3150 3150
Wire Wire Line
	3450 3000 3450 3250
Wire Wire Line
	3300 3350 3600 3350
Wire Wire Line
	3150 3350 3300 3350
Connection ~ 3300 3350
$Comp
L Device:R R2
U 1 1 5D13B706
P 3300 3500
F 0 "R2" H 3230 3454 50  0000 R CNN
F 1 "10K" H 3230 3545 50  0000 R CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P5.08mm_Vertical" V 3230 3500 50  0001 C CNN
F 3 "~" H 3300 3500 50  0001 C CNN
	1    3300 3500
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 5D13DCEA
P 3300 3800
F 0 "#PWR0103" H 3300 3550 50  0001 C CNN
F 1 "GND" H 3305 3627 50  0000 C CNN
F 2 "" H 3300 3800 50  0001 C CNN
F 3 "" H 3300 3800 50  0001 C CNN
	1    3300 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 3650 3300 3800
$Comp
L power:GND #PWR?
U 1 1 5D149A24
P 2300 3500
F 0 "#PWR?" H 2300 3250 50  0001 C CNN
F 1 "GND" H 2305 3327 50  0000 C CNN
F 2 "" H 2300 3500 50  0001 C CNN
F 3 "" H 2300 3500 50  0001 C CNN
	1    2300 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 3350 2300 3500
Text GLabel 2300 3550 0    50   Input ~ 0
GNDrobot
$EndSCHEMATC
