#include "main.h"
/**
* print_triangle - function that prints a triangle
* @size: int value that represent the size of triangle
* Return: nothing
*/
void print_triangle(int size)
{
	int i, j, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				r = size - i - 1;
				if (j < r)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
