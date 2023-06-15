#include "lists.h"
/**
 * dlistint_len - function that returns number of elements in dlistint
 * @h: pointer to the header of the doubly linked list
 * Return: int number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++, h = h->next)
		;
	return (i);
}