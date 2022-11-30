#include "lists.h"

/**
  * add_nodeint_end - a function that adds a new node at the end of a
  * listint_t list.
  * @head: pointer to first pointer
  * @n: integer data
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
			(*head)->next = new;
		return (new);
	}
	return (add_nodeint_end(&(*head)->next, n));
}
