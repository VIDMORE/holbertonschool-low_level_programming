#include "lists.h"

/**
 * pop_listint - function to pop up a list
 * @head: head of the list
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *temporal;
	int n = 0;

	if (*head == NULL)
		return (0);

	temporal = *head;

	n = temporal->n;

	*head = temporal->next;

	free(temporal);

	return (n);
}
