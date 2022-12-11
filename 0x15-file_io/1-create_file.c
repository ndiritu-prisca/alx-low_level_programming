#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: name of the file to create
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t count;
	char *str = text_content;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; *text_content != '\0'; count++)
			;
		w = write(fd, str, count);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
