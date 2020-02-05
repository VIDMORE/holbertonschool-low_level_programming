#include <unistd.h>
#include <string.h>

/**
* main - wtites a text only using write
* Return: 1
**/

int main(void)
{

	const char* string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, string, strlen(string));
	return (1);
}
