#include <stdlib.h>
#include <stdio.h>

/**
* _memcpy - function that copies memory area
* @dest: destination value
* @src: source value
* @n: number of bytes
* Return: a pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer
* @old_size: old size
* @new_size: new size
* Return: new pointer
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
	{
		return (NULL);
	}
	_memcpy(ar, ptr, old_size);

	free(ptr);
	return (ar);
}
