# include "main.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: string to be scanned.
* @accept: string's bytes to be matched.
* Return: pointer or null
**/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *(s + j))
			{
				return (s + i);
			}
		}
		if (*(accept + i) == *(s + j))
		{
			return (s + i);
		}
	}
	return ('\0');
}
