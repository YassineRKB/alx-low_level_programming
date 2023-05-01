#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - function to insert a new node in given position.
* @head: head node of the linked list.
* @idx: position where the new node will be inserted.
* @n: data n of new node.
* Return: linked list.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *h;
	unsigned int i = 0;

	h = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head, *head = node;
		return (node);
	}
	for (; i < (idx - 1); i++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);
		h = h->next;
	}
	node->next = h->next;
	h->next = node;

	return (node);
}
