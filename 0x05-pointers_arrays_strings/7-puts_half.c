#include "holberton.h"

/**
* puts_half - prints half of a string
* @str: string to split
**/

void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i--;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
