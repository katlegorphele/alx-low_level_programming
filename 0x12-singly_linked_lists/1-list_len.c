#include "lists.h"

/**
  * list_len - finds number of elements in list
  * @h: linked list
  * Return: number of elemetns in list
  */

size_t list_len(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		h - h->next;
		element++;
	}
	return (element);
}
