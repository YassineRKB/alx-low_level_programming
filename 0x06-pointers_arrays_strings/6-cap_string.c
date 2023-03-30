# include "main.h"

/**
* cap_string - function that capitalizes all words of a string.
* @a: array
* Return: char
**/

char *cap_string(char *a)
{
	int len = 0;
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (a[len] != '\0')
	{
		if ((a[len] >= 97 && a[len] <= 122))
		{
			if (len == 0)
			{
				a[len] = a[len] - 32;
			}
			else
			{
				for (int j = 0; j <= 12; j++)
				{
					if (sep[j] == a[len - 1])
					{
						a[len] = a[len] - 32;
					}
				}
			}
		}
		len++;
	}
	return (a);
}

