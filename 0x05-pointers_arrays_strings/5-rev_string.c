#include "main.h"

/**
  *rev_string -  a function that reverses a string.
  *line.
  *@s: parameter to check
  *Return:void
  */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
