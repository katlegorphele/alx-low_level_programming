#include <stdio.h>
/**
   * main - print alphabet in lowercase and uppercase
   *
   * Return: void
*/
int main(void)
{
	char low_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char up_alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(low_alpha[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(up_alpha[j]);
	}
	putchar('\n');
	return (0);
}
