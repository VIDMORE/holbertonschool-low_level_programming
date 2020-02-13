#include "holberton.h"

/**
* print_line - print lines
* @n: number of lines
**/

void print_line(int n)
{
	int i;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
