#include "lists.h"

/**
  * revers_listint - a function that reverses a listint_t linked list.
  * @head: pointer to first pointer
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp = *head;
	if (*head == NULL)
		return (NULL);
	temp2 = temp->next;
	temp->next = NULL;

	if (temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
