#include "lists.h"

/**
 * dlistint_len - Print the size of a list
 * @h: head of the list
 * Return: size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
