#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: input type string
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	char tmp = s[0];
	int l = 0;
	int i;

	while (s[l] != '\0')
	l++;
	for (i = 0; i < l; i++)
	{
		l--;
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
