// Include LIB
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include <util/delay.h>

// Include DIO
#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/DIO/DIO_Cfg.h"

// Include ADC
#include "../Include/MCAL/ADC/ADC_Interface.h"
#include "../Include/MCAL/ADC/ADC_Private.h"
#include "../Include/MCAL/ADC/ADC_Cfg.h"

void MADC_voidInit (void)
{
	//1- Select AVCC with external capacitor at AREF pin
	SET_BIT(ADMUX, 6);
	CLR_BIT(ADMUX, 7);

	//2- Right Adjustment
	CLR_BIT(ADMUX, 5);

	//3- Disable Auto Trigger
	CLR_BIT(ADCSRA, 5);

	//4- Select CLK/64
	CLR_BIT(ADCSRA, 0);
	SET_BIT(ADCSRA, 1);
	SET_BIT(ADCSRA, 2);

	//5- Enable ADC
	SET_BIT(ADCSRA,7);
}

u16 MADC_u16GetDigitalvalue (ADC_CHANNELS A_AdcChannel)
{
	u16 local_u16DigitalValue=0;
	if (A_AdcChannel <32)
	{
		//Clear the channel 5-bits
		ADMUX &= ADC_CHANNEL_MASK;

		//select cannel
		ADMUX |= A_AdcChannel;

		//start conversion
		SET_BIT(ADCSRA,6);

		//polling on ADC comlete flag
		while (GET_BIT(ADCSRA,4) == 0);

		//Clear INT. Flag
		SET_BIT(ADCSRA,4);

		//read conversion value
		local_u16DigitalValue = ADCLH;
	}
	//return result fo conversion
	return local_u16DigitalValue;
}

