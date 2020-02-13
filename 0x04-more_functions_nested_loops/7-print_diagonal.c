#include "holberton.h"

void print_diagonal(int n)
{
	int i;
	int a;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)	
		{
			if (i != 0)
			{
				for (a = 0; a < i; a++)
				{
					_putchar(' ');
				}

				_putchar('\\');
				_putchar('\n');
			}

		}
	}
	else
	{
		_putchar('\n');
	}
}
