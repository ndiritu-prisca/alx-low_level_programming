#include "main.h"

/**
  * errorMsg - a function that prints the error message
  * @code: the exit code
  * @msg: message to print
  * @filename: name of the file
  * Return: void
  */
void errorMsg(int code, char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
		exit(code);
}

/**
  * close_fd - a functio that closes the file descriptor and prints
  * error message if it fails
  * @fd: file descriptor to be clsed
  * Return: 0 on success
  */
int close_fd(int fd)
{
	int check;

	check = close(fd);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
  * main - entry
  * @ac: argument ccount
  * @argv: argument vector
  * Return: 1 on success
  */
int main(int ac, char *argv[])
{
	char buf[1024];
	ssize_t rd, wr, rw = 1;
	size_t num = 1024;
	int fd1, fd2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	if (argv[1] == NULL)
		return (-1);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		errorMsg(98, "Error: Can't read from file", argv[1]);
	}

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT 00664);
	if (fd2 == -1)
	{
		errorMsg(99, "Can't write to", argv[2]);
	}
	while (rw)
	{
		rd = read(fd1, buf, num);
		if (rd == -1)
			errorMsg(98, "Error: Can't read from file", argv[1]);
		else if (rd == 0)
			break;
		wr = write(fd2, buf, rd);
		if (wr == -1)
			errorMsg(99, "Can't write to", argv[2]);
	}

	close_fd(fd1);
	close_fd(fd2);
	dprintf(STDOUT_FILENO, "%s\n", buf);
	return (0);
}
