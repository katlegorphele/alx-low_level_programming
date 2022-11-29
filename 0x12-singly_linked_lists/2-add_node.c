#include "lists.h"

/**
  * add_node - adds new node at beginning of list
  * @head: head of linked list
  * @str: string to store in list
  * Return: address of head
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t elements;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;

	new->len = elements;
	new->next = *head;
	*head = new;

	return (*head);
}
