# include "main.c"
# include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: size of memory to be allocated
* Return: 98 or pointer to the allocated memory
**/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(unsigned int) * b);
	if (p == NULL)
		return (98);
	return (p);
}
