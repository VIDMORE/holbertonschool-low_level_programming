#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

/**
* _strlen - function that returns the length of a string.
* @s: string
* Return: length of string
**/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _strdup -  function that returns a pointer to a newly space
* @str: String
* Return: a pointer to the array.
 **/

char *_strdup(char *str)
{
	int i, size;
	char *ar;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str);
	ar = malloc((sizeof(str) * size) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
