#include "main.h"

/**
  *print_triangle - program that prints a triangle then a new line
  * @size: determines size of triangel
  * Return: viod
  */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size -1))
			_putchar('\n');
	}
	_putchar('\n');
}
