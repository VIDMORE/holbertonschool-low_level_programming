#include "search_algos.h"

/**
* linear_search - Linears search algorithm
*
* @array: Pointer to the beginning of an array
* @size: Size of the array
* @value: value to search
* Return: Index or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);	
}
