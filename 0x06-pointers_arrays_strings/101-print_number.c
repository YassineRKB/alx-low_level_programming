# include "main.h"
/**
* print_number - function that prints an integer.
* @n: int value
* Return: void
**/
void print_number(int n)
{
	int n1;

	n1 = n;
	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}
	if (n1 < 10)
	{
		putchar((n % 10) + '0');
	}
	else if (n1 >= 10 && n1 < 100)
	{
		putchar((n1 / 10) % 10 + '0');
		putchar(n1 % 10 + '0');
	}
	else if (n1 >= 100)
	{
		putchar((n1 / 10) / 10 + '0');
		putchar((n1 / 10) % 10 + '0');
		putchar(n1 % 10 + '0');
	}
}
