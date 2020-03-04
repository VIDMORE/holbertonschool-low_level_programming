#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	for (i = heigh - 1; height > 0; height--)
		free(grid[i]);
	free(grid);
}
