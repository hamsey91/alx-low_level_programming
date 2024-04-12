#include "search_algos.h"

/**
  * interpolation_search - Function that searches for a value in a sorted array
  *     of integers using the Interpolation search algorithm.
  *
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *         The index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t idx, g, d;

	if (array == NULL)
		return (-1);

	for (g = 0, d = size - 1; d >= g;)
	{
		idx = g + (((double)(d - g) / (array[d] - array[g])) * (value - array[g]));
		if (idx < size)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			break;
		}

		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			d = idx - 1;
		else
			g = idx + 1;
	}

	return (-1);
}
