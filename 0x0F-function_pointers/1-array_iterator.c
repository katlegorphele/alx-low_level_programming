#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - exececutes function given as parameter
  * on each element of array
  * @array: inout integer array
  * @size: size of the array
  @action: pointer to function
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
