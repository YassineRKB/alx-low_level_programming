#include <stdio.h>
/**
*	main - Entry Point
*	Description: prints all possible combinations for single digit
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
		if (i == 9)
		{
			continue;
		}
		putchar(',');
	}
	putchar('\n');
	return (0);
}

