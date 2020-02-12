#include "holberton.h"

/**
* jack_bauer - print the hole hours of a day
*
**/

void jack_bauer(void)
{
	int h1;
	int h2;

	for (h1 = 0; h1 <= 23; h1++)
	{
		for (h2 = 0; h2 <= 59; h2++)
		{

			_putchar(h1 / 10 + '0');
			_putchar(h1 % 10 + '0');
			_putchar(':');
			_putchar(h2 / 10 + '0');
			_putchar(h2 % 10 + '0');
			_putchar('\n');
		}
	}
}
