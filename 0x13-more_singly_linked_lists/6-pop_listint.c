#include "lists.h"

/**
  * pop_listint - a function that deletes the head node of a listint_t linked
  * list, and returns the head node’s data (n).
  * @head: pointer to the first pointer
  * Return: head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if ((*head) == NULL)
		return (0);
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (x);
}
