#include <stdio.h>

/**
* main - possible combinations of single digit numbers
* Return: 0
**/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
		putchar(44);
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}

