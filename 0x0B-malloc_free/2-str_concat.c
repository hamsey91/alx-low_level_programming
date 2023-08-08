#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: input one type string
 * @s2: input two type string
 *
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		ci++;

	m = malloc(sizeof(char) * (i + j + 1));

	if (m == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		m[i] = s2[j];
		i++, j++;
	}
	m[i] = '\0';
	return (m);
}
