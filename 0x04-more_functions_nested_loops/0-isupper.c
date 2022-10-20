#include "main.h"

/**
  * _isupper - checks if c is uppercase
  * @c: iput variable
  * Return: 1 if c is uppercase, 0 if c is lowercase
  */

int _isupper(int c) 
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
