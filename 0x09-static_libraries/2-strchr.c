#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 *
 * @s: pointer to string
 * @c: constant
 *
 * Return: pointer to s or 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (0);
}


