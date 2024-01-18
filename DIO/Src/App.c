/*
 * App.c
 *
 *  Created on: Nov 2, 2023
 *      Author: D E L L
 */

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include <util/delay.h>

#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/DIO/DIO_Cfg.h"
#include "../Include/HAL/LED/LED_Interface.h"
#define F_CPU 8000000UL


int main()
{
	MDIO_voidSetPortDirection(DIO_PORTA,0x0F);

	while(1)
	{
		MDIO_voidSetPinValue(DIO_PORTA, PIN0, DIO_RESET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN1, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN2, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN3, DIO_SET);
		_delay_ms(10);

		MDIO_voidSetPinValue(DIO_PORTA, PIN0, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN1, DIO_RESET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN2, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN3, DIO_SET);
		_delay_ms(10);

		MDIO_voidSetPinValue(DIO_PORTA, PIN0, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN1, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN2, DIO_RESET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN3, DIO_SET);
		_delay_ms(10);

		MDIO_voidSetPinValue(DIO_PORTA, PIN0, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN1, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN2, DIO_SET);
		MDIO_voidSetPinValue(DIO_PORTA, PIN3, DIO_RESET);
		_delay_ms(10);

	}
}
