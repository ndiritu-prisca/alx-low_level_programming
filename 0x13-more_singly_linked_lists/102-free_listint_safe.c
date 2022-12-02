#include "lists.h"

/**
  * free_listint_safe - a function that frees a listint_t list.
  * @h: first pointer
  * Return: the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *killnode;
	listint_t *ptr;
	add_t *temp;
	add_t *temp2;

	ptr = *h;
	temp = NULL;
	if (h != NULL)
	{
		while (ptr != NULL)
		{
			temp2 = temp;
			while (temp2 != NULL)
			{
				if (ptr == temp2->address)
				{
					free(ptr);
					free_add(temp);
					*h = NULL;
					return (count);
				}
				temp2 = temp2->next;
			}
			killnode = ptr;
			if (add_node(&temp, ptr) == NULL)
			{
				free_add(temp);
				exit(98);
			}
			ptr = ptr->next;
			free(killnode);
			count++;
		}
		free_add(temp);
		*h = NULL;
	}
	return (count);
}
