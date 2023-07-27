#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 *
 * @n: input type string
 *
 * Return: n
 */
char *leet(char *n)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == str1[b])
			{
				n[a] = str2[b];
			}
		}
	}
	return (n);
}
