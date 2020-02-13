#include "holberton.h"

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
