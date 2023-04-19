# include "calc.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/**
* main - entry point
*
**/

int main(int argc, char **argv)
{
	int n1, n2;
	char *oper;
	/* cehck arguments */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert numbers */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	oper = argv[2];
	/* get the function and check for error */
	if (get_op_func(oper)(n1, n2) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* calculate the result */
	if ((*opera == '/' || *opera == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(n1, n2));
}
