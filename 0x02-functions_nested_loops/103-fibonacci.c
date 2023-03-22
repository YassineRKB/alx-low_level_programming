#include <stdio.h>
/**
*main - entry point
*descrition: prints even values of fib seq
*Return: 0
**/
int main(void)
{
	long j, r, s;
	int i = 0;

	j = 1, r = 2, s = 2;
	while (r + j < 4000000)
	{
		r += j;
		if (r % 2 == 0)
		{
			s += r;
			j = r - j;
			++i;
		}
	}
	printf("%ld\n", s);
	return (0);
}
