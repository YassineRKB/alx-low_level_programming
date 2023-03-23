#include "main.h"

/**
* print_square - function that prints squares
* @size: int value, defines size of the square
* Return: nothing
**/

void print_square(int size)
{
	int i, j;

	i = 0
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
			i++;
		}
	}
}
