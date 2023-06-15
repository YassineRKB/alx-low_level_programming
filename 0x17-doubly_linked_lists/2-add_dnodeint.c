#include "lists.h"
/**
 * add_dnodeint - function to add new node to dlistint list
 * @head: double pointer to head of doubly linked list
 * @n: data of node to be added
 * Return: new dlistint_t doubly linked list on success, else NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (h)
	{
		new->next = h;
		h->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
