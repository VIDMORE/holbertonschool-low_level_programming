#ifndef MAGO
#define MAGO
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct options - options for the function
* @type: type to print
* @print_type: pointer to function
**/

typedef struct options
{
	char type;
	void (*print_type)(va_list);

} opts;

void print_c(va_list arg);
void print_s(va_list arg);
void print_f(va_list arg);
void print_i(va_list arg);

#endif
