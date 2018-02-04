/*
 * ATmega32 LEDBlink PORT C.c
 *
 * Created: 10/22/2017 11:58:56 PM
 * Author : ishrak
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main (){
	DDRC = 0xFF;                                   // all o/p's

	while(1){                                     // forever
		
		for (PORTC = 0x01; PORTC != 0; PORTC <<= 1)   // shift left
		_delay_ms(100);                             // pause
		
		for (PORTC = 0x80; PORTC != 0; PORTC >>= 1)   // shift right
		_delay_ms(100);
	}


}
