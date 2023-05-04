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
	if (n == 0)
		_putchar('0');
	while (n)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
}
