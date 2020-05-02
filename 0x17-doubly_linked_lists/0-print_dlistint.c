#include "lists.h"

/**
 * print_dlistint - Function to print a double list
 * @h: head of the simple list
 * Return: Size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);

	return (0);
}
