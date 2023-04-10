# include <stdio.h>
/**
* main - entry point to code
* @argc: number of arguments
* @argv: value of arguments
* Return: 0
**/
int main(int argc, char **argv)
{
	int a = argc - 1;
	int i;

	for (i = 0; i <= a; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
