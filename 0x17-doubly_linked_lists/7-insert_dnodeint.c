#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert node at index
 * @h: double pointer to head node of doubly linked list
 * @idx: index where to insert the node
 * @n: int data of the to-be inserted node
 * Return: pointer to new node on success, NULL on fail.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new;
	unsigned int i = 0, len = 0;

	for (; head; head = head->next, len++)
		;
	if (idx > len)
		return (NULL);
	else if (!idx)
		new = add_dnodeint(h, n);
	else if (idx == len)
		new = add_dnodeint_end(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		head = *h;
		for (; i < idx; i++, head = head->next)
			;
		new->n = n;
		head->prev->next = new;
		new->prev = head->prev;
		new->next = head;
		head->prev = new;
	}
	return (new);
}
