# include "main.h"
/**
* rev_string - function that prints string
* @s: pointer pointing to char
* Return: nothing.
*/

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
