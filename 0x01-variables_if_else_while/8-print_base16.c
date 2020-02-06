#include <stdio.h>

/**
* main - Print numbers in hexadecimal
* Return: 0
**/

int main(void)
{
	char number;
	char alpha;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
