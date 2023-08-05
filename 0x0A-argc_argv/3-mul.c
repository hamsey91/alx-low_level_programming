#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the result of the multiplication
 *
 *@argc: number of argument
 *@argv: pointer to array
 *
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
