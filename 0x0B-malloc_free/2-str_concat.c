# include <stdlib.h>
# include "main.h"

/**
* str_concat - function that concatenates two strings.
* @s1: 1st string
* @s2: 2nd string
* Return: pointer, null on fail
**/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1, size2, size, j;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}

	size1 = sizeof(s1);
	size2 = sizeof(s2);
	size = size1 + size2 + 1;
	p = malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i <= size; i++)
	{
		if (i <= size1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[j];
			j++;
		}
	}
}
