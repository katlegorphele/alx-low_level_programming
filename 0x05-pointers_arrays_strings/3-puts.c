#include "main.h"

/**
  * _puts - Prints a string fiollowed by a new line
  * @str: input string
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
