# include <stdlib.h>
# include "main.h"

/**
* strtow - function that splits a string into words.
* @str: string
* Return: pointer or NULL if str == NULL or str == ""
**/

char **strtow(char *str)
{
	char **p;
	int len = 0, i;

	if (str == NULL || str == "")
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	p = (char **) malloc(sizeof(char *) * (len + 1))
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			p[i] = str[i];
		}
	}
}
