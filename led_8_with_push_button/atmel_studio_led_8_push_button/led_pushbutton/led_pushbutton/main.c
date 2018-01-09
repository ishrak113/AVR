/*
 * led_pushbutton.c
 *
 * Created: 10/22/2017 8:16:32 PM
 * Author : Amin
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRC &= (0<<PD0);
	DDRD = 0xff;
	/* Replace with your application code */
	while (1)
	{
		uint8_t input = 0;
		input = PINC & 0x01;
		if( input == 0x00){
			int i = 0;
			for (i=0;i<=8;i++)
			{
				int p = 0 ;
				p += i;
				PORTD |= (1<<p);
				_delay_ms(200);
				PORTD &= (0<<p);
				
				
				
			}
		} 
		
		
		
	}
}
