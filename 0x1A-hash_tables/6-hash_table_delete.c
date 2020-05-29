#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hole hash table
 * @ht: Hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL, *saver = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != 0 && temp != NULL)
		{
			saver = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = saver;
		}
	}
	free(ht->array);
	free(ht);
}
