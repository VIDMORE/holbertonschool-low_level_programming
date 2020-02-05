#include <stdlib.h>
#include <string.h>

/**
* main - wtites a text without using printf
* Return: 1
**/

int main(void)
{

	const char* string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, string, strlen(string));
	return (1);
}
