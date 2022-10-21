#include "main.h"

/**
  *print_numbers - function that prints the numbers, from 0 to 9, followed by a
  *new line.
  *
  *Return: void
  */

void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
