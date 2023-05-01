#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - function that deletes the head node of linked list
* @head: head node of linked list
* Return: 0 if linked list is empty, head node's data
**/
int pop_listint(listint_t **head)
{
	listint_t *node, *h;
	size_t n;

	h = *head;
	if (h == NULL)
		return (0);
	n = h->n;
	node = h->next;
	free(h);
	*head = node;
	return (n);

}
