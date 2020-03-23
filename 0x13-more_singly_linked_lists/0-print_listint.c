#include "lists.h"

/**
 * print_listint - Function to print a simple lisst
 * @h: head of the simple list
 * Return: Size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
