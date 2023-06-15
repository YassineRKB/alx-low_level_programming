#include "lists.h"
/**
 * free_dlistint - function to free a dlistint_t list
 * @head: pointer to the head of doubly linked list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *dlist;

	for ( ;head; head = dlist)
	{
		dlist = head->next;
		free(head);
	}
}
