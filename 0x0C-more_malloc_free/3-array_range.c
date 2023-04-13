# include "main.h"
# include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: min number
* @max: max number
* Return: pointer or NULL if min > max,
**/

int *array_range(int min, int max)
{
	int *p;
	int len = min + max + 1, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
