# include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
* @a: array
* Return: char
**/

char *cap_string(char *a)
{
	int i, j;
	int sep[] = {',', ';', '.', '?', '"',
	'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sep[j])
			{
				x = 12;
			}
		}
	}
	return (a);
}
