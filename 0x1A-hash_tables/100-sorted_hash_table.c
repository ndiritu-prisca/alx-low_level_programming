#include "hash_tables.h"

/**
 * shash_table_create - a function that ceates a sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: a pointer to the new sorted hash table, if an error occurs return,
 * NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - a function that adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add which cannot be an empty string.
 * @value: The value associated with key.
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *copy_value;
	unsigned long int idx;
	int n;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	n = compare_str(temp, key, copy_value);
	if (n == 1)
		return (1);

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(copy_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(copy_value);
		free(new);
		return (0);
	}
	new->value = copy_value;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	allocate(new, ht, key);

	return (1);
}

/**
  * compare_str - a function that iterates a node to find a match to the key.
  * if one is found it is updated with the current value in str.
  * @node: linked list to be searched
  * @key: the key to be used
  * @val: has the current calue
  * Return: 1 if a match is found, otherwise, 0
  */
int compare_str(shash_node_t *node, const char *key, char *val)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = val;
			return (1);
		}
		node = node->snext;
	}
	return (0);
}

/**
  * allocate - a function that allocates the node elements their respectve
  * values
  * @new: the new node;
  * @ht: the hash table
  * @key: the key
  * Return: nothing
  */
void allocate(shash_node_t *new, shash_table_t *ht, const char *key)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL &&
				strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
}

/**
 * shash_table_get - a function that retrieves the value associated with
 * a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 * Return: the value associated with the key if successful. Otherwise, return
 * NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp = ht->shead;
	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->snext;

	return ((temp == NULL) ? NULL : temp->value);
}

/**
 * shash_table_print - a function that prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;

	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp != NULL)
		printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function that prints a sorted hash table in
 * reverse order.
 * @ht: A pointer to the sorted hash table to print.
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp != NULL)
		printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - a function that deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
