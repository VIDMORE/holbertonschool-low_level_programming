#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: type of identifiers
 **/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *c = "";
	opts opti[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};
	va_start(args, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (opti[j].type == format[i])
			{
				printf("%s", c);
				opti[j].print_type(args);
				c = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

/**
 * print_c - print charts
 * @arg: va_list
 **/

void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - print int
 * @arg: va_list
 **/

void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_f - print floats
 * @arg: va_list
 **/

void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_s - print string
 * @arg: va_list
 **/

void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
