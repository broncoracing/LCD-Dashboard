LCD PCB Design notes
1)Micro-controller
Using stm32f10368t8 micro-controller
According to google best footprint is package_Qfp:LQFP-48-7x7mm_p0.5
Used this as micro-controller pinout reference 

file:///C:/Users/ctpur/Downloads/DS_stm32f103c8.pdf

2) Power
Flow: Battery -> fuse -> TVS -> reverse diode -> 5v Buck -> 3.3 v LDO


3) Reset Boot HSE
For the booto pull down j7 jumper = 3v3 ROM bootloader

4) Warning/test leds
GPIO ->470 R ->LED


5 )steering wheel inputs

1k + 100nf + 10k pullup

6) Decoupling
SPI1 to RA8875

4X100nF= 1 per VDD, 10uF bulk, 1uF+10nF on VDAA)

8) Display mapping 

https://www.buydisplay.com/serial-spi-arduino-7-inch-tft-lcd-touch-shield-ra8875-for-mega-due-uno

Output to RA8875 7 in display ER-AS-RA8875

9) CAN to ECU
10) UART for debugging





