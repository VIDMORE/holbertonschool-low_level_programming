#include <stddef.h>

/**
* array_iterator - function that executes a function given as a parameter
* @array: array of numbers
* @size: array size
* @action: function
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
