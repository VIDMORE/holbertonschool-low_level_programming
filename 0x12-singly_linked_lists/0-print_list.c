#include "lists.h"

/**
 * print_list - Function to print a simple lisst
 * @h: head of the simple list
 * Return: Size of the list
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	return (counter);
}
