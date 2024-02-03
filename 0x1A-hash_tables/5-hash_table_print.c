#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_flag = 0; /* Flag to check if a comma is needed */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current_node = ht->array[i];

		while (current_node)
		{
			if (comma_flag == 1)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			comma_flag = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
