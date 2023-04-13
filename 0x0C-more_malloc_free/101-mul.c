# include <stdio.h>
# include <stdlib.h>

/**
* main - a program that multiplies two positive numbers.
* @argc: arguments count.
* @argv: arguments value.
* Return: int result, 1 if error.
**/

int main(int argc, char **argv)
{
	long int r, n1, n2;

	if (argc != 3)
	{
		printf("Error");
		return (98);
	}
	n1 = strtol(argv[1], NULL, 10);
	n2 = strtol(argv[2], NULL, 10);
	printf("%ld\n%ld\n", n1, n2);
	r = n1 * n2;
	printf("%ld\n", r);
	return (0);
}
