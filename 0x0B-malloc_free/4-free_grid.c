#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocate for the grid
 * creatyed by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == 0 || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
