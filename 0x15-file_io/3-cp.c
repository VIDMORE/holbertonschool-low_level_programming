#include "holberton.h"

/**
 * main - Function that copies the content of a file to another file.
 * @argc: Argc.
 * @argv: Argv.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int filef, filet, readff, writeft;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	filef = open(argv[1], O_RDONLY);

	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	filet = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (filet == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	readff = read(filef, buffer, BUFF_SIZE);
	writeft = write(filet, buffer,  readff);

	if (readff == -1 || writeft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);

	if (close(filef) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef), exit(100);
	if (close(filet) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filet), exit(100);

	return (0);
}
