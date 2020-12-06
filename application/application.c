/*  Copyright (c) 2020 Jacob Markov Heder

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the Software), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE. 
*/

#include "stm32f1xx_hal.h"
#include "i2c.h"
#include "spi.h"
#include "sensor.h"
#include "usb.h"
#include "flash.h"
#include "arducam.h"

void application(void)
{
	// perform hardware initializations
	i2c_setup();
	spi_setup();
	usb_setup();
	flash_setup();
	sensor_setup(usb_get_tx_buffer());
	arducam_setup(usb_get_rx_buffer(),usb_get_tx_buffer());

	// perform interrupt and dma intiializations
	usb_configure_dma();
	sensor_configure_interrupt();

#if 0
	// run the main loop
	while (1)
	{
		cmd = 
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
