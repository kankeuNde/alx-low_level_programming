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

	size = ht->size;
	index = key_index((unsigned const char *)key, size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index]->next;
	}
	ht->array[index] = node;
	return (1);
}
