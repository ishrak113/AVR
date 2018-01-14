#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main (){
	DDRC = 0xFF;                                   // all o/p's
	DDRB=0x00;									//0x00 means it will take input from PINB
	while(1){
		
		if ((PINB & 0x01)==1){
			for (PORTC = 0x01; PORTC != 0; PORTC<<=1) // shift left
			{  // shift left
				_delay_ms(100); // pause
			}                          
			
			for (PORTC = 0x80; PORTC != 0; PORTC>>=1) // shift right
			{  
				_delay_ms(100 ); // pause
			}

			

			
		}
	}
	
}






