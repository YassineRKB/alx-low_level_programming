#include "main.h"
/**
* _abs - entry point to the code
* Description: computes the absolute value of int n
* @n: int to be checked
* Return: 0
**/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
