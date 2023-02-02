#include"hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->array);
	free(ht);
}
