#include "main.h"

/**
  *print_diagonal - a function that draws a diagonal line in the terminal
  *@n: parameter to check
  *Return: void
  */

void print_diagonal(int n)
{
	int row, line_num;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (line_num = 1; line_num <= row - 1; line_num++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
