#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print numbers
* @separator: separator
* @n: number of element
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator && i + 1 != n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
