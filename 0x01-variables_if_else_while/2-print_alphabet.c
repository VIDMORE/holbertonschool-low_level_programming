#include <stdio.h>

/**
* main - function to print the hole alphabet
* Return: 0
**/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		if (c == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
