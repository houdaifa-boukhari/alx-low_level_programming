#include "main.h"

/**
* creat_buffer - creat buffer to 1024 byte
 * @filename: The name file
 *
 * Return: void
 */

void	*creat_buffer(char *filename)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
* close_file - close file.
 * @fd: The file descriptor to be close
 *
 * Return: void
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - copies the content of a file to another file.
 * @argc: The number of argument.
 * @argv: argument.
 * Return: 1 on success.
 */

int main(int argc, char **argv)
{
	int fd1;
	int fd2;
	int bytes_read;
	int bytes_write;
	void *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	buffer = creat_buffer(argv[2]);
	bytes_read = read(fd1, buffer, 1024);
	do {
		if (fd1 == -1 || bytes_read  == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		bytes_write = write(fd2, buffer, 1024);
		if (bytes_write == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytes_read = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	free(buffer);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
