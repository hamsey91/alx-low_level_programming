#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.

 * @separator: The string separator
 * @n: The number of strings passed to the function.
 * @...: integers to print
 *
 * Description: If separator is NULL, do not printed.
 *              If one of the strings is NULL, print (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}

