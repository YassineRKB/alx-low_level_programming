#include "search_algos.h"
/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index value or -1 on fail
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, cond = 0, j = 0, jump = sqrt(size);

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if ((i + jump >= size || array[i + jump] >= value) && !cond)
		{
			j = i;
			i = i + jump;
			printf("Value found between indexes [%lu] and [%lu]\n", j, i);
			if (i < size)
				size = i + 1;
			i = j - 1;
			jump = 1;
			cond = cond + 1;
		}
		else if (array[i] == value)
			return (i);
		j = i;
		i = i + jump;
	}
	return (-1);
}
