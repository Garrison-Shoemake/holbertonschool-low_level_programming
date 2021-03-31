#include "holberton.h"
/**
 * create_file - function name, creates a file
 * @filename: filename to create
 * @text_content: null terminates string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
