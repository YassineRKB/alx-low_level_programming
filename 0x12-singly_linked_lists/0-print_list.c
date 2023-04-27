#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t
* @h: struct list
* Return: number of nodes, NULL if str is null
****/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
