#include "main.h"

/**
  * _strpbrk - searches string for any set of bytes
  * @s: 1st string
  * @accept: 2nd string
  * Return: pointer to byte in s that matches one of
  * the bytes in accept or NULL if byte not found
  */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + 1) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + 1);
		}
	}
	return ('\0');

}
