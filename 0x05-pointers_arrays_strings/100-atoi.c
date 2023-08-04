#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: input type string
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	unsigned int unit = 0;
	int i = 1;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			unit = (unit * 10) + (*s - '0');
		else if (unit > 0)
			break;
	} while (*s++);

	return (unit * i);
}
