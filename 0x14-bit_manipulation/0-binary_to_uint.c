#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int checksnum(char v);
/**
* binary_to_uint - function to convert base 2 to usigned int
* @b: binary
* Return: unsigned int on success, 0 on fail.
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int len = 0, m;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	len = len - 1;
	r = 0;
	m = 1;
	while (len >= 0)
	{
		if (checksnum(b[len]) == -1)
			return (0);
		r += checksnum(b[len]) * m;
		len--;
		m *= 2;
	}
	return (r);
}
/**
* checksnum - checks if value is 1 or 0;
* @v: char to be checked
* Return: int
**/
int checksnum(char v)
{
	if (v == '1' || v == '0')
		return (v - '0');

	return (-1);
}
