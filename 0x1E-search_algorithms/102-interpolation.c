#include "search_algos.h"
/**
 * interpolation_search - like binary search, but use idx based on formula
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index value or -1 on fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, index;

	if (!array)
		return (-1);
	index = left + (((double)(right - left) / (array[right] - array[left]))
		   * (value - array[left]));
	for (; index < size; )
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			left = index + 1;
		else
			right = index - 1;
		index = left + (((double)(right - left) / (array[right] - array[left]))
			   * (value - array[left]));
	}
	printf("Value checked array[%lu] is out of range\n", index);
	return (-1);
}
