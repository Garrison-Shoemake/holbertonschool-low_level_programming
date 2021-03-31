#include "holberton.h"
/**
 * read_textfile - function name, reads and prints a text file
 * @filename: name of the file to read and write
 * @letters: number of letters to read and write
 * Return: returns count of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	count = read(fd, buffer, letters);
	if (count == -1)
		return (0);

	write(STDOUT_FILENO, buffer, count);

	free(buffer);
	close(fd);
	return (count);

}
