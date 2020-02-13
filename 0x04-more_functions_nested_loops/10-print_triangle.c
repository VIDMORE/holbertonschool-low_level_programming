#include "holberton.h"

/**
 * print_triangle - print a pyramid 
 * @size: size of the pyramid
 **/

void print_triangle(int size)
{
	int i;
	int a;
	int z;

	if (size > 0)
	{
		for (i = 0; i < size; i++)	
		{
			for (a = (size - 1); a >= i; a--)
			{
				if (a == i)
				{
					for (z = 0; z <= i; z++)
					{
						_putchar('#');
					}
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
