#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* set_bit - function to set bit to 1 at given index
* @n: pointer to target number
* @index: target index starting from 0.
* Return: 1 on success and -1 on fail.
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	*n = *n | ((1 << index));
	return (1);
}
