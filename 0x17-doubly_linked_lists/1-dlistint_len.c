#include "lists.h"

/**
  * dlistint_len - a function that returns the number of elements in a linked
  * dlistint_t list.
  * @h: address of head
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem;

	for (elem = 0; h != NULL; elem++)
	{
		h = h->next;
	}
	return (elem);
}
