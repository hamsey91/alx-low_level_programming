#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, count = 0;

	while (i)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
