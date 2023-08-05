#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print the result, followed by a new line
 *
 *@argc: number of argument
 *@argv: pointer to array
 *
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
		printf("%d\n", result);
		return (0);
}
