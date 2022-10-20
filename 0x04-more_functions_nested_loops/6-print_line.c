#include "main.h"

/**
  * print_line - prints line on the terminal
  * @n: number of _ to be added to line
  * Return : always 0
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
