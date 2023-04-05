#include "main.h"
/**
* factorial - function that returns the factorial of a given number.
* @n: number.
* Return: -1 if n<0 (error), int factorial of n.
**/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
