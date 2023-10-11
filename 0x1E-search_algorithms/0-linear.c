# include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index value or -1 in case of fail.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
