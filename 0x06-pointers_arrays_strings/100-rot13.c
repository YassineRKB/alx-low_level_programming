# include "main.h"

/**
* rot13 - function that encodes a string using rot13.
* @a: array
* Return: char
**/
char *rot13(char *a)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13bet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (a[i] == alphabet[j])
			{
				a[i] = rot13bet[j];
				break;
			}
		}
	}
	return (a);
}
