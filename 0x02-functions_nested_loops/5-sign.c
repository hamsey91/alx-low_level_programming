#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: takes integer type input for function
 *
 * Return: 1 and prints + if n is > than zero
 *	 0 and prints 0 if n is zero
 *	-1 and prints - if n is < than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
