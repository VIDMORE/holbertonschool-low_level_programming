#include "lists.h"

/**
 * get_dnodeint_at_index - set a list in a given index
 * @head: head of the list
 * @index: index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temporal;
	unsigned int i = 0, counter = 0;

	temporal = head;

	while (head)
	{
		head = head->next;
		counter++;
	}

	if (index > counter)
		return (NULL);

	while (i != index)
	{
		temporal = temporal->next;
		i++;
	}

	return (temporal);
}
