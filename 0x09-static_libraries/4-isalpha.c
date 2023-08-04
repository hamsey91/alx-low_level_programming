#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c:takes input from functions
 *
 * Return: 1 if a letter. otherwise always 0.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
