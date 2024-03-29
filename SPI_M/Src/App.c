/*
 * App.c
 *
 *  Created on: NOV 9, 2023
 *      Author: D E L L
 */


#include <util/delay.h>
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/GI/GI_interface.h"
#include "../Include/MCAL/SPI/SPI_Interface.h"
#include "../Include/HAL/LED/LED_Interface.h"
#include "../Include/HAL/LCD/LCD_Interface.h"


#define F_CPU 8000000UL

int main ()
{
	MDIO_voidInit();
	MSPI_voidInit();

	u8 local_u8ReceivedData;
	while(1)
	{
		local_u8ReceivedData = MSPI_u8TransReceive('7');
		if (local_u8ReceivedData == '5')
		{
			HLED_voidToggleLED(DIO_PORTA,PIN0);
		}
		_delay_ms(2000);
	}
}
