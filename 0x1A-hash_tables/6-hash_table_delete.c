#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 *
 * @ht: The hash table deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *ht_node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ht_node = ht->array[i];
			while (ht_node != NULL)
			{
				temp = ht_node->next;
				free(ht_node->key);
				free(ht_node->value);
				free(ht_node);
				ht_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
