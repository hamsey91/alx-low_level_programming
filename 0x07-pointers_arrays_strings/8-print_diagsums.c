#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *		of a square matrix of integers.
 *
 * @a: input type array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, x;

	s1 = 0;
	s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		s2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}

