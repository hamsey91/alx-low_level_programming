#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key. key can not be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 if it succeeded, otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_h_node;
	char *cp_value;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}

	new_h_node = malloc(sizeof(hash_node_t));
	if (new_h_node == NULL)
	{
		free(cp_value);
		return (0);
	}
	new_h_node->key = strdup(key);
	if (new_h_node->key == NULL)
	{
		free(new_h_node);
		return (0);
	}
	new_h_node->value = cp_value;
	new_h_node->next = ht->array[idx];
	ht->array[idx] = new_h_node;

	return (1);
}
