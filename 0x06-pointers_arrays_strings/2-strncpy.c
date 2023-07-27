#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to input
 * @src: pointer to input
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	for (b < n; dest[b] = '\0';  b++;)
	{
		;
	}

	return (dest);
}
