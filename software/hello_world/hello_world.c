#include <stdio.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"

int main()
{
	int count = 0;
	int delay;

	printf("Hello, World!\n"); // Serial output to JTAG UART

	while(1)
	{
		IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE, count & 0xFF); // IO REG READ/WRITE FUNC
		delay = 0;

		while (delay < 2000000) // Delay for 2M clock cycle (0.04s)
		{
			delay++;
		}

		count++;

		if (count > 0xFF)
		{
			count = 0;
		}
	}

	return 0;
}
