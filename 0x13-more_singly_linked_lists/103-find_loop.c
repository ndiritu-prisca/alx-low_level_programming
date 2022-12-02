#include "lists.h"

/**
  * find_listint_loop - a function that finds the loop in a linked list.
  * @head: first pointer
  * Return: address of the node where the loop starts, or NULL if there is no
  * loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp < head)
			return (head);
	}
	return (NULL);
}
