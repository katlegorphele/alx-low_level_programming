#include "main.h"
/**
  * _strcpm - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 0 if s1 and s2 are equal
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, k = 0;

	while (k == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		k = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (k);
}
