#include "lists.h"

/**
  * free_listint -  a function that frees a listint_t list.
  * @head: first pointer
  * Return: void
  */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
