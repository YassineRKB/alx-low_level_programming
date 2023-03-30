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

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}

