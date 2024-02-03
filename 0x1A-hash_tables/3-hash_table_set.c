#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @htable: The hash table to add or update the key/value to
 * @key: The key to add or update
 * @val: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *htable, const char *key, const char *val)
{
	unsigned long int index;
	hash_node_t *new_node, *curr;

	if (!htable || !key || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, htable->size);
	curr = htable->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(val);
			return (curr->value ? 1 : 0);
		}
		curr = curr->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(val);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = htable->array[index];
	htable->array[index] = new_node;

	return (1);
}
