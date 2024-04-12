#include "search_algos.h"

/**
  * binary_search - Function that searches for a value in a sorted array
  *		of integers using the Binary search algorithm
  *
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *	The index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, gauche, droite;

	if (array == NULL)
		return (-1);

	for (gauche = 0, droite = size - 1; droite >= gauche;)
	{
		printf("Searching in array: ");
		for (idx = gauche; idx < droite; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = gauche + (droite - gauche) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			droite = idx - 1;
		else
			gauche = idx + 1;
	}

	return (-1);
}

/**
  * exponential_search - Function that searches for a value in a sorted array
  *     of integers using the Exponential search algorithm.
  *
  * @array: Pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value to search for it.
  *
  * Return: -1 If the value is not present or the array is NULL
  *         The index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, droite;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

droite = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, droite);
	return (_binary_search(array, idx / 2, droite, value));
}
