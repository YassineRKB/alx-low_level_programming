#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - function that prints a linked list
* @head: head node of the linked list
* Return: num of nodes in linked list, 98 on fail
***/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *h = head;
	int i, n = 0;

	for (; h != NULL; n++)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		node = head;
		i = 0;
		for (; i < n; i++)
		{
			if (h == node)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				return (n);
			}
			node = node->next;
		}
	}
	return (n);
}
