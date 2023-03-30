#include "main.h"
/**
* _strcmp - function that compares two strings.
* @s1: first string
* @s2: second string
* return: int
**/
int _strcmp(char *s1, char *s2)
{
	int i, r;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
