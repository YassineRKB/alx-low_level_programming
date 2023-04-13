# include "main.h"
# include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: number of elements in array.
* @size: size of each element in array.
* Return: NULL if malloc fails, or if nmemb or size is 0.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	while (i < (size * nmemb))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
