#include "main.h"

/**
 * free_grid - fres grids
 * @grid: pointer
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
