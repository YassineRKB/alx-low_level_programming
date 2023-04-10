# include <stdio.h>
# include <stdlib.h>
/**
* main - entry to code
* @argc: number of arguments
* @argv: value of arguments
* Return: 1 or 0
**/

int main(int argc, char **argv)
{
	int a = argc - 1;
	int i, j, r;
	int c[] = {25, 10, 5, 2, 1};

	r = 0;
	j = 0;
	if (a < 1 || a > 1)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; j >= 0 && i <= 4; i++)
	{
		while (j >= c[i])
		{
			j -= c[i];
			r++;
		}
	}
	printf("%d\n", r);
	return (0);
}
