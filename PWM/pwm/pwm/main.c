/*
 * pwm.c
 *
 * Created: 26-Nov-17 11:52:31 PM
 * Author : ishrak
 */ 


// this code sets up counter0 for an 8kHz Fast PWM wave @ 16Mhz Clock


#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD |= (1 <<6);
	// PD6 is now an output

	OCR0A = 128;
	// set PWM for 50% duty cycle


	TCCR0A |= (1 << COM0A1)|(1 << WGM01) | (1 << WGM00);
	// set none-inverting mode

	//TCCR0A |= (1 << WGM01) | (1 << WGM00);
	// set fast PWM Mode

	TCCR0B |= (1 << CS01);
	// set prescaler to 8 and starts PWM


	while (1);
	{
		// we have a working Fast PWM
	}
}