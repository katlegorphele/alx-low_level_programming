#include <stdio.h>
/**
  * main: Entry Point
  *
  * Description: program that prints all the numbers of base 16 in lowercase, followed by a new line
  *
  * Return: 0
  */
int main(void)
{
	for (int i = 0; i<10; i++)
		putchar(i+'0');
	for (int i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
