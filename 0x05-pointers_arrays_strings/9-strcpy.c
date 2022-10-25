#include <stdio.h>
#include "main.h"

/**
  * _strcpy - copies string pointed to by src,
  * including terminanting null byte
  * to the buffer pointed to by dest
  * @dest: destinantion pointer
  * @src: source pointer
  * Return: pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == '\0')
			break;
		counter++;
	}
	return (dest);
}
