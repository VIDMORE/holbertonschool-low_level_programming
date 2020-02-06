

#include <stdio.h>

/**
* main - possible combinations of single digit numbers
* Return: 0
**/

int main(void)
{
	int n;
	int v;

	for (n = 48; n <= 57; n++)
	{
		for (v = n + 1; v <= 57; v++)
		{
			putchar(n);
			putchar(v);
			if (v != '9' || n != '8')
			{
				putchar(44);
				putchar(32);
			}
		}

	}
	putchar('\n');
	return (0);
}

