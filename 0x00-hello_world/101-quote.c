#include <unistd.h>

/**
 * main - Entry point
 *
 * description:C program that use the write function
 *
 * Return:to 1 (ERROR)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
