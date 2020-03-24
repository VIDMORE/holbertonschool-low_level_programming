#include "lists.h"

/**
 * insert_nodeint_at_index - inset a node in the given head
 * @head: head of the list
 * @idx: index
 * @n: number to set
 * Return: return the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, counter = 0;
	listint_t *new, *temporal, *contador;

	temporal = *head;
	contador = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (contador)
	{
		contador = contador->next;
		counter++;
	}
	if (idx == counter)
	{
		new->next = NULL;
		return (new);
	}
	else if (idx > counter)
		return (NULL);

	while (i < (idx - 1))
	{
		temporal = temporal->next;
		i++;
	}

	new->next = temporal->next;
	temporal->next = new;

	return (new);
}
