#include "main.h"
/**
* print_sign - entry point to the check
* Descrition: checks the sign of the int n
* @n: int to be checked
* Return: 0 or 1 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + '0');
		return (+1);
	}

	if (n == 0)
	{
		_putchar('0' + '0');
		return (0);
	}


	if (n < 0)
	{
		_putchar('-' + '0');
		return (-1);
	}
}
