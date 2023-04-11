# include <stdlib.h>
# include "main.h"

/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: sring to be duplicated in allocated memory.
* Return: Null if str == Null or enough memory is not available, or pointer.
**/
char *_strdup(char *str)
{
	char *p;
	int i, len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	p = (char *) malloc(sizeof(char) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

