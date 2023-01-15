#include "lists.h"

/**
  * free_dlistint - a function that frees a dlistint_t list.
  * @head: pointe to head
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
