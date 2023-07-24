#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *		if n odd print n = (length_of_the_string - 1) / 2
 *
 * @str: input of  type character
 *
 * Return: second half of the string
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}


