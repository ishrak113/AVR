/*
 * ADC avr.c
 *
 * Created: 13-Nov-17 7:44:58 PM
 * Author : ishrak
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>


int main (void)
{
	DDRB =0xff;

	ADMUX |= (1 << REFS0); 	// Set ADC reference to AVCC

	ADCSRA |= (1 << ADEN)|(1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0); // Set ADC prescaler to 128 - 125KHz sample rate @ 16MHz

while(1)

{	ADCSRA |= (1 << ADSC);  // Start A2D Conversions
	 while(ADCSRA & (1<<ADSC));
	
	if(ADC < 512)
	{
		PORTB |= (1 << 1); // Turn on LED1
		PORTB &= ~(1 << 0); // Turn off LED2
	}
	
	else
	{
		PORTB &= ~(1 << 1); // Turn off LED1
		PORTB |= (1 << 0); // Turn on LED2
	}
}
}