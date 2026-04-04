#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: the 2D array to free
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid actually exists before trying to free it */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Free each row (array of integers) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Free the pointer to the array of pointers (the grid itself) */
	free(grid);
}
