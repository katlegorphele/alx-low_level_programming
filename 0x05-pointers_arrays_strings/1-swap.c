#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a - inout var 1
  * @b - input var 2
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
