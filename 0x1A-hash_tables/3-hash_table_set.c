#include "hash_tables.h"

/**
 * hash_table_set - set value in the hash table
 * @ht: concerned hash table
 * @key: key used to retrieve the value
 * @value: value to add into the hash table
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int size;
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned const char *)key, size);

	/*collision mgnt*/
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	/* New node initialization*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
