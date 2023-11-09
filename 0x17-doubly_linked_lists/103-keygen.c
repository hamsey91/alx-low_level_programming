#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Keygen for crackme5.
 *
 * @ac: Argument count.
 * @av: Pointer to agrument vector.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	char *codex, password[7];
	int length = strlen(av[1]), temp, idx;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (length ^ 59) & 63;
	password[0] = codex[temp];

	temp = 0;
	for (idx = 0; idx < length; idx++)
		temp += av[1][idx];
	password[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (idx = 0; idx < length; idx++)
		temp *= av[1][idx];
	password[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (idx = 0; idx < length; idx++)
	{
		if (av[1][idx] > temp)
			temp = av[1][idx];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];

	temp = 0;
	for (idx = 0; idx < length; idx++)
		temp += (av[1][idx] * av[1][idx]);
	password[4] = codex[(temp ^ 239) & 63];

	for (idx = 0; idx < av[1][0]; idx++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);

	return (0);
}
