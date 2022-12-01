#include "lists.h"
#include <stdio.h>

/**
  * find_loop - a function that finds a loop in a linked list
  * @head: first pointer
  * Return: address of where loop starts, NULL if on.
  */
listint_t *find_loop(listint_t *head)
{
	listint_t *temp, *temp2;

	if (head == NULL)
		return (NULL);
	for (temp2 = head->next; temp2 != NULL; temp2 = temp2->next)
	{
		if (temp2 == temp2->next)
			return (temp2);
		for (temp = head; temp != temp2; temp = temp->next)
			if (temp == temp2->next)
				return (temp2->next);
	}
	return (NULL);
}

/**
  * print_listint_safe - a function that prints a listint_t linked list.
  * @head: first pointer
  * Return: number of nodes in list, 98 if function fails.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	int n;
	listint_t *node;

	node = find_loop((listint_t *)head);

	for (count = 0, n = 1; (head != node || n) && head != NULL; count++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head == node)
			n = 0;
		head = head->next;
	}
	if (node != NULL)
		printf("[%p] %d\n", (void *)head, head->n);
	return (count);
}
