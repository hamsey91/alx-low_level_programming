#include "search_algos.h"

/**
  * jump_search - Function that searches for a value in a sorted array
  *	of integers using the  Jump search algorithm.
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
	size_t idx, move, jump, prv;

	if (array == NULL || size == 0)
		return (-1);

	move = (int)sqrt((double)size);
	jump = 0;
	prv = idx = 0;

	do {
		printf("Value checjumped array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		jump++;
		prv = idx;
		idx = jump * move;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prv, idx);

	for (; prv <= idx && prv < (int)size; prv++)
	{
		printf("Value checjumped array[%d] = [%d]\n", prv, array[prv]);
		if (array[prv] == value)
			return (prv);
	}

	return (-1);

