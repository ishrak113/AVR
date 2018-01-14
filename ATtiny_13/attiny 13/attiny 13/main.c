/*
 * attiny 13.c
 *
 * Created: 06-Dec-17 11:41:05 PM
 * Author : ishrak
 */ 
#define  F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//const int msecsDelayPost = 100;

	// Set up Port B pin 4 mode to output
	DDRB = 1<<DDB4;

	// Set up Port B data to be all low
	PORTB = 0;

	while (1) {
		// Toggle Port B pin 4 output state
		PORTB ^= 1<<PB4;

		// Pause a little while
		_delay_ms (50);
	}

	return 0;
}

