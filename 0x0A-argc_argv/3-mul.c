#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two integers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if succesful, 1 and Error if not successful
  */

int main(int argc, char *argv[])
{
	int result, i1, i2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	result = i1 * i2;
	printf("%d\n", result);

	return (0);
}
