#include<stdio.h>

/**
* main - Entry point
*
* Description: print single digit number using putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*use ASCII representation to start with 0 = 48 in ascii*/
		putchar(digit + 48);
		digit += 1;
	}
	putchar('\n');

	return (0);
}
