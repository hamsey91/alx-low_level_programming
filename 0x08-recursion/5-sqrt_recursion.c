#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root
 * @i: iterator
 *
 * Return: the resulting square root
 */
int ntrl_square(int n, int i);
int _sqrt_recursion(int n)
{
	return (ntrl_square(n, 1));
}

/**
 * ntrl_square - recurses to find the natural square
 *
 * @n: sqaure root
 * @i: iterator
 *
 * Return: int
 */
int ntrl_square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (ntrl_square(n, i + 1));
	else
		return (-1);
}

