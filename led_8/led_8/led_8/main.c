/*
 * led_8.c
 *
 * Created: 10/22/2017 6:45:43 PM
 * Author : ishrak
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRD = 0xff;
    /* Replace with your application code */
    while (1) 
    {
		int i = 0;
		for (i=0;i<=8;i++)
		{
			int p = 0 ;
			  p += i;
			PORTD |= (1<<p);
			_delay_ms(200);
			PORTD &= (0<<p);
		}
	}int i=8;
		for (i=8;i>=0;i--)
		{	int p = 128;
			p -= i;
			PORTD |= (1>>p);
			_delay_ms(200);
			PORTD &= (0<<p);
			
		}
		

    }


