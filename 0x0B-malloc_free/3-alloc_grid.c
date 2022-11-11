#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns pointer to 2d arary of int
  * @width: width of array
  * @eight: height of array
  * Return: pointer of array of int
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **gOut;

	if (width < 1 || height < 1)
		return (NULL);

	gOut = malloc(height * sizeof(int *));
	if (gOut == NULL)
	{
		free(gOut);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gOut[i] = malloc(width * sizeof(int));
		if (gOut[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gOut[i]);
			free(gOut);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gOut[i][j] = 0;

	return (gOut);
}

