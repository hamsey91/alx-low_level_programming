#include<stdio.h>

/**
* main - Entry point
*
* description: countdown
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');

	return (0);
}
