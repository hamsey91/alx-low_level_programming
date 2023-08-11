#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to put the constant
 * @b: constant input type char
 * @n: number of max bytes to be used
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * sizeof(int));

	return (m);
}

