#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum
* of the two diagonals of a square matrix of integers.
* @a: array
* @size: size int of array
* Return: nothing
**/

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * (size + 1)];
		s2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
