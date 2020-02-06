#include <stdio.h>

/**
* main - function to print the hole alphabet
* Return: 0
**/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
		if (c == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}
