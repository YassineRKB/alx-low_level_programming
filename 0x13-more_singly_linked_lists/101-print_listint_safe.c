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
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		head = head->next;
		printf("[%p] %d\n", (void *) head, head->n);
		if (head = head->next)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)h, h->n);
			n++;
			break;
		}
		if (head == NULL)
			exit(98);
	}
	return (n);
}
