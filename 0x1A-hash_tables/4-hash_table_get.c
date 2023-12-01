#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 *
 * @ht:  the hash table you want to look into.
 * @key:  the key you are looking for.
 *
 * Return: - NULL if the key cannot be found.
 *	- the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	ht_node = ht->array[idx];
	while (ht_node && strcmp(ht_node->key, key) != 0)
		ht_node = ht_node->next;

	return ((ht_node == NULL) ? NULL : ht_node->value);
}
