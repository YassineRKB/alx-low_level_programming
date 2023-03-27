#include "main.h"

/**
 * puts_half - funtion that writes every other char
 * @str: string
 * Return: nothing
 **/
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < (len/2); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
