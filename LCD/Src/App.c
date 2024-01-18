#include <util/delay.h>
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/HAL/LCD/LCD_Interface.h"
#include "../Include/HAL/KEYPAD/KEYPAD_Interface.h"
#define F_CPU 8000000UL



int main (void)
{
	MDIO_voidInit();
	HLCD_voidInit();

	u8 customChar[] = {
			0b00000,
			0b00000,
			0b11011,
			0b11111,
			0b01110,
			0b00100,
			0b00000,
			0b00000
	};


	HLCD_voidDisplayString("Eng/Rober Maher");
//	HLCD_voidSendSpecialSymbol(customChar,LCD_PATTERN0, LCD_ROW1, LCD_COL16);
	while(1)
	{

	}
}
