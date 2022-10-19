#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
  *main- Entry
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	/**
	  *_putchar -writes character to standard output
	  *
	  *Return: On success 1
	  *On error, -1 is returned, and errno is set appropriately
	  */

	int _putchar(char c);
	return (write(1, &"_putchar\n", 9));

	return (0);
}
