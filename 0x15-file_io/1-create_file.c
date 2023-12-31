#include "main.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: Name of the file
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success
 *	-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int b;
	size_t len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, len);

	if (fd == -1 || b == -1)
		return (-1);

	close(fd);

	return (1);
}

