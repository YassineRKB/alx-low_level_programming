# include <stdio.h>
# include <stdlib.h>
# include <string.h>
/**
* main - entry point
* @argc: arguments counter
* @argv: arguments value
* Return: 0
**/
int main(int argc, char **argv)
{
	int i, n;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
