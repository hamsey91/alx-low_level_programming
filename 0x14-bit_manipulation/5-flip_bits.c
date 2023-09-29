#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 *		need to flip to get from one number to another.
 *
 * @n: First long int
 * @m: Second long int
 *
 * Return: The Number of Bits converted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int X_OR = n ^ m;

	while (X_OR)
	{
		if (X_OR & 1ul)
			count++;
		X_OR = X_OR >> 1;
	}

	return (count);
}

