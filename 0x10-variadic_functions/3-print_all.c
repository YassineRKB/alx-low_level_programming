# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
* Return: void
**/

void print_all(const char * const format, ...)
{
	va_list argh;
	unsigned int i, j;
	char ar[] = "cifs";

	va_start(argh, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (ar[j] && i == 0)
		{
			printf("%s", va_arg(argh, char *));
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argh, int));
				break;
			case 'i':
				printf("%d", va_arg(argh, int));
				break;
			case 'f':
				printf("%f", va_arg(argh, double));
				break;
			case 's':
				if (va_arg(argh, char *))
				{
					printf("%s", va_arg(argh, char *));
					break;
				}
				printf("(nil)");
				break;
		}
		i++;
	}
	va_end(argh);
	printf("\n");
}
