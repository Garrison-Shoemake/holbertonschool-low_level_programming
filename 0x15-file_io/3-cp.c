#include "holberton.h"
#include <stdio.h>

/**
 * cp - function name, copies from one file to another
 * @argc: number of arguments, always 3, 0 - cp, 1 from, 2 - to
 * @argv: arguments as names to copy file from and to
 * Return: return 0 on success, exit if fail
 */
int cp(int argc, char *argv[])
{
	int from, to, wr, rd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDWR);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(from, buffer, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	wr = write(from, buffer, 1024);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to);
		exit(100);
	}
	return (0);
}
