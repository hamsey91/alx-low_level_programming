#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: input 1 tyoe integer
 * @b: input 2 type integer
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
