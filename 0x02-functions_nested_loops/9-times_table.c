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
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r <= 9)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
	}
}
