#include "lists.h"

/**
  * print_dlistint - a function that prints all the elements of a dlistint_t
  * list.
  * @h: address of head
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
