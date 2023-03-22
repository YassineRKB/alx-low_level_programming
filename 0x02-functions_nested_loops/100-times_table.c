#include "main.h"
/**
*print_times_table - entry point to code
*description: if n is less than 0 or greather than 15 print time table
*@n: target value
*Return: time table of n
**/
void print_times_table(int n)
{
	int i, j, r;

	if (n > 0 || n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
				for (j = 1; j <= n; j++)
				{
					_putchar(',');
					_putchar(' ');
					r = i * j;
					if (r <= 99)
					{
						_putchar(' ');
					}
					if (r <= 9)
					{
						_putchar(' ');
					}
					if (r >= 100)
					{
						_putchar((mult / 10) + '0');
						_putchar((mult % 10) + '0');
					}
					else if (r <= 99 && r >= 10)
					{
						_putchar((r / 10) + '0');
					}
					_putchar((r % 10) + '0');
				}
			_putchar('\n');
		}
	}
}
