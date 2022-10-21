#include "main.h"

/**
  *print_most_numbers - function that prints the numbers, from 0 to 9
  *followed by a new line except 2 and 4
  *
  *Return: numbers other than 2 and 4
  */

void print_most_numbers(void)
{
	char c;

	c = 0;
	while (c <= 9)
	{
		if ((c != 2) && (c != 4))
		{
			continue;
			_putchar(c + 48);
		}
		c++;
		_putchar('\n')
	}
}
