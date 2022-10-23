#include <stdio.h>

/**
  * main - Prints combination of two digit numbers
  *
  * Return: always 0
  */

int main(void)
{
	int i, k;
	i = 48;
	k = 48;

	while (k < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (k != i && k < i)
			{
				putchar(k);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
