# include "main.h"
/**
 * swap_int - function thta swaps the values of 2 pointers
 * @a: int pointer
 * @b: int pointer
 * Return: nothing.
 * ***/

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
