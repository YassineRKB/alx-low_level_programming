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
		if (a[len - 1] == '(' || a[len - 1] == '\t' || a[len - 1] == '\n'
		|| a[len - 1] == ',' || a[len - 1] == ';' || a[len - 1] == '!'
		|| a[len - 1] == '.' || a[len - 1] == '?' || a[len - 1] == '.'
		|| a[len - 1] == '"' || a[len - 1] == ' ' || a[len - 1] == '}'
		|| a[len - 1] == '{' || a[len - 1] == ')' || len == 0)
		{
			a[len] = a[len] - 32;
		}
		len++;
	}
	return (a);
}

