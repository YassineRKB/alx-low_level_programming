#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* flip_bits - returns number of bits needed to move to another number
* @n: Number
* @m: the other number
* Return: number of bits
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits = 0, xor = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
		if (xor & 1)
			numbits++;
	return (numbits);
}
