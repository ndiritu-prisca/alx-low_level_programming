#include "lists.h"

/**
  * sum_dlistint - a function that returns the sum of all the data (n) of a
  * dlistint_t linked list.
  * @head: head pointer
  * Return: sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int i;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
