#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: head of the list
 * @n: number of the instance
 * Return: new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;

		new->prev = temp;
		temp->next = new;
	}

	return (new);
}
