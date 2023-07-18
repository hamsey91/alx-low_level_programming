#include "main.h"
/**
 * _islower  - Checks for lowercase character.
 *
 *@c:	checks input of function
 *	character in ASCII code
 *
 * Return: 1 if lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
