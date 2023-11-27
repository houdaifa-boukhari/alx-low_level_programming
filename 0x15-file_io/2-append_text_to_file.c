#include "main.h"

/**
* append_text_to_file - that appends text at the end of a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 * Return: 1 on success, -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_write;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	bytes_write = write(fd, text_content, strlen(text_content));
	if (bytes_write == -1 || bytes_write != (int)strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
