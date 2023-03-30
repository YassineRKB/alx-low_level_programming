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
		if (a[len] >= 97 && a[len] <= 122)
		{
			a[len] = a[len] - 32;
		}
		len++;
	}
	return (a);
}

