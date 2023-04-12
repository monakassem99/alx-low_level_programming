#include "main.h"

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
