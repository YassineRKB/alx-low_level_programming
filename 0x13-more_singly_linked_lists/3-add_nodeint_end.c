#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - function to add new node at the end of a linked list.
* @head: Head node of the linked list
* @n: n int of new node.
* Return: NULL on fail, or address of new node.
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *h;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	h = *head;
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		for (; h->next;)
			h = h->next;
		h->next = node;
	}
	else
		*head = node;

	return (*head);
}
