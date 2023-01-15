#include "lists.h"

/**
  * add_dnodeint -  function that adds a new node at the beginning of a
  * dlistint_t list.
  * @head: pointer to head pointer
  * @n: value to be stored in new node
  * Return: pointer to new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = temp;

	if (temp != NULL)
	{
		temp->prev = new;
	}
	*head = new;
	return (new);
}
