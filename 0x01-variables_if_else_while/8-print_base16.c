#include<stdio.h>

/**
* main - Entry point
*
* description: print numbers of base16 in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48; /*ASCII representation 48 = 0 ;102 = f*/

	while (digit <= 102)
	{
		putchar(digit);

		/* after 9 = 57 we skip to a = 96`*/
		if (digit == 57)
			digit += 39;
		digit += 1;
	}
	putchar('\n');

	return (0);
}
