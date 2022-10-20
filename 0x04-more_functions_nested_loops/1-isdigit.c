#include "main.h"

/**
  * _isdigit - checks whether value is a number ( 0 - 9)
  * @c: input variable
  * Return: 1 if c is a digit, 0 if it's not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
