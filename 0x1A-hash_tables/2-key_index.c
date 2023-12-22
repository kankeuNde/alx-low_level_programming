#include "hash_tables.h"

/**
 * key_index - return the index of a given key
 * @key: Given key
 * @size: size of the array
 *
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
