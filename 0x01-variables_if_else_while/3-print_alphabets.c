#include <stdio.h>

/**
* main - Entry point
*
* description:  program that prints the alphabet in lowercase then in uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	/*print a to z*/
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/*print A to Z*/
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
