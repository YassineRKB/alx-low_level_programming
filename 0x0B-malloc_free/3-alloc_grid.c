# include <stdlib.h>
# include "main.h"

/**
* alloc_grid - function that returns a pointer to a 2 dimensional
* array of integers.
* @width: width of 2d array.
* @height: height of 2d array.
* Return: Null on fail, Null on width == 0 || height == 0, pointer
**/
int **alloc_grid(int width, int height)
{
	int **p;
	int size, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	size = (sizeof(int *) * height);
	p = (int **) malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		p[i] = (int) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}
	return (p);
}
