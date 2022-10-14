#include <stdio.h>
/**
   * main - print alphabet in lowercase minus q and e
   *
   * Return: void
*/
int main(void)
{
	char low_alpha[24] = "abcdfghijklmnoprstuvwxyz"
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(low_alpha[i]);
	}
	putchar('\n');
	return (0);
}
