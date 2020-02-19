#include "holberton.h"
/**
 * print_number - Print the numbers
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a;

	if (n >= 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar('-');
		a = -1 * n;
		if (a >= 10)
			print_number(a / 10);
		_putchar((a % 10) +  '0');
	}
}
