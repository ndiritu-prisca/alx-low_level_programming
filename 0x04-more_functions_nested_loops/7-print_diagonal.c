#include "main.h"

/**
  *print_diagonal - a function that draws a diagonal line in the terminal
  *@n: parameter to check
  *Return: void
  */

void print_diagonal(int n)
{
	int row, line_num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < n; row++)
	{
		for (line_num = 0; line_num < row; line_num++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
