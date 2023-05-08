#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Read a text file and print it to the scree
 * @filename: The name of the file
 * @letters: Number of letters to read
 * Return: Number of letters actually read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written;
	ssize_t sz;
	char *str;

	str = malloc(letters + 1);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	sz = read(fd, str, letters);
	if (sz < 0)
		return (0);
	str[sz] = '\0';
	written = write(STDOUT_FILENO, str, sz);
	if (written < 0)
		return (0);
	close(fd);
	return (sz);
}
