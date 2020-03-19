#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: first element of the list
 */
void free_list(list_t *head)
{
	list_t *temporal, *saver;

	temporal = head;

	while (temporal != NULL)
	{
		saver = temporal->next;
		free(temporal->str);
		free(temporal);
		temporal = saver;
	}
}
