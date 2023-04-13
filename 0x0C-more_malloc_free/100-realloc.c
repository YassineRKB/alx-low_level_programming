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
	void *p;
	unsigned int i;

	if (ptr == NULL)
		ptr = malloc(newsize);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	p = malloc(sizeof(*p) * (newsize - oldsize + 1));
	if (p == NULL)
		return (NULL);
	if (newsize > oldsize)
	{
		for (i = 0; oldsize < newsize; i++)
		{
			if (i <= oldsize)
				p[i] = ptr[i];
			if (i > oldsize && i <= newsize)
				p[i] = 0;
		}
	}
	return (p);
}
