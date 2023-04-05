# include "main.h"
/**
* _pow_recursion - function that returns the value of x raised to power of y.
* @x: int num to be raised.
* @y: int num representing the power.
* Return: -1 if error, or int result of x power of y.
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
