#include <stdio.h>
/**
* main- entry point
* description: prints the sum of all the multiples of 3 or 5 below 1024
* Return: 0
*/
int main(void)
{
	int i = 0;
	int r = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			r += i
		}
		i += 1
	}
	printf("%d\n", r);
	return (0);
}
