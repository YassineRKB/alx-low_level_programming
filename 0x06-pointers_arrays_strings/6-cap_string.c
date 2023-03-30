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
			string_toupper(a[len]);
			len++;
		}
		if (a[len - 1] == ' ')
		{
			string_toupper(a[len]);
		}
	}
	return (a);
}

