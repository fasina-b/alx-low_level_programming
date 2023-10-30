#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers and initializes to 0
 * @width: The width of the 2D grid.
 * @height: The height of the 2D grid.
 *
 * Return: A pointer to the 2D grid or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
