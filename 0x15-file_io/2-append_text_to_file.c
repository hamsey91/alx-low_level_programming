#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	size_t len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len])
		len++;

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

