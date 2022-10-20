#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @i: input number
  * Return: the last digit
  */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
	{
		_putchar(-l + 48);
		return (-k);
	}
	else
	{
		_putchar(l + 48);
		return (k);
	}
}
