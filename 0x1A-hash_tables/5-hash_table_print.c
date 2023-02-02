#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int x = 0;
	unsigned long int idx;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			x = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
