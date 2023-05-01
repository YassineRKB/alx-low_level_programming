#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - function to add new node at the start of a linked list.
* @head: Head node of the linked list
* @n: id of the node
* Return: NULL on fail, or address of new node.
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = (*head != NULL) ? *head : NULL;
	*head = node;

	return (*head);
}
