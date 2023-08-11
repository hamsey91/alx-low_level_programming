#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: min range of values stored
 * @max: max range of values stored
 *
 * Return: pointer array
 */
int *array_range(int min, int max)
{
	int *m;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	m = malloc(sizeof(int) * len);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		m[i] = min++;

	return (m);
}
