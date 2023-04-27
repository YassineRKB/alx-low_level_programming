#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len - function that returns total of elements in a linked list
* @h: head of linked list
* Return: number of elements.
**/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
