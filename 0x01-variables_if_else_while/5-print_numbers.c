#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints base 10 numbers
*	Return: 0
*/
int main(void)
{
	int i;
	char bas10[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(bas10[i]);
	}
	printf("\n");
	return (0);
}
