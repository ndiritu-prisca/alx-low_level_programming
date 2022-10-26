#include "main.h"

/**
  *puts_half - a function that prints half of a string, followed by a new line.
  *@str: parameter to check
  *Return: void
  */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;
	len = len - 1;
	len = len % 2;

	for (; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
