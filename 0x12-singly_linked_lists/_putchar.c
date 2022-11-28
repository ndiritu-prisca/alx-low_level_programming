#include "unistd.h"

/**
  * _putchar - write character to standard output
  * @ch: character to output
  * @Return: 1 on success
  * On error, -1 is returned, and errno is set appropriately.
  */
int _putchar(char ch)
{
	return (write(1, &ch, 1))
}
