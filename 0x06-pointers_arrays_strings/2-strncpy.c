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

	while (dest[len] != 0)
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
