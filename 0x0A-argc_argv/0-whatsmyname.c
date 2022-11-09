#include <stdio.h>
/**
  * main - prints its name, followed by a new line.
  * @argc: arguments counter
  * @argv: arguments vector
  * Return: 0 if succesful
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
