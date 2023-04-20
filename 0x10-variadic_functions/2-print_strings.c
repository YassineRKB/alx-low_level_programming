# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
* print_strings - function that prints strings & \n.
* @separator: the string used as separator
* @n:number of elements passed to the function
* Return: void.
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (!string)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
