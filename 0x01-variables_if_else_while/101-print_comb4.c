

#include <stdio.h>

/**
* main - possible combinations of single digit numbers
* Return: 0
**/

int main(void)
{
	int n;
	int v;
	int d;

	for (n = '0'; n <= '9'; n++)
	{
		for (v = n + 1; v <= '9'; v++)
		{
			for (d = v + 1; d <= '9'; d++)
			{
				putchar(n);
				putchar(v);
				putchar(d);
				if (v != '8' || n != '7' || d != '9')
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}
	putchar('\n');
	return (0);
}

