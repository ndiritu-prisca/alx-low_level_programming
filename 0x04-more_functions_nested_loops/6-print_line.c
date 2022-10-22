#include "main.h"

/**
  *print_line - a function that draws a straight line
  *@n: parameter to check
  *Return: void
  */

void print_line(int n)
{
	int line_num;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line_num = 1; line_num <= n; line_num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
