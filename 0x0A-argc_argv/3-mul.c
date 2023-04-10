#include <stdio.h>
/**
* main - entry point to code
* @argc: number of arguments
* @argv: value of arguments
* Return: 1 or 0.
**/
int main(int argc, char **argv)
{
	int a = argc - 1;

	if (a <= 0)
	{
		printf("Error\n");
		return (1);
	}
	int r, i;

	r = 1;
	for (i = 1; i <= a; i++)
	{
		r *= (int) argv[i];
	}
	printf("%d\n", r);
	return (0);
}
