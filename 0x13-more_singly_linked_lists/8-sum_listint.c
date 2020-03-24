#include "lists.h"

/**
 * sum_listint - function to sum a list
 * @head: head of the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
