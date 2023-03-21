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
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (r < 10)
				{
					if (j != 10 && j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (j = 10)
					{
						_putchar(' ');
						_putchar(' ');	
					}
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r % 100) / 10) + '0');
					_putchar((r % 10) + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
