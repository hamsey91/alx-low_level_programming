#include <stdio.h>

/**
 * main - prints the program name, followed by a new line.
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv[0]);

	return (0);
}


