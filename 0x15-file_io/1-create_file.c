#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: text
 * Return: write
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
