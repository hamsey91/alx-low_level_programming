#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 *
 * @s: input type string
 * @accept: number of bytes
 *
 * Return: pointer to the byte in s or 0
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}



