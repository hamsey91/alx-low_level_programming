#include "variadic_functions.h"

/**
 * print_numbers - function taht prints numbers, followed by a new line.
 *
 * @separator: The string separotor
 * @n: The number of integers passed to the function.
 * @...: integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

