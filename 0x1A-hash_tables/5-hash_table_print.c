#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			if (i < (ht->size - 1) || node != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
