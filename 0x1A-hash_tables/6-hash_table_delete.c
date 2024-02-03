#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *tempp;

	if (ht == NULL)
		return;

	/* Iterate through each element in the array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		/* Free the memory for each key-value pair */
		while (current)
		{
			tempp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tempp;
		}
	}

	/* Free array itself and the hash table */
	free(ht->array);
	free(ht);
}
