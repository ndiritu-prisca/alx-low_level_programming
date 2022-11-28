#include "lists.h"
#include <string.h>

/**
  * add_node_end -  a function that adds a new node at the end of a list_t list
  * @head: first pointer
  * @str: string to be copied
  * Return:the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}

		else
		{
			(*head)->next = new;
		}
		return (new);
	}
	return (add_node_end(&(*head)->next, str));
}
