#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			node = node->next;
			free(tmp);
		}
		free(node);
	}
	free(ht);
}
