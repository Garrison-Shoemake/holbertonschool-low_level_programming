#include "holberton.h"
/**
 * append_text_to_file - function name, appends at end of file
 * @filename: name of the file to append
 * @text_content: content to append
 * Return: success = 1, fail = -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
