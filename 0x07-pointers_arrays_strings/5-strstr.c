#include "main.h"

/**
 * _strstr - finds 1st occurrence of substring.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *khaystack, *kneedle;

	while (*haystack != '\0')
	{
		khaystack = haystack;
		kneedle = needle;

		while (*haystack != '\0' && *kneedle != '\0' && *haystack == *kneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (khaystack);
		haystack = khaystack + 1;
	}
	return (0);
}
