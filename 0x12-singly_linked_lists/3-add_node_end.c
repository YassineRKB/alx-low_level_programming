#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - function to add a node to the end of linked list
* @head: head of linked list
* @str: string of the new node
* Return: address of new node
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t len = 0;

	if (str != NULL)
		while (str[len] != '\0')
			len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		free(new_node);
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	temp_node = *head;
	if (temp_node != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	else
		*head = new_node;

	return (*head);
}
