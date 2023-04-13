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
	int len = min, i;

	if (min > max)
		return (NULL);

	while (len != max)
		len++;

	p = malloc(sizeof(int *) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
