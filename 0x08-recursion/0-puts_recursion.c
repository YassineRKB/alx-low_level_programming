# include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: string to print.
* Return: nothing
**/
void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != 0)
	{
		_putchar(s[len] + '0');
		len++;
	}
}
