#include "main.h"

/**
 * append_text_to_file - FUnction that appends text at the eof.
 *
 * @filename: Pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: -1 if function fails or filename is NULL.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
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

