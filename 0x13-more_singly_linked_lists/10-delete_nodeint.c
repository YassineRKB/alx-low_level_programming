#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - function to pop node at given position
* @head: head node of linked list
* @index: position of node to pop
* Return: 1 on pop and -1 on fail
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *h;
	unsigned int i = 0;

	h = *head;
	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	while (i < (index - 1))
	{
		if (h == NULL || h->next == NULL)
			return (-1);
		h = h->next;
		i++;
	}
	node = h->next, h->next = node->next, free(node);
	return (1);
}
