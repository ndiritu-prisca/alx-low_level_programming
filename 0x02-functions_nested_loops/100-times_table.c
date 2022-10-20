#include "main.h"

/**
  * print_times_table - a function that prints the n times table
  *
  *@n: the parameter to check
  *
  *Return: number matrix
  */

void print_times_table(int n)
{
	int a, b, mul;

	if (n >= 0 && n <= 15)
	{
		for  (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mul = a * b;
				_putchar(44);
				_putchar(32);
				if (mul <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mul + 48);
				}
				else if (mul <= 99)
				{
					_putchar(32);
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else
				{
					_putchar(((mul / 100)  % 10) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
