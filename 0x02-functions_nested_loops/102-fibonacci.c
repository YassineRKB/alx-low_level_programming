/**
*main - entry point
*description: prints the first 50 Fibonacci numbers
*Return: 0
**/
int main(void)
{
	long i, j, f;
	int n = 0;

	i = 0;
	j = 1;

	while (n < 50)
	{
		f = i + j;
		if (n == 49)
		{
			printf("%ld\n", f);
		}
		else
		{
			printf("%ld, ", f);
		}
		i = j;
		j = f;
		n++;
	}
	return (0);
}
