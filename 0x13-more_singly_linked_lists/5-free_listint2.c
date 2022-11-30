#include "lists.h"

/**
  * free_listint2 -  a function that frees a listint_t list.
  * @head: first pointer
  * Return: void
  */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		if ((*head)->next != NULL)
			free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
