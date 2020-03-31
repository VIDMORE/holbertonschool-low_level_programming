#include "holberton.h"

/**
 * append_text_to_file - function that appends text
 * @filename: name of the file
 * @text_content: text
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
	}

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
