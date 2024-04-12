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

		i = gauche + (droite - gauche) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			droite = idx - 1;
		else
			gauche = idx + 1;
	}

	return (-1);
}
