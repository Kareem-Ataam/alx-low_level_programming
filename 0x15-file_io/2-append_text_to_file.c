#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include"main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: Name of the file to append in
 * @text_content: The text to append
 * Return: (1) on success (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sz;

	if (!filename)
		return (-1);
	fd  = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	sz = write(fd, text_content, strlen(text_content));
	if (sz < 0)
		return (-1);
	return (1);
}
