#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key to find the index for
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Use the hash_djb2 function to generate the hash value for the key */
	unsigned long int hash_value = hash_djb2(key);

	/* Calculate index within the array based on the hash value and size */
	return (hash_value % size);
}
