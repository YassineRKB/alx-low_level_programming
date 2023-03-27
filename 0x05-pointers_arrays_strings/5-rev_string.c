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
	int j = 0;
	int k;

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (s[len] != '\0')
	{
		k = s[len];
		s[len] = s[j];
		s[j] = k;
		len--;
		j++;
	}
}
