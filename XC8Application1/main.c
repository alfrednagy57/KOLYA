/*
 * 7ssegmentFirst.c
 *
 * Created: 20/10/2024 00:09:27
 * Author : Alfred Nagy
 */ 


//#include <avr/io.h>
//#define F_CPU 8000000UL

#include <util/delay.h>


#include "HAL/Lcd/Header/Lcd_Interface.h"
// Array to hold the 7-segment encoding for numbers 0 to 9
/*unsigned char numbers[10] = {
	0x7E,  // 0       1011 1111
    0x0C,  // 1
	0xB6,  // 2
	0x9E,  // 3
	0xCC,  // 4
	0xDA,  // 5
	0xFA,  // 6
	0x0E,  // 7
	0xFE,  // 8
	0xDE   // 9
};

void display_digit(unsigned char digit) {
	PORTA = numbers[digit];  // Output the corresponding encoding to PORTB
}
*/
void main(void) {
		
	Lcd_Init();
		
	while(1)
	{
		
		Lcd_SendString("Alfred Nagy");
		_delay_ms(3000);
		Lcd_ClrScreenFnc();
		Lcd_SendString("Hello world!");
		_delay_ms(3000);
		Lcd_ClrScreenFnc();
	}
}

/*
	MCUCR |=0x80;
	
	MCUCR |=0x80;
	DDRA = 0xFF;  // Set PORTA as output
	DDRB |=(0<<PB4);
	DDRB |=(0<<PB1);
	DDRB |=(1<<PB7);
	DDRB |=(1<<PB6);
	PORTB |=(1<<PB6);
	DDRC =0xFF;
	PORTC|=0xFF;
	
	while (1)
	{
		if(PINB &(1<<PB4))
		{
			
			for (int i= 0; i < 100; i++)
			{
				for(int j = 0;j<51;j++){

					if(PINB &(1<<PB4))
					{
						PORTC&= ~(1<<6);
						PORTC|=  1<<7;
						display_digit(i/10);  // Display digits from 0 to 9
						_delay_ms(10);   // Wait for 1 second before displaying the next digit
						PORTC&= ~(1<<7);
						PORTC|=  1<<6;
						display_digit(i%10);  // Display digits from 0 to 9
						_delay_ms(10);   // Wait for 1 second before displaying the next digit
					}
					
					else
					PORTA=0xFF;
				}
			}
		}
		else if(PIND &(1<<PD1))
		{
			
			for (int i = 99; i >-1; i--)
			{
				for(int j = 0;j<51;j++){
					if(PINB &(1<<PB4))
					{
						PORTC&= ~(1<<6);
						PORTC|=  1<<7;
						display_digit(i/10);  // Display digits from 0 to 9
						_delay_ms(10);   // Wait for 1 second before displaying the next digit
						PORTC&= ~(1<<7);
						PORTC|=  1<<6;
						display_digit(i%10);  // Display digits from 0 to 9
						_delay_ms(10);   // Wait for 1 second before displaying the next digit
					}
					else
					PORTA=0xFF;
				}
			}
		}
		
		
	}
*/