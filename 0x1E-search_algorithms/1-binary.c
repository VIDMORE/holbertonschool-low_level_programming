#include "search_algos.h"

/**
* binary_search - Binary search algorithm
*
* @array: Pointer to the beginning of an array
* @size: Size of the array
* @value: value to search
* Return: Index or -1
*/

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recu_binary_search(array, 0, size - 1, value));
}

/**
* recu_binary_search - recursive function
*
* @array: Pointer to the beginning of an array
* @left: index in the left
* @right: index in the right
* @value: value to search
* Return: Index or -1
*/

int recu_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i = 0, mid = 0, flag = 0;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
		if (!flag)
			printf("%d", array[i]), flag = 1;
		else
			printf(", %d", array[i]);
	printf("\n");

	mid = ((left + right) / 2);

	if (array[mid] == value)
		return (mid);

	if (left == right)
		return (-1);

	else if (array[mid] < value)
		return (recu_binary_search(array, mid + 1, right, value));
	else
		return (recu_binary_search(array, left, mid - 1, value));
}
