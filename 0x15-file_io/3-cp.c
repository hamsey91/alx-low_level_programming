#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOT_READ_ERROR "Error: Can't read from file %s\n"
#define NOT_WRITE_ERROR "Error: Can't read from file %s\n"
#define NOT_CLOSE_ERROR "Error: Can't close fd %d\n"
#define PERMISSIONS "(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
* main - program that copies the content of a file to another file.
*
* @argc: The number of arguments supplied to the program.
* @argv: A pointer to pointer to the arguments.
*
* Return: 1 on success and -1 on failure
*/
int main(int argc, char **argv)
{
	int from = 0, to = 0;
	ssize_t b;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, NOT_READ_ERROR, argv[1]), exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to == -1)
		 dprintf(STDERR_FILENO, NOT_WRITE_ERROR, argv[2]), exit(99);

	while (( b = read(from, buffer, READ_BUF_SIZE)) > 0)
		if (write(to, buffer, b) != b)
			 dprintf(STDERR_FILENO, NOT_WRITE_ERROR, argv[2]), exit(99);
	if (b == -1)
		 dprintf(STDERR_FILENO, NOT_READ_ERROR, argv[1]), exit(98);

	from = close(from);
	to = close(to);
	if (from)
		 dprintf(STDERR_FILENO, NOT_CLOSE_ERROR, from), exit(100);
	if (to)
		 dprintf(STDERR_FILENO, NOT_CLOSE_ERROR, from), exit(100);

	return (EXIT_SUCCESS);
}
