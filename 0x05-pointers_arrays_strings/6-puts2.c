#include "main.h"

/**
  *puts2 - a function that prints every other character of a string, starting
  *with the first character, followed by a new line.
  *@str: parameter to check
  *Return:void
  */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	len = len - 1;
	for (; i <= len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
