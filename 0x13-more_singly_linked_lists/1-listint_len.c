#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* listint_len - function taht returns number of elements linked in list
* @h: header node of the linked list
* Return: number of elements linked
**/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
