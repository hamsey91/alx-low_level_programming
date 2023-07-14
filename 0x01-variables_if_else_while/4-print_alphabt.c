#include <stdio.h>

/**
* main - Entry point
*
* description: Print all the letters except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c += 1;
		putchar(c);
		c += 1;
	}
	putchar('\n');

	return (0);
}
