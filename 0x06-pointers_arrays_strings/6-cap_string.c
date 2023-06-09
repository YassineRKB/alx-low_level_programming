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
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			for (j = 0; j <= 12; j++)
			{
				if (a[i - 1] == sep[j])
				{
					a[i] = a[i] - 32;
				}
			}
		}
	}
	return (a);
}
