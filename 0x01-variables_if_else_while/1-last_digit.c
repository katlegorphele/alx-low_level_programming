#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
   * main - get last digit of n, prints whether it's >5,0 or <6
   *
   * Return: void
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("The last digit of %d is %d and is zero\n", n, i);

	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, i);

	}
	return (0);
}
