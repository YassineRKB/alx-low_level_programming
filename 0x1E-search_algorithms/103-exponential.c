#include "search_algos.h"
/**
 * exponential_search - function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index value or -1 on fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, top = size - 1;

	if (!array)
		return (-1);
	while (i < size && array[i] < value)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]), i *= 2;
	if (i >= size)
	    top = size - 1;
	else
    	top = i;
	low = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, top);
	for (; low <= top; )
	{
		i = low + (top - low) / 2;
		printf("Searching in array: ");
		for (; low <= top; low++)
		{
			if (low != top)
				printf("%d, ", array[low]);
			else
				printf("%d\n", array[low]);
		}
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i + 1;
		else
			top = i - 1;
	}
	return (-1);
}
