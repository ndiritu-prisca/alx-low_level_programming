#include "lists.h"
#include <unistd.h>

/**
  * get_nodeint_at_index - a function that returns the nth node of a listint_t
  * linked list.
  * @head: first pointer
  * @index: index of the node, starting at 0
  * Return: pointer to nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, j;
	listint_t *temp = head;

	for (j = 0; temp != NULL; j++)
		temp = temp->next;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (index >= j)
	{
		write(1, "(nil)\n", 6);
	}

	if (!head)
		return (NULL);
	return (head);
}
