#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t loop_list(const listint_t *head);

/**
* print_listint_safe - function that prints a linked list
* @head: head node of the linked list
* Return: num of nodes in linked list, 98 on fail
***/
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, idx = 0;

	if (head == NULL)
		exit(98);
	n = loop_list(head);
	if (n != 0)
	{
		while (idx < n)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next, idx++;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	else
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next, n++;
		}
	}
	return (n);
}
/**
* loop_list - function to implement the floyed algorithm
* @head: linked list to be searched.
* Return: number of nodes/
**/
size_t loop_list(const listint_t *head)
{
	const listint_t *fast = head, *slow = head;
	size_t n;

	if (head == NULL || head->next == NULL)
		return (0);
	fast = fast->next->next;
	slow = slow->next;
	n = 1;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
			}
			return (n);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
