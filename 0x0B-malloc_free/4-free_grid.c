#include "main.h"
#include <stdlib.h>

/**
  * free_grid - a function that frees a 2 dimensional grid previously created
  * by your alloc_grid function.
  * @grid: pointer to 2 dimensional grid
  * @height: height of grid
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
