# include "main.h"
/**
* string_toupper - function that changes lowercase to uppercase.
* @a: array
* Return: char
**/
char *string_toupper(char *a)
{
	int len = 0;
	int r;

	while (a[len] != '\0')
	{
		len++;
	}
	char f[len];

	for (int i = 0; i <= len; i++)
	{
		if (i >= 97 && i <= 122)
		{
			r = i - 32;
			f[i] = r;
		}
	}
	return (f);
}

