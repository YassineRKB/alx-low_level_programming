#include "lists.h"
/**
 * get_dnodeint_at_index - function to get a node from doubly linked list
 * @head: pointer to the head node of the doubly linked list
 * @index: position where to get node in doubly linked list
 * Return: node n data if node exists else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head)
	{
		for ( ; head && i < index; i++, head = head->next)
			;
		if (i == index)
			return (head);
	}
	return (NULL);
}
