#include "holberton.h"

/**
 * clear_bit - clears a bit in a determinated index
 * @n: number given
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
