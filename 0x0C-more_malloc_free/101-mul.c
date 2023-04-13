# include <stdio.h>

/**
* main - a program that multiplies two positive numbers.
* @argc: arguments count.
* @argv: arguments value.
* Return: int result, 1 if error.
**/
int main(int argc, int **argv)
{
	unsigned int r, n1, n2;

	if (argc != 3)
		printf("Error");
		return (98);
	if (!isdigit(argv[1]) || !isdigit(argv[2]))
		printf("Error");
	n1 = argv[1];
	n2 = argv[2];
	r = n1 * n2;
	return (r);
}
