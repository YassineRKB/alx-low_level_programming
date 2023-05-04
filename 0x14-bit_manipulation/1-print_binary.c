#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_binary - function to print number in binary
* @n: number to be printed in binary
* Return: void
**/
void print_binary(unsigned long int n)
{
	if (n <= '0')
		_putchar('0');
	if (n == 1)
		_putchar('1');
	while (n >> 1)
	{
		n >>= 1;
		_putchar((n & 1) + '0');
	}
}
/**
* checksnum - checks if v is num
* @v: value to be checked
* Return: -1 on fail and v on success
**/
int checksnum(char v)
{
	if (v <= '9' && v >= '0')
		return (v + '0');
	return (-1);
}
