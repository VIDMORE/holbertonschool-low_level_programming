#ifndef MAGO
#define MAGO
#include <stdarg.h>

/**
 * struct va - Variadic global structure.
 * @va: Struct.
 * @f: Function.
 */
typedef struct va
{
	char *va;
	void (*f)();
} va_f;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
