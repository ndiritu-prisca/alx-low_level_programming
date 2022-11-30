#include "lists.h"
#include <stdio.h>

/**
  * print_listint - a function that prints all the elements of a listint_t list
  * @h: first pointer
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
