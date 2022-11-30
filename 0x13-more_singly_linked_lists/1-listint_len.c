#include "lists.h"
#include <stdio.h>

/**
  * listint_len - a function that returns the number elements in a
  * listint_t list
  * @h: first pointer
  * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
