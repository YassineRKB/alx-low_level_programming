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
	int len;

	while (str[len] != 0)
	{
		len++;
	}
	len = len - 1;
	while (str[i] != '\0')
	{
		if (k == 0)
		{
			_putchar(str[i]);
			k++;
		}
		else if (k == 1)
		{
			k--;
		}
		i++;
	}
	_putchar('\n');
}
