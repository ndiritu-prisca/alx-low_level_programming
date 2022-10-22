#include "main.h"

/**
  *print_square - a function that prints a square, followed by a new line.
  *@size: is the parameter to check
  *Return: void
  */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
