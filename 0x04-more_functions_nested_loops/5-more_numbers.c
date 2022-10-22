#include "main.h"

/**
  *more_numbers - a function that prints 10 times the numbers
  *from 0 to 14 followed by a new line
  *
  *Return: void
  */

void more_numbers(void)
{
	int num, tens, units, row;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			tens = num / 10;
			units = num % 10;
			if (num > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
