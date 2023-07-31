#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: the address of memory
 * @b: constant byte
 * @n: bytes of the memory area pointed
 *
 * Return: pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

