# include "main.h"
/**
* is_prime_number -
* @n: number to be checked
* Return: 1 if prime, or 0 if not
**/

int is_prime_number(int n)
{
	return (prim(n, 2));
}

/**
* prim - recursive function to check prime number
* @x: passed n number
* @i: number.
* Return: prime number.
**/

int prim(int x, int i)
{
	if (x == i)
	{
		return (1);
	}
	if (x != i && x % i == 0)
	{
		return (0);
	}
	if (x <= 1)
	{
		return (0);
	}
	return (prim(x, i + 1));
}
