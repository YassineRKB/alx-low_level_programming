# include <stdlib.h>
# include "main.h"

/**
* free_grid - function that frees a 2 dimensional grid
* @grid: a 2d array.
* @height: height of 2d array
* Return: nothing
**/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}