# include "main.h"
/**
* _strcat - function
* @src: source string
* @dest: destination string
* Return: pointer
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

