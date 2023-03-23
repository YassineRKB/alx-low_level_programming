#include "main.h"
/**
* print_number - function that prints an int
* @n: int target value
* Return: nothing.
*/
void print_number(int n)
{
	unsigned int n1, n2;
	int i, d;

	d = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	n1 = n;
	n2 = n;
	if (n1 < 9)
	{
		_putchar(n1 + '0');
	}
	else
	{
		n1 = n1 / 10;
		_putchar(n2 / 10 + '0');

		for (i = 1; i >= 1; i = i / 10)
		{
			_putchar(n2 / i % 10 + '0');
		}
	}
}
