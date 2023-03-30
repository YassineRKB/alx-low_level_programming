# include "main.h"
/**
* reverse_array - function to reverse the content of an array.
* @a: array of int elements
* @n: n elements of array @a
* Return: nothing
**/
void reverse_array(int *a, int n)
{
	int i, r, j, k;

	i = 0;
	j = 0;
	r = n - 1;
	while (i != n)
	{
		i = a[i];
		a[i] = a[r];
		a[r] = i;
		i++;
		r--;
	}
}
