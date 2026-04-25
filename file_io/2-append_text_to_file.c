#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate the length of text_content if it is not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/*
	 * O_WRONLY: Open the file for writing only.
	 * O_APPEND: The file offset is set to the end of the file before each write.
	 * We do NOT use O_CREAT because the file must already exist.
	 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file */
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
