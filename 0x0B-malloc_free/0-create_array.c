#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size size and assign char c
 *
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(size);

	if (size == 0 || str == NULL)
		return (NULL);

	while (size--)
		str[size] = c;

	return (str);
}
