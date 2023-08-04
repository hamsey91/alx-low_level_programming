#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name, followed by a new line.
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}


