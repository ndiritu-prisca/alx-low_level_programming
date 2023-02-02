#include "lists.h"

/**
  * get_dnodeint_at_index - a function that returns the nth node of a
  * dlistint_t linked list.
  * @head: pointer to head
  * @index: index of node starting from 0
  * Return: address of nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 1; j <= index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
