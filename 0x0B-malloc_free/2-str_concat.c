
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
* str_concat - function that concatenates two strings
* @s1: String 1
* @s2: String 2
* Return: A pointer to the array.
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, size_1, size_2, full_size;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	size_1 = _strlen(s1);
	size_2 = _strlen(s2);

	full_size = size_1 + size_2;

	ar = malloc((sizeof(char) * (full_size + 1)));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size_1; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < size_2; i++)
	{
		ar[size_1 + i] = s2[i];
	}
	ar[full_size + 1] = '\0';
	return (ar);
}