#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{

	if (!array)
		return (-1);

	return recu_binary_search(array, 0, size - 1, value);
}

int recu_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i = 0, mid = 0, flag = 0;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		if (!flag)
			printf("%d", array[i]), flag = 1;
		else
			printf(", %d", array[i]);
	}
	printf("\n");

	if (left == right)
		return (-1);

	mid = ((left + right) / 2);

	if (array[mid] == value)
		return (mid);

	else if (array[mid] < value)
		return recu_binary_search(array, mid + 1, right, value);
	else
		return recu_binary_search(array, left, mid - 1, value);
}
