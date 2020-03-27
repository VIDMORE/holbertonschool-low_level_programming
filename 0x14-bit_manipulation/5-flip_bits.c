#include "holberton.h"

/**
 * flip_bits - count the number of bits to be fliped
 * @n: first number
 * @m: second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int num;

	num = (n ^ m);

	while (num != 0)
	{
		if (num & 1)
			counter++;
		num >>= 1;
	}

	return (counter);
}
