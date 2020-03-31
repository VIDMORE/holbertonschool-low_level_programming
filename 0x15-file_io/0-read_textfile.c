#include "holberton.h"

/**
 * read_textfile - function that reads a text
 * @filename: name of the file
 * @letters: amount of letters
 * Return: write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re, wr;
	char buffer[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	re = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (!(fd || re || wr))
	{
		return (0);
	}

	close(fd);
	return (wr);
}
