#include "main.h"

/**
 * read_textfile- function that reads a text file and prints it to
 *		the POSIX standard output.
 *
 * @filename: file name to be read 
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters * sizeof(char));
	int fd;
	ssize_t b;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return(0);

	b = read(fd, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	free(buf);
	close(fd);
	return (b);
}

