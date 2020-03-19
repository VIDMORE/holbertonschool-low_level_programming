#include "lists.h"
int _strlen(const char *s);

/**
 * add_node - function that adds a node
 * @head: head of the list
 * @str: String of the instance
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;


	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	new = *head;

	return (new);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: length of string
 **/

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
