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
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	re = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (fd == -1 || re == -1 || wr == -1)
	{
		return (0);
		free(buffer);
	}
	free(buffer);
	close(fd);
	return (wr);
}
