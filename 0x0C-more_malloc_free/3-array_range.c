#include <stdlib.h>

/**
* 
*
*
*
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
