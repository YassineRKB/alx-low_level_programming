#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_node - function that adds a new node at the beginning linked list
* @head: head of the linked list.
* @str: the string to be added to new node.
* Return: adress of new element on success else NULL.
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	if (str != NULL)
	{
		while (str[len] != '\0')
			len++;
	}
	else
		len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head != NULL)
		new_node->next = *head;
	else
		new_node->next = NULL;

	new_node->str = strdup(str);
	new_node->len = len;
	*head = new_node;
	return (new_node);
}
