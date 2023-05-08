#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
void copy(const char *src, const char *dst);
/**
 * main - copy a file to another file, main is the driver
 * @argc: Number of argumnets passed to the main through terminal
 * @argv: Array of the arguments
 * Return: (0) On success , otherwise on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(argv[1], argv[2]);

	return (0);
}

/**
 * copy - The function that copies the src to dst
 * @src: The source
 * @dst: The dstination
 */
void copy(const char *src, const char *dst)
{
	int fd_src, fd_dst, flag;
	char buff[1025];
	ssize_t sz_read, sz_write;

	fd_src = open(src, O_RDONLY);
	fd_dst = creat(dst, 0664);
	flag = 1;
	while ((sz_read = read(fd_src, buff, 1024)) != 0)
	{
		if (sz_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		buff[sz_read] = '\0';
		sz_write = write(fd_dst, buff, strlen(buff));
		if (sz_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst);
			exit(99);
		}
		if (flag)
		{
			close(fd_dst);
			fd_dst = open(dst, O_APPEND);
			flag = 0;
		}
	}
	if (close(fd_src) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src), exit(100);
	}
	if (close(fd_dst) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dst), exit(100);
	}
}
