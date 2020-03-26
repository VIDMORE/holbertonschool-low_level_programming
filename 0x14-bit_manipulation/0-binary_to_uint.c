#include "holberton.h"

/**
 * binary_to_uint - function to convert a binary onto a int
 * @b: binary number
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		num <<= 1;

		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			num += 1;

		i++;
	}
	return (num);
}
