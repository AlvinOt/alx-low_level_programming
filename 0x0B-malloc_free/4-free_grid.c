#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array integer
 * @grid: the 2d array to be freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
