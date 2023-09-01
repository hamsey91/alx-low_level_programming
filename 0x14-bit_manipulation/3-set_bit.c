#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to the number to change
 * @index: the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
