/*
 * cf.c
 *
 * Created: 5/20/2019 2:25:38 PM
 * Author : ashfakashu
 */ 

#ifndef  F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xFF;
	while (1)
	{
		PORTB = 0X55;
		_delay_ms(1000);
		PORTB = 0XAA;
		_delay_ms(1000);
	}
}
