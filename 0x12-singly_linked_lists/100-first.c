#include "lists.h"

void constract(void) __attribute__ ((constructor));

/**
 * constarct - prints a sentence before the main function
 *		is executed
 *
 * Return: void
 */
void constarct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

