# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/**
* main - entry point
* @argc: arguments counter
* @argv: arguments Value
* Return: Result int.
**/

int main(int argc, char **argv)
{
	int n1, n2;
	char *oper;

	/* cehck arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert numbers */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	oper = argv[2];
	/* get the function and check for error */
	if (get_op_func(oper) == NULL || oper[1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* calculate the result */
	if ((*oper == '/' || *oper == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(n1, n2));
	return (0);
}
