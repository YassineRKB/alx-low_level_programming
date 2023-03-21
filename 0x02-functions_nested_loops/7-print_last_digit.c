#include "main.h"
/**
* print_last_digit - entry point to the code
* Description: prints the last digit of a number n
* @n: int number to be checked
* Return: 0
**/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (0);
}
