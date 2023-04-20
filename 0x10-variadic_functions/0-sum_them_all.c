# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: number of elements
* Return: result int, o if n == 0
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);
	va_end(nums);
	return (sum);
}
