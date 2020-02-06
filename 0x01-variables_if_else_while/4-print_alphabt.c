#include <stdio.h>

int main(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
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
