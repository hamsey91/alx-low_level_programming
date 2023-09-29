#include "main.h"

/**
 * clear_bit - Function that sets the value of a Bit to 0 at a given Index.
 *
 * @n: Pointer to the chenged number
 * @index: The Bit to set
 *
 * Return: 1 if it worked
 *	or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}


