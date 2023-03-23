#include <stdio.h>
/**
* _isupper - function that checks if variable is uppercase or not
* @c: targeted int variable
* Return: int 0 or 1
*/
int _isupper(int c)
{
	if (c < 90 && c > 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
