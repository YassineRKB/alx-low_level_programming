# include "main.h"
/**
* _puts - function that prints string
* @str: pointer pointing to char
* Return: nothing.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
