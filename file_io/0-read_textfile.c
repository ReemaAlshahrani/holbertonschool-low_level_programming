#include "main.h"
#include <stdlib.h>

/**
 * perform_io - Reads from file and writes to stdout.
 * @fd: File descriptor.
 * @buffer: The buffer to use.
 * @letters: Number of letters to read.
 * Return: Number of letters written, or 0 on failure.
 */
ssize_t perform_io(int fd, char *buffer, size_t letters)
{
	ssize_t n_read, n_wrote;

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		return (0);
	}
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1 || n_wrote != n_read)
	{
		return (0);
	}
	return (n_wrote);
}

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Name of the file.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	n = perform_io(fd, buffer, letters);
	free(buffer);
	close(fd);
	return (n);
}
