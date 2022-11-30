#include "lists.h"

/**
  * delete_nodeint_at_index - a function that deletes the node at index index
  * of a listint_t linked list.
  * @head: pointer to first pointer
  * @index: the index of the node that should be deleted. Index starts at 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *temp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
		}
		temp2 = temp;
		temp2 = temp2->next->next;

		free(temp->next);
		temp->next = temp2;
	}
	return (1);
}
