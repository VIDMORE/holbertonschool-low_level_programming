#ifndef MAGO
#define MAGO

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
*
*
*
*
**/

typedef struct options
{
	char type;
	void (*print_type)(va_list);

}opts

#endif
