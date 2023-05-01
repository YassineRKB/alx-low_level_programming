#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* reverse_listint - function to reverse a linked list
* @head: head node of linked list
* Return: reversed linked list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *temp, *h;

	h = *head;
	temp = NULL;
	if (h == NULL)
		return (NULL);
	while (h->next != NULL)
	{
		node = h->next;
		h->next = temp;
		temp = h;
		h = node;
	}

	h->next = temp;
	*head = h;

	return (h);
}
