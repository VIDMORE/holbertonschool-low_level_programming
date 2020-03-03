#include <stdio.h>
#include <stdlib.h>

/**
* create_array -  function that creates an array of chars
* @size: size to specify
* @c: initialization char
* Return: a pointer to the array, or NULL if it fails
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(c) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
