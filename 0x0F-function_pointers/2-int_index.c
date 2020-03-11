#include <stddef.h>

/**
* int_index - function that searches for an integer
* @array: array
* @size: size of the array
* @cmp: function
* Return: it depends
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1)
	}
}
