#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns the nth node of a listint_t
  * linked list.
  * @head: first pointer
  * @index: index of the node, starting at 0
  * Return: pointer to nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (!head)
		return (NULL);
	return (head);
}
