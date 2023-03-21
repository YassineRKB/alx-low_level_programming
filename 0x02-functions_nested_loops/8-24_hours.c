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
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
