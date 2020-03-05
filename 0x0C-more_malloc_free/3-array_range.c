#include <stdlib.h>

/**
* array_range - function that creates an array of integers
* @min: min number
* @max: max of number
* Return: pointer to array
**/

int *array_range(int min, int max)
{

	int *p, i, j;

	j = ((max - min) + 1);
	p = malloc(sizeof(int) * j);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
