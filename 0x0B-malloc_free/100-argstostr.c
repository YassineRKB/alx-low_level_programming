# include <stdlib.h>
# include "main.h"

/**
* argstostr - function that concatenates all
* the arguments of your program.
* @ac: arguments counter
* @av: arguments value
* Return: NULL if ac == 0 or av == NULL or pointer.
**/

char *argstostr(int ac, char **av)
{
	char *p;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	p = (char *) malloc(sizeof(char) * ac);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		p[i] = av[i] + '\n';
	}
	return (p);
}
