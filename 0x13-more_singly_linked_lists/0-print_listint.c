#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - function that prints all the elements of a linked list.
* @h: header of the linked list
* Return: the number of nodes.
******/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
