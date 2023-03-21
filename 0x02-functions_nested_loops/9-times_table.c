#include "main.h"
/**
* name times_table - Entry Point to the code
* description - prints the 9 time tables
* Return: 9 time tables
*/
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			r = i * j;
			if (r <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
