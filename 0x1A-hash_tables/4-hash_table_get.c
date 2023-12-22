#include "hash_tables.h"

/**
 * hash_table_get - get value from a hash table
 * @ht: pointer to the hash table
 * @key: key of the element
 *
 * Return: string corresponding to the value of key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
