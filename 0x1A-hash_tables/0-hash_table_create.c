#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the array
 *
 * Return: returns an instance of hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(size * sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		free(hash_table);
		return(NULL);
	}
	return(hash_table);
}
