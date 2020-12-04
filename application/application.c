#include "stm32f1xx_hal.h"
#include "i2c.h"
#include "spi.h"
#include "sensor.h"
//#include "arducam.h"

void application(void)
{
	// perform hardware initializations (CubeMX board ports were not hardwired)
	i2c_setup();
	spi_setup();
	usb_setup();
	sensor_setup();
#if 0
	// run the main loop
	while (1)
	{
		cmd = arducam_recieve();
		switch (cmd)
		{
		
			CMD_WRITE_REG:
			CMD_READ_REG:
			CMD_GRAB_FRAME:
			default:
			  break;
		}
	}
#endif
}
