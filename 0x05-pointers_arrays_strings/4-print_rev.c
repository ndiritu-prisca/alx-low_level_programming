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
	int num;

	while (s[num++])
		len++;
	for (num = len - 1; num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
