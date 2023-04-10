#include "main.h"
/**
 * _atoi - function that converts string to int
 * @s: string to be converted
 * Return: converted number or 0
*/
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int len = 0;
	int j = 0;
	int c = 0;
	int d;

	d = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && c == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
			{
				d = -d;
			}
			n = n * 10 + d;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			c = 0;
		}
		i++;
	}
	if (c == 0)
	{
		return (0);
	}
	return (n);
}
