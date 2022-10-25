#include "main.h"

/**
  *print_rev - a function that prints a string, in reverse, followed by a new
  *line.
  *@s: parameter to check
  *Return:void
  */

void print_rev(char *s)
{
	int len = 0;

	while (s[len]) != '\0'
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
