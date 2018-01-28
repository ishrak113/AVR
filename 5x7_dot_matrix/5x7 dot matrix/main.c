/*
 * 5x7 dot matrix.c
 *
 * Created: 25-Oct-17 11:00:05 PM
 * Author : ishrak
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif
#include<avr/io.h>

#include<util/delay.h>







int main (void)

{

	DDRB=0xff; // row

	DDRD=0xff; // column

	

	while(1)

	{

		PORTB=~(0x01);

		PORTD=0x04;  // to display first row

		_delay_ms(1);

		

		PORTB=~(0x02);

		PORTD=0x0A;  // to display second row

		_delay_ms(1);

		

		PORTB=~(0x04);

		PORTD=0x11;  // to display third row

		_delay_ms(1);

		

		PORTB=~(0x08);

		PORTD=0x1F;  // to display fourth row

		_delay_ms(1);

		

		PORTB=~(0x10);

		PORTD=0x11;  // to display fifth row

		_delay_ms(1);

		

		PORTB=~(0x20);

		PORTD=0x11;  // to display sixth row

		_delay_ms(1);

		

		PORTB=~(0x40);

		PORTD=0x11;  // to display seventh row

		_delay_ms(1);

		

	}

}