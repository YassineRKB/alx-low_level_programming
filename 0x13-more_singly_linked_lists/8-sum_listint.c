#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - function to return sum of all (n) in linked list
* @head: head node of the linked list.
* Return: sum of element n of all nodes in linked list.
**/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
