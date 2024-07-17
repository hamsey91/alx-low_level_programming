#include "search_algos.h"

/**
  * recursive_binary_search - Function that searches for a value in a sorted array
  *		of integers using a recursive banary search
  * @array: Pointer to the first element of the sub-array.
  * @gauche: The first index of the sub-array.
  * @droite: The last index of the sub-array.
  * @value: The value to search for it.
  *
  * Return: 1 If the value is not present or the array is NULL
  *			The index where the value is located.
  */
int recursive_binary_search(int *array, size_t gauche, size_t droite, int value)
{
	size_t idx;

	if (droite < gauche)
		return (-1);

	for (idx = gauche; idx < droite; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);

	idx = gauche + (droite - gauche) / 2;
	if (array[idx] == value && (idx == gauche || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (recursive_binary_search(array, gauche, idx, value));
	return (recursive_binary_search(array, idx + 1, droite, value));
}

/**
  * advanced_binary - Function that searches for a value in a sorted array
  *             of integers using the Advanced binary search algorithm.
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *         The index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
