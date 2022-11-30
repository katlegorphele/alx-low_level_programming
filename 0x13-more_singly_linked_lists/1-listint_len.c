#include "lists.h"

/**
  * listint_len - returns number of elements in list
  * @h: list head
  * Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
