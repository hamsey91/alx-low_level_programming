#include "hash_tables.h"

/**
 * hash_table_print -  Function that prints a hash table.
 *
 * @ht: the hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ht_node;
	unsigned long int i;
	unsigned char status = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (status == 1)
				printf(", ");

			ht_node = ht->array[i];
			while (ht_node != NULL)
			{
				printf("'%s': '%s'", ht_node->key, ht_node->value);
				ht_node = ht_node->next;
				if (ht_node != NULL)
					printf(", ");
			}
			status = 1;
		}
	}
	printf("}\n");
}
