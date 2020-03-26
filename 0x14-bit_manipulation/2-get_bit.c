#include "holberton.h"

/**
 * get_bit - get the exact bit of a number given
 * @n: number given
 * @index: index of the string
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > 63)
		return (-1);

	n >>= index;
	return (n & 1);
}
