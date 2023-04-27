#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_list - function to free linked lists
* @head: node to be freed
* Return: void
**/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
