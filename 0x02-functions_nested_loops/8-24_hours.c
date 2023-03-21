#include "main.h"
/**
* jack_bauer - entry point to the code
* Description: prints every minute of the day of Jack Bauer
* Return: minutes.
**/
void jack_bauer(void)
{
	int mins, hours;

	for (hours = 0; hours <= 23; hours++)
	{
		if (hours < 10)
		{
			_putchar('0');
		}
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar(hours + '0');
			_putchar(':');
			if (mins < 10)
			{
				_putchar('0');
			}
			_putchar(mins + '0');
			_putchar('\n');
		}
	}
}
