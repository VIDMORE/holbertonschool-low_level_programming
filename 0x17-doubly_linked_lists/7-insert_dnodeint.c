#include "lists.h"

/**
 * insert_dnodeint_at_index - inset a node in the given head
 * @h: head of the list
 * @idx: index
 * @n: number to set
 * Return: return the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temporal = *h;

	if (!*h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		if (temporal->next)
			new->next = *h;
		new->prev = NULL;
		if (temporal->next)
			temporal->prev = new;
		*h = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		temporal = temporal->next;
		i++;
	}
	if (temporal == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temporal->next;
	new->prev = temporal;
	if (temporal->next)
		temporal->next->prev = new;
	temporal->next = new;

	return (new);
}
