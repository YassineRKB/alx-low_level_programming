#include "main.h"

/**
* _strncpy - function that copies a string.
* @src: source inpt
* @dest: destination string
* @n: n bytes
* Return: char
**/

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}

	while (len != n)
	{
		dest[len++] = '\0';
	}
	return (dest);
}
