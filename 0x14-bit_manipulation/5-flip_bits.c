#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 *		need to flip to get from one number to another.
 *
 * @n: first long int
 * @m: second long int
 *
 * Return: number of bits to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int XOR = n ^ m;

	while (XOR)
	{
		if (XOR & 1ul)
			count++;
		XOR = XOR >> 1;
	}

	return (count);
}

