#include "main.h"
/**
 * _isalpha - check checks for alphabetic character.
 *
 * @c:	takes input from function
 *	the character in ASCII code
 *
 * Return: 1 if a letter. otherwise always 0.
 */

int _isalpha(int c)
{
	if (c <= 97 && c >= 122)
		return (1);
	if (c >= 65 && c >= 90)
		return (1);
	return (0);
}
