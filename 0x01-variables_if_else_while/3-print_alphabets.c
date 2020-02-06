#include <stdio.h>

/**
* main - function to print the alphabet twice
* Return: 0
**/

int main(void)
{
	char c;
	char uc;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		if (c == 'z')
		{
			for (uc = 'A'; uc <= 'Z'; uc++)
			{
				putchar(uc);
				if (uc == 'Z')
					putchar('\n');
			}
		}
	}
	return (0);
}
