#include "main.h"

/**
  *puts_half - a function that prints half of a string, followed by a new line.
  *@str: parameter to check
  *Return: void
  */

void puts_half(char *str)
{
	int i, t;
	int len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		t = len / 2;
	else
		t = (len + 1) / 2;

	for (i = t; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
