# include <stdlib.h>
# include "main.h"
# include <stdio.h>
/**
* str_concat - function that concatenates two strings.
* @s1: 1st string
* @s2: 2nd string
* Return: pointer, null on fail
**/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(s1) + sizeof(s2) + sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		p[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[j++] = s2[i];
		i++;
	}

	return (p);
}
