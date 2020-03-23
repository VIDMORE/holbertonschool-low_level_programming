#include "lists.h"
int _strlen(const char *s);

/**
 * add_nodeint_end - function that adds a node at the end
 * @head: head of the list
 * @n: number of the instance
 * Return: new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporal = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporal->next !=  NULL)
		temporal = temporal->next;

	temporal->next = new;

	return (new);
}

