#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints the base 16 numbers
*	Return: 0
*/
int main(void)
{
	int i;
	char a[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
