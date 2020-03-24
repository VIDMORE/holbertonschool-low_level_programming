#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporal, *saver;

	temporal = *head;

	if (head == NULL)
		return;

	while (temporal != NULL)
	{
		saver = temporal->next;
		free(temporal);
		temporal = saver;
	}
	*head = NULL;
}
