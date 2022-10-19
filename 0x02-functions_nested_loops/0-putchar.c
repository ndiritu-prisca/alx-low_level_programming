#include <main.h>

/**
  *_putchar - writes character to standand output
  *
  *Return: On success 1.
  *On error, -1 is returned, and errno is set appropriately.
  */

int _putchar(char)
{
	return (write(1, "_putchar", 1))
}
