#include "main.h"
/**
* _isdigit - function that checks @c is digit
* @c: evaluation target
* Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
