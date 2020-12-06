This project is about creating a Astro Guider using the STM32F103 platform and the OV7725 sensor. The project aim to build the system as UVC device streaming device, avoiding any needs to specific windows drivers.  

Board
The Board used is known as the bluepill board featuring a STM32F103CBT processor running at 72 Mhz. The processor has 64 kB Ram and 20 kB ROM.

Sensor
The sensor used is OmniVision OV7725 sensor with 6 um pixel size. While alot of other OmniVision sensors are avilable on the marked, this is one the sensors with the largest pixel There are alot of higher resolution sensors avilable form OmniVision but since many OmniVision sensor have same sensor areas (and longer exposure time is canceled but by lower sensivity) the OV7725 looks to be the winner. The sensor will be driven at the lowest possible frequency inorder to increase the exposure time. The image area is fixed 640x480, but the internal image readout will included all dummy lines and pixels for extended the exposure to 
maximum.

Flash
The system will feature an optional spi-flash which might be used in future development for image storage  and similar.

Windows Software
Standard windows UVC drivers

Embedded Software
CubeMX 
STM32_USB_Device_Library
GCC


