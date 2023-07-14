#include<stdio.h>

/**
* main - Entry point
*
* description: print single digit numbers base 10
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit += 1;
	}
	printf("\n");

	return (0);
}
