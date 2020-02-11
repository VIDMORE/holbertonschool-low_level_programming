#include <stdio.h>

/**
* print_to_98 - print the numbers from n to 98
* @n: number gived
**/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
