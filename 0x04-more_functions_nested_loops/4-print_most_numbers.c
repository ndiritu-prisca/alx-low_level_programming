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

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			continue;
			_putchar(c + 48);
		}
	}
	_putchar('\n');
}
