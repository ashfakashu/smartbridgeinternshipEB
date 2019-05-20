/*
 * ll.c
 *
 * Created: 5/20/2019 2:36:17 AM
 * Author : ashfakashu
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0xFF;
	while (1)
	{
		PORTB =  1<<PB0;
		_delay_ms(100);
		PORTB =  1<<PB1;
		_delay_ms(100);
		PORTB =  1<<PB2;
		_delay_ms(100);
		PORTB =  1<<PB3;
		_delay_ms(100);
		PORTB =  1<<PB4;
		_delay_ms(100);
		PORTB =  1<<PB5;
		_delay_ms(100);
		PORTB =  1<<PB6;
		_delay_ms(100);
		PORTB =  1<<PB7;
		_delay_ms(100);
	}
}
