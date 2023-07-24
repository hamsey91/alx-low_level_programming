#include "main.h"
/**
 * puts2 - prints every other character of a string,
 *	starting with the first character
 *
 * @str: input type charcter
 *
 * Return: print str
 */
void puts2(char *str)
{
	int counter = 0;
	int t = 0;
	char *l = str;
	int a;

	while (*l != '\0')
	{
		l++;
		counter++;
	}
	t = counter - 1;
	for (a = 0 ; a <= t ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
