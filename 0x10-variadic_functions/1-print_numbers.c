# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: number of ints passed to the function
* Return: void.
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d ", va_arg(nums, int));
		if (separator != NULL && i == n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(nums);
}
