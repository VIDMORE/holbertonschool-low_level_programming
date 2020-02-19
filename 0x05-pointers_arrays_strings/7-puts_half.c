#include "holberton.h"

/**
* puts_half - prints half of a string
* @str: string to split
**/

void puts_half(char *str)
{
	int i, j, lenght;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		lenght = i / 2;
	}
	else
	{
		lenght = (i - 1) / 2;
	}
	for (j = i - lenght; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
