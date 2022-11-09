#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a function that returns a pointer to a 2 dimensional array of
  * integers.
  * @width: the width of grid
  * @height: height of grid
  * Return: pointer to 2 dimensional array,
  * on failure, return NULL.
  */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
