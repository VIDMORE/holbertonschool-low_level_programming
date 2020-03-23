#include "lists.h"

/**
 * listint_len - Function to print a simple lisst
 * @h: head of the simple list
 * Return: Size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
