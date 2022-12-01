#include "lists.h"
#include <stdio.h>

/**
  * add_node - a function that adds a node to a list
  * @head: pointer to first pointer
  * @address: address of another list's node
  * Return: address of new node, 98 if it fails
  */
add_t *add_node(add_t **head, const listint_t *address)
{
	add_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free_add(*head);
		exit(98);
	}
	new->address = (void *)address;
	new->next = *head;
	*head = new;
	return (new);
}

/**
  * free_add - a function that frees a list
  * @head: first pointer
  * Return: nothing
  */
void free_add(add_t *head)
{
	add_t *killnode;

	while (head != NULL)
	{
		killnode = head;
		head = head->next;
		free(killnode);
	}
}

/**
  * print_listint_safe - a function that prints a listint_t linked list.
  * @head: first pointer
  * Return: number of nodes in list, 98 if function fails.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	add_t *temp;
	add_t *temp2;

	temp = NULL;
	while (head != NULL)
	{
		temp2 = temp;
		while (temp2 != NULL)
		{
			if (head == temp2->address)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_add(temp);
				return (count);
			}
			temp2 = temp2->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		add_node(&temp, head);
		head = head->next;
		count++;
	}
	free_add(temp);
	return (count);
}
