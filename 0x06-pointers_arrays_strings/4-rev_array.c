# include "main.h"
/**
* reverse_array - function to reverse the content of an array.
* @a: array of int elements
* @n: n elements of array @a
* Return: nothing
**/
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;
	n = n - 1;
	while (i != n)
	{
		i = a[i];
		a[i] = a[n];
		a[n] = i;
		i++;
		n--;
	}
}
