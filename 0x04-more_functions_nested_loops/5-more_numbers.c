#include "main.h"

/**
  *more_numbers - a function that prints 10 times the numbers
  *from 0 to 14 followed by a new line
  *
  *Return: *10 a-z
  */

void more_numbers(void)
{
	char i, j, k, n;

	for (n = 0; n < 10; n++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k < 10)
				j = k;
			else
			{
				i = k / 10;
				j = k % 10;
				_putchar('0' + i);
			}
			_putchar('0' + j);
		}
		_putchar('\n')
	}
}
