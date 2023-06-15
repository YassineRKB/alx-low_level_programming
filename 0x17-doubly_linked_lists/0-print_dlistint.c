#include "lists.h"
/**
 * print_dlistint - func to print all elements of dlistint_t list.
 * @h: pointer to double linked list header
 * Return: int
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
