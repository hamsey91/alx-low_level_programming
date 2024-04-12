#include "search_algos.h"
#include <math.h>

/**
  * jump_search - Function that searches for a value in a sorted array
  *		of integers using the Jump search algorithm.
  *
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *         The index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, leap, move;

	if (array == NULL || size == 0)
		return (-1);

	move = sqrt(size);
	for (idx = leap = 0; leap < size && array[leap] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", leap, array[leap]);
		idx = leap;
		leap += move;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, leap);

	leap = leap < size - 1 ? leap : size - 1;
	for (; idx < leap && array[idx] < value; idx++)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	return (array[idx] == value ? (int)idx : -1);
}
