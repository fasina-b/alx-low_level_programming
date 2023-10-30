#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
