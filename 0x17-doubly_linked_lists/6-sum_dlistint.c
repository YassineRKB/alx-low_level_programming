#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all nodes data n
 * @head: pointer to head node of doubly linked list
 * Return: int sum of all nodes->n, else 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	size_t n = 0;

	if (head)
		for (; head; head = head->next)
			n += head->n;
	return (n);
}
