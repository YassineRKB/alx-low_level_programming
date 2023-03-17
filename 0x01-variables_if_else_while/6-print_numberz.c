#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints base 10 numbers
*	Return: 0
*/
int main(void)
{
	int i;
	int d = 48;

	for (i = 0; i < 10; i++)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
