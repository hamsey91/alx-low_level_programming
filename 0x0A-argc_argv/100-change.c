#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins
 *	to make change for an amount of money.
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 if Successed
 */
int main(int argc, char *argv[])
{
	int n, i, money;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	money = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= cents[i])
		{
			money++;
			n -= cents[i];
		}
	}

	printf("%d\n", money);
	return (0);
}

