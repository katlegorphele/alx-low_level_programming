#include <stdio.h>

/**
  * main - prints the sum of even
  * Fibonnaci numbers
  * Return: 0
  */

int main(void)
{
	long int f1, f2, sum, sum_2;

	f1 = 1;
	f2 = 2;
	sum = sum_2 = 0;
	while (sum <= 4000000)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if ((f1 % 2) == 0)
		{
			sum_2 += f1;
		}
	}
	printf("%ld\n", sum_2);
	return (0);
}
