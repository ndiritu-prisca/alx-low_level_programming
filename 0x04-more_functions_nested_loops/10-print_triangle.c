#include "main.h"

/**
  *print_triangle - a function that prints a triangle, followed by a new line.
  *@size: size of the triangle
  *Return: void
  */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (b <= (size - a))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
