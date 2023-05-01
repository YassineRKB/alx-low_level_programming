#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint - function to free linked lists
* @head: head node of linked list
* Return: void.
**/
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head))
	{
		head = head->next;
		free(node);
	}
}
