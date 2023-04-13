# include "main.h"
# include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: 1st string.
* @s2: 2nd string.
* @n: n bytes copy from s2 if n < lenght(s2)
* Return: NULL on fail, pointer
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	while (i < (len1 + n))
	{
		if (i < len1)
			p[i] = s1[i];
		if (i >= len1)
			p[i] = s2[i - len1];
		i++;
	}
	p[i] = '\0';
	return (p);
}
