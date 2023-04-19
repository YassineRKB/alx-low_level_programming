# include "function_pointers.h"
# include <stdio.h>

/**
* print_name - function that prints name
* @name: name to be printed
* @f: function pointer
* Return: void.
**/

void print_name(char *name, void (*f)(char *))
{
	if (!(name) || !(f))
		return (NULL);
	f(name);
}
