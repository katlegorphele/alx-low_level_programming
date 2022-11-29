#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of the list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t elements;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;

	new->len = elements;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
