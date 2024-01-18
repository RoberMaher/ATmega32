/*
 * main.c
 *
 *  Created on: Nov 2, 2023
 *      Author: D E L L
 */

#include <avr/io.h>
#include <util/delay.h>
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#define F_CPU 8000000UL

#define	ZERO	0b11000000
#define	ONE		0b11111001
#define TWO		0b10100100
#define THREE	0b10110000
#define	FOUR	0b10011001
#define FIVE	0b10010010
#define SIX		0b10000010
#define SEVEN	0b11111000
#define EIGHT	0b10000000
#define NINE	0b10010000

//int main (){
//	// Set PA0 to o/p
//	SET_BIT(DDRA,1);
//
//	//superloop
//	while(1){
//	SET_BIT(PORTA,1);
//	_delay_ms(1000);
//
//	CLR_BIT(PORTA,1);
//	_delay_ms(1000);
//
//	}
//
//}

//int main (){
//	u8 SSD_u8ArrofNumbers[10] = {ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
//
//	//set PORTA to O/P
//	DDRA = 0xFF; // =255 OR =0b11111111;
//
//	//counter
//	u8 i = 0;
//
//	//superloop
//	while(1){
//		//loop to show numbers on SSD with 1 sec delay
//		for(i=0;i<10;i++){
//			//set value of number on PORTA
//			PORTA = SSD_u8ArrofNumbers[i];
//			//delay 1 sec
//			_delay_ms(1000);
//		}
//	}
//}

//int main (){
//	// set PA0 as I/P
//	CLR_BIT(DDRA,0);
//	// turn on pull-up for PA0
//	SET_BIT(PORTA,0);
//	// set PC0 as O/P
//	SET_BIT(DDRC,0);
//
//	u8 x = 1;
//
//	while(1){
//		x = GET_BIT(PINA,0);
//
//		//check if switch is pressed
//		if (x == 0){
//			// turn on led
//			SET_BIT(PORTC,0);
//		}
//		else {
//			// turn of led
//			CLR_BIT(PORTC,0);
//		}
//	}
//}

int main (){

}
