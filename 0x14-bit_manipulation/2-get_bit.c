#include "main.h"

/**
 * get_bit - Function that returns the value of a Bit at a given Index.
 *
 * @n: Number to Index
 * @index: The bit you want to get
 *
 * Return: The value of the bit at index index
 *	or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

