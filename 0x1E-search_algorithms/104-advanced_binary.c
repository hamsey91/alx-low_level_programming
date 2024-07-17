#include "search_algos.h"

/**
  * rec_binary - Function that searches for a value in a sorted array
  *		of integers using a recursive banary search
  * @array: Pointer to the first element of the sub-array.
  * @gauche: The first index of the subarray.
  * @droite: The last index of the subarray.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *			The index where the value is located.
  *
  * Description: Prints the subarray being searched after each change.
  */
int rec_binary(int *array, size_t gauche, size_t droite, int value)
{
	size_t i;

	if (droite < gauche)
		return (-1);

	printf("Searching in array: ");
	for (i = gauche; i < droite; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = gauche + (droite - gauche) / 2;
	if (array[i] == value && (i == gauche || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (rec_binary(array, gauche, i, value));
	return (rec_binary(array, i + 1, droite, value));
}

/**
  * advanced_binary - Function that searches for a value in a sorted array
  *             of integers using the Advanced binary search algorithm.
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the subarray being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (rec_binary(array, 0, size - 1, value));
}

