#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 *
 * @b: string of the binary number.
 *
 * Return: converted number
 *		or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_number = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		conv_number = 2 * conv_number + (*b++ - '0');
	}
	return (conv_number);
}

