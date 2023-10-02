#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in a hash table.
 * @key: The key to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Calculate the hash value using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Compute the index within the array size */
	return (hash_value % size);
}
