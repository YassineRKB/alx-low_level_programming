#include "main.h"
/**
*print_times_table - entry point to code
*description: if n is less than 0 or greather than 15 print time table
*@n: target value
*Return: time table of n
**/
void print_times_table(int n)
{
	if (n > 0 || n < 15)
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				r = i * j;
				if (r <= 9)
				{
					_putchar(' ');
					_putchar(r + '0');
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
}
