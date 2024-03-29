#include "main.h"

/**
* create_file - Creates file with the specified filename
* and writes the given text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 * Return: 1 on success, -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_write;

	bytes_write = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
