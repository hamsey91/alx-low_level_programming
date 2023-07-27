#include "main.h"
/**
 * string_toupper - changes all lowercase letters of
 *		a string to uppercase.
 *
 * @n: input type string
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int s;

	s = 0;
	while (n[s] != '\0')
	{
		if (n[s] >= 97 && n[s] <= 122)
			n[s] = n[s] - 32;
		s++;
	}
	return (n);
}
