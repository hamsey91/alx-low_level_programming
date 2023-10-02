#ifndef MAIN_H
#define MAIN_H

/**Hearder files**/
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**putchar function**/
int _putchar(char c);

/**Prototypes of tasks**/
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
