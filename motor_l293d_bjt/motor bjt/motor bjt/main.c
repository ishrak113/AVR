/*
 * motor bjt.c
 *
 * Created: 17-Nov-17 2:12:32 AM
 * Author : ishrak
 */ 
#define F_CPU 16000000UL  
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{  DDRB=0xff;
   
    while (1) 
	
    {
		PORTB = (1<<PORTB0);
		_delay_ms(500);
		PORTB = (1<<PORTB1);
		_delay_ms(500);
    }
}

