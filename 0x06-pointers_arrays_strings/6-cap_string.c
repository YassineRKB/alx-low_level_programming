# include "main.h"
/**
* string_toupper - function that capitalizes all words of a string.
* @a: array
* Return: char
**/
char *cap_string(char *a);
{
	int len = 0;

	while (a[len] != '\0')
	{
		if (a[len] == 0)
		{
			if (a[len] >= 97 && a[len] <= 122)
			{
				a[len] = a[len] - 32;
			}
			len++;
		}
		if (a[len - 1] == ' ')
		{
			if (a[len] >= 97 && a[len] <= 122)
			{
				a[len] = a[len] - 32;
			}
			len++;
		}
	}
	return (a);
}

