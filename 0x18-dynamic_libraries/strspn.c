#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @s: string to be scanned
* @accept: string to match
* Return: number bytes.
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (len);
			}
		}
	}
	return (len);
}
