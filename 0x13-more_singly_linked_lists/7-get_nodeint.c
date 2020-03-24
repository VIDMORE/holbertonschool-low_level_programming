#include "lists.h"

/**
 * get_nodeint_at_index - set a list in a given index
 * @head: head of the list
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temporal;
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
