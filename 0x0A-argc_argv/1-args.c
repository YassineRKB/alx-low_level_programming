# include <stdio.h>
/**
* main - entry point to code
* @argc: number of arguments
* @argv: value of arguments
* Return: 0.
**/
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void) **argv;
	return (0);
}
