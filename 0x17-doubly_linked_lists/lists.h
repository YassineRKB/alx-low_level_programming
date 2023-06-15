#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - struct for doubly linked list
 * @n: data on node
 * @next: pointer to next node
 * @prev: pointer to previous node
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif
