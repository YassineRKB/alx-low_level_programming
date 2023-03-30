# include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: destination string.
* @src: source string to be appended in @dest
* Return: char
**/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
