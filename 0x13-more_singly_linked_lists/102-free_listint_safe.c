#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t loop_list(listint_t *head);
/**
* free_listint_safe - function to safely free linked list
* @h: head node of linked list. when list is freed, head should NULL.
* Return: size of the list that was freed
**/
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n = 0, l = 0;

	if (h == NULL || *h == NULL)
		return (0);

	l = loop_list(*h);
	while (*h != NULL)
	{
		if (l == 0)
		{
			(*h)->next = NULL;
			break;
		}
		(*h) = (*h)->next;
		l--;
		n++;
	}
	while ((temp = (*h)))
	{
		(*h) = (*h)->next;
		free(temp);
	}
	*h = NULL;
	return (n);
}
