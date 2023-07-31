#include "main.h"
/**
 *_memcpy - function that copies memory area.
 *
 *@dest: stored memory area
 *@src: copied memory area
 *@n: number of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

