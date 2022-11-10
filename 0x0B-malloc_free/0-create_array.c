#include "main.h"

/**
  * create_array - creates array of characters
  * @size: array size
  * @c: character
  * Return: pointer of array of characters
  */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
