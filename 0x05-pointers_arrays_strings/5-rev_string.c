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
	int change;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len > j)
	{

		change = s[len];
		s[len] = s[j];
		s[j] = change;
		len--;
		j++;
	}
}
