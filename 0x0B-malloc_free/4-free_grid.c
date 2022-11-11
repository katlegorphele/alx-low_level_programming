#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2d array from alloc_grid func
  * @grid: 2d array of type int
  * @height: height of grid
  * Return: void
  */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height --)
			free(grid[height]);
		free(grid);
	}
}

