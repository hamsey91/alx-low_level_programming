#include "main.h"

int check_prime(int n, int a);

/**
 * is_prime_number - check if n is a prime number
 *
 * @n: input type int
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - check all number
 * @n: number to check
 * @a: int
 *
 * Return: 1 or 0
 */
int check_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (check_prime(n, a - 1));
}


