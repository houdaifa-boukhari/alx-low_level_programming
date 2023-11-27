#include "main.h"

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
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	buffer = (char *)malloc(1024 * sizeof(char));
	bytes_read = read(fd1, buffer, 1024);
	bytes_write = write(fd2, buffer, 1024);
	if (bytes_write == -1 || bytes_read == -1 ||
			bytes_read != bytes_write)
	{
		free(buffer);
		return (-1);
	}
	if (close(fd2) == -1 || close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
