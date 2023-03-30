# include "main.h"
/**
* _strncat - function that concatenates two strings.
* @dest: output.
* @src: source input.
* @n: int.
* Return: pointer
**/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
