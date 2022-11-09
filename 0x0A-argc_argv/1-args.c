#include <stdio.h>
/**
  * main - prints number of arguments passed
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0 if successful
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
