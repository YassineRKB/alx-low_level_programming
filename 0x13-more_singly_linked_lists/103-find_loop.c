#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* find_listint_loop - function to find the start of loop in linked list
* @head: head node of linked list.
* Return: the address of the node or null if no loop.
**/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (head == NULL)
		return (NULL);

	while (fast)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
