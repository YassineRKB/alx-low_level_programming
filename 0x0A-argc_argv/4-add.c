#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
* main - entry point to code
* @argc: number of arguments
* @argv: value of arguments
* Return: 1 or 0.
**/
int main(int argc, char **argv)
{
	int a = argc - 1;
	int r;
	int i;
	int j;
	int n;

	r = 0;
	if (a == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i <= a; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}

		n = atoi(argv[i]);
		r += n;
	}
	printf("%d\n", r);
	return (0);
}
