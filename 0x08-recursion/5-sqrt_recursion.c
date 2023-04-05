# include "main.h"
/**
* _sqrt_recursion - function that returns the natural
* square root of a number.
* @n: int.
* Return: -1 if error, natural square root.
**/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqr - square root function
* @s: number to calculate square root for
* @w: number
* Return: int natural square root
**/
int _sqrt(int s, int w)
{
	if (w < 0)
	{
		return (-1);
	}
	if ((w * w) > s)
	{
		return (-1);
	}
	if ((w * w) == s)
	{
		return (w);
	}
	return (_sqrt(s, w++));
}
