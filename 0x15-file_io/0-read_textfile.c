#include "main.h"

/**
  * read_textfile - a function that reads a text file and prints it to the
  * POSIX standard output.
  * @filename: file to be read
  * @letters: number of chars to be read and written
  * Return: number of chars written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w = 0, r = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (w);
}
