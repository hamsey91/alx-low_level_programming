#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dim grid
 *
 * @grid: grid of memories
 * @height: input type int
 *
 *Return: void
 */

void free_grid(int **grid, int height)		
{
	int i;

	for (i = 0; i < height; i++)	
	{
		free(grid[i]);
	}

	free(grid);
}
