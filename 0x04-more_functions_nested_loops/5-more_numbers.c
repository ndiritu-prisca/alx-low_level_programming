#include "main.h"

/**
  *more_numbers - a function that prints 10 times the numbers
  *from 0 to 14 followed by a new line
  *
  *Return: *10 a-z
  */

void more_numbers(void)
{
	char c, cm;

	cm = 0;
	while (cm < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar((c / 10) + '0')
		}
		cm++;
		_putchar('\n');
	}
}
