#include "main.h"

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
