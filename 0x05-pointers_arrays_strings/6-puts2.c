#include "main.h"

/**
 * puts2 - funtion that writes every other char
 * @str: string
 * Return: nothing
 **/
void puts2(char *str)
{
	int i = 0;
	int k = 0;

	while (str[i] != '\0')
	{
		if (k == 0)
		{
			_putchar(str[i]);
			i++;
			k = k + 1;
		}
		else
		{
			k--;
		}
	}
	_putchar('\n');
}
