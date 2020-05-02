#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node in a given index
 * @head: head of the list
 * @index: index given
 * Return: 1 if works
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, j = 0;
	dlistint_t *temporal = *head;
	dlistint_t *previus = *head;
	dlistint_t *sig = *head;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = temporal->next;
		temporal->next->prev = NULL;
		free(temporal);
		return (1);
	}

	while (previus != NULL && i < (index - 1))
	{
		previus = previus->next;
		i++;
	}

	while (sig != NULL && j < index)
	{
		sig = sig->next;
		j++;
	}

	if (!previus || !sig)
		return (-1);

	previus->next = sig->next;
	if (sig->next != NULL)
		sig->next->prev = previus;
	free(sig);

	return (1);
}
