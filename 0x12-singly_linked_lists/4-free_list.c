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
	list_t *temp;
	temp = head;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
