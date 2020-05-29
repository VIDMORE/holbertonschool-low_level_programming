#include "hash_tables.h"

/**
 * hash_table_get - get the value of the hash table
 * @ht: Hash table
 * @key: Given key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);

	if (node == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
