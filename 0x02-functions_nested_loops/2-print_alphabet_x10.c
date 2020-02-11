#include "holberton.h"

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	while (i < 10)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
