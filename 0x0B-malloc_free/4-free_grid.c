#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees two dimensional grid
 * @height: integer
 * @grid: integer
 *
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
