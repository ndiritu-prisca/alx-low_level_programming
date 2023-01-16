#include "lists.h"

unsigned int len_dlistint(const dlistint_t *h);

/**
  * len_dlistint - a function that gets the length of a list
  * @h: head pointer
  * Return: length of list
  */
unsigned int len_dlistint(const dlistint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}

/**
  * insert_dnodeint_at_index - a function that inserts a new node at a given
  * position.
  * @h: pointer to head pointer
  * @idx: index of the list where the new node should be added. Index starts at
  * 0
  * @n: node's data
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(new);
			return (NULL);
		}
		return (add_dnodeint(h, n));
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	len = len_dlistint(temp);
	if (idx > len)
		return (NULL);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	while ((idx - 1) > 0)
	{
		temp = temp->next;
		idx--;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
