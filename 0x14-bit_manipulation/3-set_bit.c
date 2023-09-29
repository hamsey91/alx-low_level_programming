#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given Index.
 *
 * @n: Pointer to the changed number
 * @index: The bit you want to set
 *
 * Return: 1 if it Worked
 *	or -1 if an Error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}

