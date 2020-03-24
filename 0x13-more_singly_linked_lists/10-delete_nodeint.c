#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a given index
 * @head: head of the list
 * @index: index given
 * Return: 1 if works
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, j = 0;
	listint_t *temporal = *head;
	listint_t *previus = *head;
	listint_t *next = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temporal->next;
		free(temporal);
		return (1);
	}

	while (previus != NULL && i < (index - 1))
	{
		previus = previus->next;
		i++;
	}

	while (next != NULL && j < index)
	{
		next = next->next;
		j++;
	}

	if (previus == NULL || next == NULL)
	{
		return (-1);
	}

	previus->next = next->next;

	free(next);

	return (1);
}
