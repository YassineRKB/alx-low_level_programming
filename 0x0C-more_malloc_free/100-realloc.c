# include "main.h"
# include <stdlib.h>

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer's memory to reallocat
* @old_size: size of pointer allocated memory
* @new_size: size of new allocated memory
* Return: pointer, NULL
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pp;
	unsigned int i;

	if (ptr == NULL)
	{
		pp = malloc(new_size);
		if (pp == NULL)
			return (NULL);
		free(ptr);
		return (pp);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	pp = ptr;
	for (i = 0; i < new_size; i++)
	{
		p[i] = pp[i];
	}
	free(ptr);
	return (p);
}
