#include "main.h"

/**
  *_isalpha - checks whether c is a letter
  * upper or lowercase
  *
  *@c: Character variable
  *
  *Return: 1 for letter, 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
