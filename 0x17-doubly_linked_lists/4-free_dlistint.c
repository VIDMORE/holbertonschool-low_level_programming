#include "lists.h"

/**
 * free_dlistint - Function that frees a list
 * @head: first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporal, *saver;

	temporal = head;

	while (temporal != NULL)
	{
		saver = temporal->next;
		free(temporal);
		temporal = saver;
	}
}
