#include "holberton.h"
void reverse_print(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	reverse_print(n);
}

/**
 * reverse_print - Function that prints a binary in reverse
 * @n: number
 */

void reverse_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
		reverse_print(n >> 1);

	_putchar((n & 1) + '0');
}
