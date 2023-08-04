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

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
