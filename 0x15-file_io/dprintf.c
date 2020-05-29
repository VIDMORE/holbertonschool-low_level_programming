#include "holberton.h"

int main(int argc, char *argv[])
{
	int fd;

	fd = open(argv[1], O_WRONLY);

	dprintf(1, "Esta es una prueba, grupo #2 el mejor");

	return (0);
}