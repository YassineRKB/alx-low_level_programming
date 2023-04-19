# include <stddef.h>
# include "function_pointers.h"

/**
* array_iterator - function that invokes a function passed as parameter
* on each element of array.
* @array: array containning int elements.
* @size: size of array.
* @action: function to be invoked.
* Return: void.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
