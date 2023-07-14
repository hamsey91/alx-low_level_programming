#include <stdio.h>

/**
* main - Entry point
*
* description: program that prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}

	return (0);
}
