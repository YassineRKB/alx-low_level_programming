#include "main.h"

/**
 * puts2 - funtion that writes every other char
 * @str: string
 * Return: nothing
 **/
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
	}
	len = len - 1;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
