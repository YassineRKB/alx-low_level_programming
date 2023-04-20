# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
* print_all - function that prints all
* @format: list of types passed to function.
* Return: void.
**/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, f = 0;
	char *string;
	const char ar[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (ar[j])
		{
			if (format[i] == ar[j] && f)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), f = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), f = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), f = 1;
				break;
			case 's':
				string = va_arg(ap, char *), f = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		i++;
	} printf("\n"), va_end(ap);
}
