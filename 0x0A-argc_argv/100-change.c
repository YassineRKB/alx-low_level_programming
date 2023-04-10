# include <stdio.h>
/**
* main - entry to code
* @argc: number of arguments
* @argv: value of arguments
* Return:
**/

int main(int argc, char **argv)
{
	int a = argc - 1;

	if (a < 1 || a > 1)
	{
		printf("Error\n");
		return (1);
	}
}
