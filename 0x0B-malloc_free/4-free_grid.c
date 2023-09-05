#include "main.h"

/**
 * free_grid - free up memory of a 2 dimensional grid
 *
 * @grid: input grid
 * @height: input height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
