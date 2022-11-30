#include "lists.h"

/**
  * print_listint - prints all elements of a list
  * @h: list head
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
