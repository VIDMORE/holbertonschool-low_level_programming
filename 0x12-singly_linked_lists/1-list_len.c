#include "lists.h"

/**
 * list_len - Print the size of a list
 * @h: head of the list
 * Return: size of the list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
