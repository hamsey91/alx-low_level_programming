#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i, printed = 0;
	unsigned long int c_bit;

	for (i = 63; i >= 0; i--)
	{
		c_bit = n >> i;

		if (c_bit & 1)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

