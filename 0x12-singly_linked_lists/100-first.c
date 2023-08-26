#include <stdio.h>

void first_constr(void) __attribute__ ((constructor));

/**
 * first_constr - prints a sentence before the main function
 *		is executed
 *
 * Return: void
 */
void first_constr(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
