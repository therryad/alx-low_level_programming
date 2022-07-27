#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: address to first in grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
