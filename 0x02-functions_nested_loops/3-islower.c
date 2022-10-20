#include "main.h"
/**
  *_islower - checks if c is a lowercase letter
  *@c: Holds character variable
  *
  * Return: 1 for lowercase, 0 otherwise
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'b')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
