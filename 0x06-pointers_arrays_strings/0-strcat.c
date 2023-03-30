# include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: destination string.
* @src: source string to be appended in @dest
* Return: char
**/

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
