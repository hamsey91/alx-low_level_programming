#include "main.h"
/**
 * _strcmp - function that compare string values
 *
 * @s1: input type string
 * @s2: input type string
 *
 * Return:1 if true , 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int e;

	e = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
