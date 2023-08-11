#include "main.h"

/**
 * *string_nconcat -  function that concatenates two strings
 *
 * @s1: input one type string
 * @s2: input two type string
 *
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the memory containing the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	s = malloc(s1_len + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}

