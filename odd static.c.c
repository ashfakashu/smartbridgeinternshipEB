/*
 * odd.c
 *
 * Created: 5/20/2019 2:39:08 PM
 * Author : ashfakashu
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xAA;
	while (1)
	{
		PORTB = 0xFF;
		_delay_ms(100);
	}
}

