#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: value associated with the element, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL)
		return (NULL);
	while (strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
