# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "main.h"
/**
* main - a program that multiplies two positive numbers.
* @argc: arguments count.
* @argv: arguments value.
* Return: int result, 1 if error.
**/
int main(int argc, char **argv)
{
	int r, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	r = n1 * n2;
	printf("%d\n", r);
	return (r);
}
