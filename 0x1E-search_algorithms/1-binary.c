#include "search_algos.h"
/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index value or -1 on fail
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, r, start, stop;

	if (!size)
		return (-1);
	stop = size - 1;
	i = stop / 2;
	start = 0;
	for (; start <= stop;)
	{
		printf("Searching in array: ");
		j = start;
		for (; j < stop; ++j)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (value == array[i])
			return (i);
		else if (value < array[i])
			stop = (i - 1);
		else
			start = (i + 1);
		r = (stop - start);
		i = r / 2;
		i = i + start;
	}
	return (-1);
}
