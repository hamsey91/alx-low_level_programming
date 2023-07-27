#include "main.h"
/**
 * _strncat - Function that concatenate two strings
 *
 * @dest: pointer to input
 * @src: pointer to input
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
	}
	dest[c + i] = '\0';
	return (dest);
}
