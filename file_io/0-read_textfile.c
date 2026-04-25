#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: The actual number of bytes read and printed.
 * 0 if the file cannot be opened or read,
 * 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Allocate memory for the buffer based on the number of letters */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* Read from the file descriptor into the buffer */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write the contents of the buffer to the standard output */
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1 || n_wrote != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Clean up resources */
	free(buffer);
	close(fd);

	return (n_wrote);
}
