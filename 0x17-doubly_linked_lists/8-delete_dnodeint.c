#include "lists.h"
/**
 * delete_dnodeint_at_index - func to delete a node at given index
 * @head: double pointer to header node of the doubly linked list
 * @index: index of the node to be deleted
 * Return: int 1 on success, else -1 on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	unsigned int len = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	h = *head;
	for (; h; h = h->next)
		len++;
	h = *head;
	if (index == 0)
	{
		*head = h->next;
		if (h->next)
			h->next->prev = NULL;
		free(h);
		return (1);
	}
	len = 0;
	for (; len < index; h = h->next, len++)
		if (!h->next)
			return (-1);
	h->prev->next = h->next;
	if (h->next)
		h->next->prev = h->prev;
	free(h);
	return (1);
}
