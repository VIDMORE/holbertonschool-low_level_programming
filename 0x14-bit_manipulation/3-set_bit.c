#include "holberton.h"

/**
 * set_bit - set a bit in a determinated index
 * @n: number given
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = *n | 1 << index;

	return (1);

}
