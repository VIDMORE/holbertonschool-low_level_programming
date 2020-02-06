#include <stdio.h>

/**
* main - function to print the alphabet without e and q letters
* Return: 0
**/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

		if (c == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
