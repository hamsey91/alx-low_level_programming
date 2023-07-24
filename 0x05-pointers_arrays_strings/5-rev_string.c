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
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		counter--;
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
