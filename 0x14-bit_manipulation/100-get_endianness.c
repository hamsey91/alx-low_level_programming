#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: 0 for big endian
 *	1 for little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

