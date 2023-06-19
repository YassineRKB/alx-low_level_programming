# include "main.h"

/**
 * _strlen - function that retruns the lengh of a string.
 * @s: pointer.
 * Return: lenght of a string.
 * ***/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
