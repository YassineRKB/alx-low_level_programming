#include "main.h"

/**
 * puts2 - funtion that writes every other char
 * @str: string
 * Return: nothing
 **/
void puts2(char *str)
{
	int k = 0;
	int i = 0;
	int len = _sterlen(str) - 1;

	while (i < len)
	{
		if (k == 0)
		{
			_putchar(str[i]);
			k = 1;
		}
		else
		{
			k = 0;
			continue;
		}
	}
	_putchar('\n');
}
