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
	unsigned long int r, n1, n2;
	char *s1, *s2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	n1 = strtol(argv[1], &s1, 10);
	n2 = strtol(argv[2], &s2, 10);
	if (strcmp(s1, "") != 0 ||  strcmp(s2, "") != 0)
	{
		printf("Error\n");
		return (98);
	}
	r = n1 * n2;
	printf("%ld\n", r);
	return (r);
}
