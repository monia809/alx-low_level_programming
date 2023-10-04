#include "main.h"
#include <stdlib.h>

/**
 * free_grid - f
 *
 * @grid: x
 *
 * @height: h
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
