#include "main.h"
/**
 * _atoi - function that converts string to int
 * @s: string to be converted
 * Return: converted number or 0
*/
int _atoi(char *s)
{
	int n, i, j, len, d, c;

	len = 0;
	i = 0;
	d = 0;
	while (s[len] != 0)
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
			if (s[i] < '0' || s[i] > '9')
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
	else
	{
		return (n);
	}
}
