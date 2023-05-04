#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* get_bit - function to return the value of the bit in given index
* @n: a number.
* @index: target index starting from 0.
* Return: index bit value on success, or -1 on fail
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	return ((n >>= index) & 1);
}
