#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array
 * @size: The size of the array.
 * @value: The value to search for it.
 *
 * Return: -1 If value not present in array or array NULL
 *	The first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
