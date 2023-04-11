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
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[len] = av[i][j] + '\n';
			len++;
		}
		p[len] = '\0';
		len++;
	}
	return (p);
}
