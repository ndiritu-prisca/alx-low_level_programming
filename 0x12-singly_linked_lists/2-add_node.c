#include "lists.h"
#include <string.h>

/**
  * add_node - a function that adds a new node at the beginning of a
  * list_t list.
  * @head: first pointer
  * @str: string to be copied
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addr;

	addr = malloc(sizeof(list_t));
	if (addr == NULL)
		return (NULL);
	addr->str = strdup(str);
	addr->len = strlen(str);
	addr->next = *head;
	*head = addr;

	return (*head);
}
