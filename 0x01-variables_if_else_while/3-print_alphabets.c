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
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(low_alpha[i], up_alpha[i]);
	}
	putchar('\n');
	return (0);
}
