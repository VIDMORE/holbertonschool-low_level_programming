#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temporal, *saver;

	temporal = head;

	while (temporal != NULL)
	{
		saver = temporal->next;
		free(temporal);
		temporal = saver;
	}
}
