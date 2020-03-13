#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 *
 *
 **/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, count = 0;
	va_list args;
	char *compare;
	opts opti[] = {
		{ "c", print_c},
		{ "i", print_i},
		{ "f", print_f},
		{ "s", print_s},
	};
	
	while (i < 4)
	{
		while (j < 4)
		{
			if (opti[j].type == format[i])
				count ++;
			j++;
		}
		i++;
	}
}

/**
* print_c - print charts
*
*
*
**/

void print_c(va_list)
{

va_


}

/**
* print_i - 
*
*
*
*
**/

void print_i(va_list)
{

}

/**
* print_f - print floats
*
*
*
**/

void print_f(va_list)
{


}

/**
* print_s - print string
*
*
*
**/

void print_s(va_list)
{

}
