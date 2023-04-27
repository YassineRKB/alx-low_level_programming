#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t
* @h: struct list
* Return: number of nodes.
****/

size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (n);
}
