#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - function to free linked list
* @head: head node of linked list
* Return: void.
**/
void free_listint2(listint_t **head)
{
	listint_t *node, *h;

	h = *head;
	while ((node = h))
	{
		h = h->next;
		free(node);
	}
	*head = NULL;
}
