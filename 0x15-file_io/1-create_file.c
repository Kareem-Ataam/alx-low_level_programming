#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Create a new file and populate it
 * with a given string
 * @filename: Name of the file to create
 * @text_content: The text to put in the file
 * Return: (1) on success (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sz;

	if (!filename)
		return (-1);
	fd = creat(filename, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	sz = write(fd, text_content, strlen(text_content));
	if (sz < 0)
		return (-1);
	return (1);
}
