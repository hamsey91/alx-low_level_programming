#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename:  the name of the file
 * @text_content:  the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	size_t len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len] != '\0')
	{
		len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

