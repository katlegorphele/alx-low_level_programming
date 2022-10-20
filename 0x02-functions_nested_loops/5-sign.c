#include "main.h"

/**
  * print_sign - Checks and prints sign of a number
  *@n - variable to hold the number
  * Return: 1 if n > 0, -1 if n < 0 or 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
