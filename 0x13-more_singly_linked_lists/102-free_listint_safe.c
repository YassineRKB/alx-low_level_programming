#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - function to safely free linked list
* @h: head node of linked list. when list is freed, head should NULL.
* Return: size of the list that was freed
**/
size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *temp = *h;
	size_t n = 0;

	while ((node = temp))
	{
		temp = temp->next;
		free(node);
		n++;
	}
	*h = temp;
	return (n);
}
