# include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
* @a: array
* Return: char
**/

char *cap_string(char *a);
{
	int len = 0;

	while (a[len])
	{
		while (!(a[0] >= 97 && a[0] <= 122))
		{
			len++;
		}
		if (a[len] == '(' || a[len] == '\t' || a[len] == '\n'
		|| a[len] == ',' || a[len] == ';' || a[len] == '!'
		|| a[len] == '.' || a[len] == '?' || a[len] == '.'
		|| a[len] == '"' || a[len] == ' ' || a[len] == '}'
		|| a[len] == '{' || a[len] == ')')
		{
			a[len + 1] = a[len + 1] - 32;
		}
		len++;
	}
	return (a);
}

