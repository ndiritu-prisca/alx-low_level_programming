#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a new node at a given
  * position.
  * @head: pointer to first pointer
  * @idx: index of the list where the new node should be added. Index starts at
  * 0
  * @n: int data
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, j;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if ((*head == NULL) && (idx == 0))
	{
		new-> n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;

	for (j = 0; j < (idx - 1); j++)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;

	return(new);
}
