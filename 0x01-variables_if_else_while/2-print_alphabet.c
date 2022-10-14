#include <stdio.h>
/**
   * main - print alphabet in lowercase
   *
   * Return: void
*/
int main(void)
{
	char low_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0, i < 26, i++)
	{
		putchar(low_alpha[i]);
	}
	putchar("\n");
	return (0);
}
