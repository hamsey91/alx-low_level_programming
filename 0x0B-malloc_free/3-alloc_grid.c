#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2dimensional array of integers.
 * @width: input type int
 * @height: input type int
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tab[x] = malloc(sizeof(int) * width);

		if (tab[x] == NULL)
		{
			for (; x >= 0; x--)
				free(tab[x]);

			free(tab);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			tab[x][y] = 0;
	}

	return (tab);
}
