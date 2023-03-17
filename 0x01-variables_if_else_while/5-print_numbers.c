#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints base 10 numbers
*	Return: 0
*/
int main(void)
{
	int i;
	char bas10 = "0123456789";

	for (i = 0; i < 11; i++)
	{
		putchar(bas10[i]);
	}
	return (0);
}
