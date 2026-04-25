#include "main.h"

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate the length of the string if it is not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/*
	 * O_CREAT: Create the file if it doesn't exist.
	 * O_WRONLY: Open the file for write-only access.
	 * O_TRUNC: Truncate the file if it already exists.
	 * 0600: Permissions rw------- (Read/Write for owner only).
	 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Write the content if text_content is not NULL */
	if (text_content != NULL)
	{
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1 || n_wrote != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
