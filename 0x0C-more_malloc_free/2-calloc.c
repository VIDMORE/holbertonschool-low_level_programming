#include <stdio.h>
#include <stdlib.h>

/**
* _calloc -  function that allocates memory for an array
* @nmemb: number of elements
* @size: size of the memory
* Return: pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return ((void *)p);
}
