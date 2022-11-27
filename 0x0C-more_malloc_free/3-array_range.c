#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates array of integers
  * @min: smallest int
  * @max: largest int
  *
  * Return: pointer to array. If min > max || malloc fails
  * return NULL
  */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	retuen (ar);
}
