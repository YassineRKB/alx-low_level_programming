# include "main.h"
/**
* rev_string - function that prints string
* @s: pointer pointing to char
* Return: nothing.
*/

void rev_string(char *s)
{
	int len = 0;
	int j = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		swap_int(s + len, s + j);
		len--;
		j++;
	}
}
