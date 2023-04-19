# include "3-calc.h"
# include <stddef.h>

/**
* get_op_func - function that passes the right function
* @s: operator char
* Return: pointer to requested function.
**/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while(ops[i] != '\0')
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
