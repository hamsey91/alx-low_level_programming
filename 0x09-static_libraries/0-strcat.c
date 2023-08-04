#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: pointer to input a
 * @src: pointer to input b
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
