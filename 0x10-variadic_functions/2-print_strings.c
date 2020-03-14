#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print strings
* @separator: separator
* @n: number of element
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *c;

	va_start(args, n);

	while (i < n)
	{
		c = va_arg(args, char *);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator && i + 1 != n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
