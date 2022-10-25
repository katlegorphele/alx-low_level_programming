#include "main.h"

/**
  * puts_half - prints half os a string followed by a new
  * line. If string length is odd, print last n character givem
  * n = (length_of_the_string - 1) / 2
  * @str: inout str
  * Return: void
  */

void puts_half(char *str)
{
	int counter = 0, i;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
			break;
		counter++;
	}

	if (counter % 2 == 1)
		i = counter / 2;
	else
		i = (counter - 1) / 2;

	for (i++, i < counter; i++)
		_putchar(str[i]);
	_putchar('\n');
}
