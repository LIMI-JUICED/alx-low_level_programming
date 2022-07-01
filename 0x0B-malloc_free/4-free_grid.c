#include "main.h"
#include <stdio.h>

/**
 * free_grid - free a 2d grid
 * @grid: grid freed
 * @height: height of the matrix
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
