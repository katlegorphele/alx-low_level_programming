#include <stdio.h>

/**
  * main - prints numbers 0 to 100 but replaces multiples
  * of 3 with Fizz, multiples of 5 with Buzz and mulitples
  * of 3 and 5 with FizzBuzz
  * Return: 0
  */

int main(void)
{
	int i;
	
	i = 1;
	printf("%d",i);

	for (i = 2; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf(" FizzBuzz");
		else if ((i % 3) == 0)
			printf(" Fizz");
		else if ((i % 5) == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	return (0);
}
