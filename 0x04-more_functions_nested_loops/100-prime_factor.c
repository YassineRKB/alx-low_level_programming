#include <stdio.h>
/**
* main - entry point to code that finds largest prime factor
* Return: 0.
*/

int main(void)
{
	long number = 612852475143;
	long prime = 0;
	long div = 2;

	while (number !1)
	{
		if (number % div == 0)
		{
			number = number / div;
			prime = div;
		}
		div += 1;
	}
	printf("%ld\n", prime);
	return (0);
}
