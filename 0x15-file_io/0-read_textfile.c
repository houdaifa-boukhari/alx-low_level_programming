#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: filename The name of the file to be read.
 * @letters: letters The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_write;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	bytes_read = read(fd, buffer, letters);
	bytes_write = write(1, buffer, bytes_read);
	if (bytes_write == -1 || bytes_read == -1 ||
			bytes_read != bytes_write)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_write);
}
