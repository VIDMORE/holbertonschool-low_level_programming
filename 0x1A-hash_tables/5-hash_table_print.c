#include "hash_tables.h"

/**
 * hash_table_print - prints the whole hash table
 * @ht: Hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	int first_pos = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != 0 && temp != NULL)
		{
			if (first_pos == 1)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				first_pos = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);

			temp = temp->next;
		}
	}
	printf("}\n");
}
