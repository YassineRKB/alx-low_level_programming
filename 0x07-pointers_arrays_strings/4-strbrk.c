# include "main.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: string to be scanned.
* @accept: string's bytes to be matched.
* Return: pointer or null
**/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
