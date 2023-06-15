#include "lists.h"
/**
 * add_dnodeint_end - function to add node to the end of dlistint_t list
 * @head: double pointer to header node of doubly linked list
 * @n: int data of node to be inserted
 * Return: new dlistint_t doubly linked list on success, else NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (h)
	{
		for (; h->next; h = h->next)
			;
		new->prev = h;
		h->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
